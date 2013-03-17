#include "currencymodel.h"

CurrencyModel::CurrencyModel(QList<myDataFromDB> dataList, QObject *parent) :
    QSqlRelationalTableModel(parent)
{
    myData = dataList;
}

int CurrencyModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return myData.size();
}

int CurrencyModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return 6;
}

QVariant CurrencyModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid())
        return QVariant();
    if(index.row() >= myData.size() || index.row() < 0)
        return QVariant();

    if(role == Qt::DisplayRole){
        myDataFromDB data = myData.at(index.row());
        if(index.column() == 0)
            return data.eventId;
        else if(index.column() == 1)
            return data.info;
        else if(index.column() == 2)
            return data.control_date;
        else if(index.column() == 3)
            return data.userId;
        else if(index.column() == 4)
            return data.toDo;
        else if(index.column() == 5)
            return data.note;
    }
    return QVariant();
}

Qt::ItemFlags CurrencyModel::flags(const QModelIndex &index) const
{
    if(!index.isValid())
        return Qt::ItemIsEnabled;

    return QSqlRelationalTableModel::flags(index) | Qt::ItemIsEditable;
}

bool CurrencyModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if(index.isValid() && role == Qt::EditRole){
        int row = index.row();

        myDataFromDB md = myData.value(row);
        if(index.column() == 0)
            md.eventId = value.toInt();
        else if(index.column() == 1)
            md.info = value.toString();
        else if(index.column() == 2)
            md.control_date = value.toDate();
        else if(index.column() == 3)
            md.userId = value.toInt();
        else if(index.column() == 4)
            md.toDo = value.toBool();
        else if(index.column() == 5)
            md.note = value.toString();
        else
            return false;

        myData.replace(row, md);
        emit (dataChanged(index, index));

        return true;
    }
    return false;
}

QVariant CurrencyModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(role != Qt::DisplayRole)
        return QVariant();

    if(orientation == Qt::Horizontal){
        switch (section){
        case 0:
            return trUtf8("№ задания");
        case 1:
            return trUtf8("Информация");
        case 2:
            return trUtf8("Срок исполнения");
        case 3:
            return trUtf8("Ответственный");
        case 4:
            return trUtf8("Исполнено?");
        case 5:
            return trUtf8("Примечание");
        default:
            return QVariant();
        }
    }
    return QVariant();
}

bool CurrencyModel::insertRows(int row, int count, const QModelIndex &parent)
{
    Q_UNUSED(parent);
    beginInsertRows(QModelIndex(), );
}

bool CurrencyModel::removeRows(int row, int count, const QModelIndex &parent)
{
}
