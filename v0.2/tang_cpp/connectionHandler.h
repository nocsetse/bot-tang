/* 
 * File:   connectionHandler.hpp
 * Author: franklin
 *
 * Created on November 14, 2009, 5:35 PM
 */

#include <string>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>


using namespace std;

#ifndef _CONNECTIONHANDLER_HPP
#define	_CONNECTIONHANDLER_HPP

// return types for functions

enum retVal {
    ERROR = -1, SUCCESS
};

struct sockaddr_in sa; // IPv4
struct sockaddr_in6 sa6; // IPv6

struct serverInfo {
    int ai_flags; // AI_PASSIVE, AI_CANONNAME, etc.
    int ai_family; // AF_INET, AF_INET6, AF_UNSPEC
    int ai_socktype; // SOCK_STREAM, SOCK_DGRAM
    int ai_protocol; // use 0 for "any"
    size_t ai_addrlen; // size of ai_addr in bytes
    struct sockaddr *ai_addr; // struct sockaddr_in or _in6
    char *ai_canonname; // full canonical hostname

    struct addrinfo *ai_next; // linked list, next node
};

class connectionHandler {
public:
    connectionHandler();
    connectionHandler(const connectionHandler& orig);
    virtual ~connectionHandler();

    // member variables
    const char* node; // e.g. "www.example.com" or IP
    const char* service; // e.g. "http" or port number


    // member functions
    int setServerInfo(); // keep it public so it can be set from outside
    int connectionHandler::makeSocket();

private:
    // member variables
    int socketFileDescriptor;
    serverInfo myConnection;
    // member functions
};


#endif	/* _CONNECTIONHANDLER_HPP */

