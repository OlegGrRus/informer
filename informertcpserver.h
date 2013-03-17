#ifndef INFORMERTCPSERVER_H
#define INFORMERTCPSERVER_H
#include <QObject>

class QTcpServer;
class QTextEdit;
class QTcpSocket;

class InformerTCPServer : public QObject
{
    Q_OBJECT

private:
    QTcpServer* m_ptcpServer;
    quint16     m_nNextBlockSize; //размер блока для отправки/приема данных

private:
    void sendToClient(QTcpSocket* pSocket, const QString& str);

public:
    InformerTCPServer(int nPort);

public slots:
    virtual void slotNewConnection();
            void slotReadClient   ();

};

#endif // INFORMERTCPSERVER_H
