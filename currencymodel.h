#ifndef CURRENCYMODEL_H
#define CURRENCYMODEL_H

#include <QSqlRelationalTableModel>
#include <QList>
#include <QDate>
struct myDataFromDB
{
    int eventId;
    QString info;
    QDate control_date;
    int userId;
    bool toDo;
    QString note;
};

class CurrencyModel : public QSqlRelationalTableModel
{
    Q_OBJECT
public:
    explicit CurrencyModel(QObject *parent = 0);
    explicit CurrencyModel(QList<myDataFromDB> dataList, QObject *parent = 0);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role);
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    bool insertRows(int row, int count, const QModelIndex &parent);
    bool removeRows(int row, int count, const QModelIndex &parent);

private:
    QList<myDataFromDB> myData;

};

#endif // CURRENCYMODEL_H
