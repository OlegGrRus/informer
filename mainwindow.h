#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtSql>
#include <QDebug>
#include <QFile>
#include <QDateTime>
#include <QtSql>
#include "informertcpserver.h"
#include "currencymodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    bool connectDB(const QString &dbName);
    bool createDB(const QString &dbName);
    void createModel();
    void deleteModel();
    void setupView();
    bool connectToDatabase(const QString &dbPath);

    QSqlDatabase db; //база данных
    QFile logFile; //лог-файл
    InformerTCPServer *myServer; //TCP-сервер
    CurrencyModel *model; //модель


public slots:

    void openDB(QString &pathBD);
    void openLog(QString &logPath);
    void preference();
    void quit();
    void editUsersTable();
    void editOtdelTable();
    void find();
    void newRecord();
    void previousRecord();
    void nextRecord();
    void saveRecord();
    void deleteRecord();
    void help();
    void about();
};

#endif // MAINWINDOW_H
