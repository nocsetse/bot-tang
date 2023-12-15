/*
 * File:   bot.cpp
 * Author: franklin
 *
 * Created on March 2, 2012, 12:11 AM
 */

#include "bot.hpp"
#include <fstream>
#include <iostream>

/* *****************************************
 * Name:
 * Input:
 * Output:
 * Returns:
 * Description: Default Constructor
 * *****************************************
 */
bot::bot() {}

/* *****************************************
 * Name:
 * Input:
 * Output:
 * Returns:
 * Description: Copy Constructor
 * *****************************************
 */
bot::bot(const bot &orig) {}

bot::~bot() {}

/*
 * Name:
 * Input:
 * Output:
 * Returns:
 * Description: This method should look for a file containing
 * a list of servers and ports for the bot to cycle through
 */
server bot::readServerList()
{

    server myServer;
    std::ifstream ifs("servers.txt");
    std::string line;
    while (std::getline(ifs, line))
    {
        // do whatever you want with the line here
    }
    return myServer;
}

/* *****************************************
 * Name:
 * Input:
 * Output:
 * Returns:
 * Description:
 * *****************************************
 */
int bot::connectToServer(server)
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

    // myConnection.ai_family = AF_INET;
    // myConnection.ai_socktype = SOCK_STREAM;
    // myConnection.ai_protocol = 0;

    //   retVal returnCode = static_cast<retVal>(connectionHandler::setServerInfo());

    // should this be in a try/catch?
    try
    {

        // if ((socketFileDescriptor = socket(myConnection.ai_family,
        // myConnection.ai_socktype,
        // myConnection.ai_protocol)) == -1 )
        //{
        //    cerr << "makeSocket() failed \n";

        //     return ERROR;
        // }
    }
    catch (exception &e)
    {
        cout << "Standard exception: " << e.what() << endl;
    }

    // try {
    //  bind(socketFileDescriptor,,)
    //  } catch () { returnCode = ERROR }

    return SUCCESS;
}
