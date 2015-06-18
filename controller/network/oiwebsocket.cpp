#include "oiwebsocket.h"

#include "oiwebsocketserver.h"

/*!
 * \brief OiWebSocket::OiWebSocket
 * \param parent
 */
OiWebSocket::OiWebSocket(QObject *parent) :
    QThread(parent)
{
    this->internalRef = OiWebSocketServer::generateUniqueId();
}

/*!
 * \brief OiNetworkConnection::getInternalRef
 * \return
 */
int OiWebSocket::getInternalRef(){
   return this->internalRef;
}

/*!
 * \brief OiNetworkConnection::setSocket
 * \param socketDescriptor
 * \return
 */
bool OiWebSocket::setSocket(const QPointer<QWebSocket> &mySocket){
    this->socket = mySocket;
    QObject::connect(this->socket, &QWebSocket::textMessageReceived, this, &OiWebSocket::readMessage, Qt::AutoConnection);
    return true;
}

/*!
 * \brief OiNetworkConnection::receiveResponse
 * Is called whenever a response to a request of this client is available
 * \param response
 */
void OiWebSocket::receiveResponse(const QPointer<OiRequestResponse> &response){

    if(response.isNull()){
        return;
    }

    //send response to client
    this->socket->sendTextMessage(response->response.toByteArray());
    if(response->myRequestType != OiRequestResponse::eStartWatchwindow){
        delete response;
    }

}

/*!
 * \brief OiNetworkConnection::readMessage
 * Is called whenever a client has sent a message to OpenIndy
 */
void OiWebSocket::readMessage(const QString &msg){

    //create new xml request
    QPointer<OiRequestResponse> request = new OiRequestResponse();
    request->requesterId = this->internalRef;
    request->request.setContent(msg);

    emit this->sendRequest(request);

}
