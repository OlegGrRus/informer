#include <QtNetwork>
#include "informertcpserver.h"


//отправляем сообщения клиенту
void InformerTCPServer::sendToClient(QTcpSocket *pSocket, const QString &str)
{
    QByteArray arrBlock;
    QDataStream out(&arrBlock, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_8);
    out << quint16(0) << QTime::currentTime() << str;
    out.device()->seek(0);
    out << quint16(arrBlock.size() - sizeof(quint16));
    pSocket->write(arrBlock);
}

InformerTCPServer::InformerTCPServer(int nPort)
{
    m_ptcpServer = new QTcpServer(0);
    if(!m_ptcpServer->listen(QHostAddress::Any, nPort)){
        //пишем ошибку что порт не открылся

        m_ptcpServer->close();
        return;
    }

   connect(m_ptcpServer, SIGNAL(newConnection()), this, SLOT(slotNewConnection()));


}

//создаем сокет для соединения клиентов
void InformerTCPServer::slotNewConnection()
{
    QTcpSocket *pClientSocket = m_ptcpServer->nextPendingConnection();
    connect(pClientSocket, SIGNAL(disconnected()), pClientSocket, SLOT(deleteLater()));
    connect(pClientSocket, SIGNAL(readyRead()),this, SLOT(slotReadClient()));
    sendToClient(pClientSocket, trUtf8("Сервак ответил")/*отправить сообщение клиенту "бла-бла-бла"*/);
}

//получаем сообщения от клиента
void InformerTCPServer::slotReadClient()
{
    QTcpSocket *pClientSocket = (QTcpSocket*)sender();
    QDataStream in(pClientSocket);
    in.setVersion(QDataStream::Qt_4_8);
    for(;;){
        if(!m_nNextBlockSize){
            if(pClientSocket->bytesAvailable() < sizeof(quint16))
                break;
        }
        in >> m_nNextBlockSize;

        if (pClientSocket->bytesAvailable() < m_nNextBlockSize) {
            break;
        }
        QTime time;
        QString str;
        in >> time >> str; //записываем сообщения от клиента
        //time записываем себе в лог, например
        //str пишем туда же
        m_nNextBlockSize = 0; //обнуляем счетчик байт

        sendToClient(pClientSocket, trUtf8("Сервак ответил")/*отправить сообщение клиенту "бла-бла-бла"*/);
    }
}
