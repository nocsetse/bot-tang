/*
 * File:   connectionHandler.cpp
 * Author: franklin
 *
 * Created on November 14, 2009, 5:35 PM
 *
 * Description: Handles the basic connection to the IRC server
 *
 */

#include "connectionHandler.hpp"
#include <string.h>
#include <iostream>
// #include <exception.h>
#include <sys/types.h>
#include <sys/socket.h>
// #include <netinet/in.h>
// #include <netdb.h>
// #include <unistd.h>

using namespace std;

/* *****************************************
 * Name:
 * Input:
 * Output:
 * Returns:
 * Description: Default Constructor
 * *****************************************
 */
connectionHandler::connectionHandler()
{
}

/* *****************************************
 * Name:
 * Input:
 * Output:
 * Returns:
 * Description: Copy Constructor
 * *****************************************
 */
connectionHandler::connectionHandler(const connectionHandler &orig)
{
}

connectionHandler::~connectionHandler()
{
}
/* *****************************************
 * Name:
 * Input:
 * Output:
 * Returns:
 * Description:
 * *****************************************
 */
int connectionHandler::setServerInfo()
{

    /*
     * serverInfo->ai_family = AF_INET; // AF_INET, AF_INET6, AF_UNSPEC
     * serverInfo->ai_socktype = SOCK_STREAM; // SOCK_STREAM, SOCK_DGRAM
     * serverInfo->ai_protocol = 0; // use 0 for "any"
        serverInfo->ai_flags;     // AI_PASSIVE, AI_CANONNAME, etc.
        serverInfo->ai_addrlen;   // size of ai_addr in bytes
        struct sockaddr *ai_addr;      // struct sockaddr_in or _in6
        char            *ai_canonname; // full canonical hostname
        struct addrinfo *ai_next;      // linked list, next node
     */

    // obviously this should not be hard coded...change the setter so it can
    // be called from outside the class, e.g. from main()

    myConnection.ai_family = AF_INET;
    myConnection.ai_socktype = SOCK_STREAM;
    myConnection.ai_protocol = 0;

    return SUCCESS;
}

/* *****************************************
 * Name:
 * Input:
 * Output:
 * Returns:
 * Description:
 * *****************************************
 */
int connectionHandler::makeSocket()
{

    retVal returnCode = static_cast<retVal>(connectionHandler::setServerInfo());

    // should this be in a try/catch?
    try
    {

        if ((socketFileDescriptor = socket(myConnection.ai_family,
                                           myConnection.ai_socktype,
                                           myConnection.ai_protocol)) == -1)
        {
            cerr << "makeSocket() failed \n";

            returnCode = ERROR;
        }
    }
    catch (exception &e)
    {
        cout << "Standard exception: " << e.what() << endl;
    }

    // try {
    //  bind(socketFileDescriptor,,)
    //  } catch () { returnCode = ERROR }

    return returnCode;
}