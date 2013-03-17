#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //представление помещаем в центр формы
    setCentralWidget(ui->tableView);
    //открываем лог
    QString logPath = "informer.log";
    openLog(logPath);
    //открываем БД
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = "docs_db.sqlite";
    openDB(dbPath);

    //////
    connect(ui->actionQuit, SIGNAL(triggered()), this, SLOT(quit()));
    connect(ui->actionNewRecord, SIGNAL(triggered()), this, SLOT(newRecord()));
    connect(ui->actionNextRecord, SIGNAL(triggered()), this, SLOT(nextRecord()));
    connect(ui->actionPreviousRecord, SIGNAL(triggered()), this, SLOT(previousRecord()));
    myServer = new InformerTCPServer(2323); //запускаем сервер
}

MainWindow::~MainWindow()
{
    db.close();
    logFile.flush();
    logFile.close();
    delete myServer;
    delete ui;
}

void MainWindow::createModel() //создаем модель
{
    if(db.isOpen()){
        model = new CurrencyModel(this);
        model -> setTable("EventTable");
        model -> setRelation(3, QSqlRelation("UsersTable", "id_user","user_fio"));
        model -> setRelation(4, QSqlRelation("yes_no", "id", "value"));
//        model -> setHeaderData(0, Qt::Horizontal,trUtf8("№ Задания"));
//        model -> setHeaderData(1, Qt::Horizontal,trUtf8("Информация"));
//        model -> setHeaderData(2, Qt::Horizontal,trUtf8("Дата контроля"));
//        model -> setHeaderData(3, Qt::Horizontal,trUtf8("Ответственный"));
//        model -> setHeaderData(4, Qt::Horizontal,trUtf8("Исполнено?"));
//        model -> setHeaderData(5, Qt::Horizontal,trUtf8("Примечания"));
        model->setEditStrategy(QSqlTableModel::OnFieldChange);
        model -> select();

        ui->tableView->setModel(model);
        ui->tableView->setItemDelegate(new QSqlRelationalDelegate(this));
        ui->tableView->verticalHeader()->hide();

        ui->tableView->setAlternatingRowColors(true);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();

    }
}

void MainWindow::openDB(QString &pathBD)
{
    if(pathBD.isEmpty()){
        QMessageBox::warning(this, trUtf8("Внимание"), trUtf8("Повторите попытку открытия файла"));
        return;
    }
    else{
        if(connectToDatabase(pathBD)){
            createModel();
            ui->statusBar->showMessage(trUtf8("База данных открыта...")+db.databaseName(), 3000);
        }
        else
            QMessageBox::warning(this, trUtf8("Внимание"), db.lastError().text());
    }
    //////////////
}

void MainWindow::openLog(QString &logPath)
{
    logFile.setFileName(logPath);
    if (logFile.exists()){
        if(!logFile.open(QIODevice::Append | QIODevice::WriteOnly | QIODevice::Text))
            qDebug() << "Cannot open log file";
    }
    else
        qDebug() << "File not created :(";
}

void MainWindow::preference()
{
}

void MainWindow::quit()
{
    close();
}

void MainWindow::editUsersTable()
{
}

void MainWindow::editOtdelTable()
{
}

void MainWindow::find()
{
}

void MainWindow::newRecord()
{
    //вставка новой строки
    qDebug() << "Add new row...";
}

void MainWindow::previousRecord()
{
    //предыдущая запись
    qDebug() << "Previous record...";
}

void MainWindow::nextRecord()
{
    //следующая запись
    qDebug() << "Next record...";

}

void MainWindow::saveRecord()
{
    //сохранить измнения
    qDebug() << "Commit record...";

}

void MainWindow::deleteRecord()
{
    //удалить запись
    qDebug() << "Delete record...";
}

void MainWindow::help()
{
    //открыть помощь
}

void MainWindow::about()
{
    //о программе
}

bool MainWindow::connectToDatabase(const QString &dbPath)
{
    db.setDatabaseName(dbPath);
    if(!db.open()){
        QMessageBox::warning(this, trUtf8("Ошибка"), trUtf8("Не возможно открыть базу данных"));
        qDebug() << "Error: " << db.lastError().text();//Debug only
        return false;
    }
    if(logFile.isOpen()){
        QTextStream out(&logFile);
        QDateTime dt(QDateTime::currentDateTime());
        out << dt.toString() << " Success connection to " << db.databaseName() << "\n";
    }
    else
        qDebug() << "Log file is not opened :(";
    return true;
}
