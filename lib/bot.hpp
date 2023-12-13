/* 
 * File:   bot.hpp
 * Author: franklin
 *
 * Created on March 2, 2012, 12:11 AM
 */

#ifndef BOT_HPP
#define	BOT_HPP

#include <string.h>
#include <iostream>
//#include <exception.h>
#include <sys/types.h>
#include <sys/socket.h>
//#include <netinet/in.h>
//#include <netdb.h>
//#include <unistd.h>

using namespace std;

struct server {
    char serverName[30];
    int port;
};

enum errorCodes {
    SUCCESS = 0,
    ERROR
};

//struct sockaddr_in sa; // IPv4
//struct sockaddr_in6 sa6; // IPv6

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

    //int socketFileDescriptor;
    //serverInfo myConnection;
    
class bot {
public:
    bot();
    bot(const bot& orig);
    virtual ~bot();

    server readServerList();
    int connectToServer(server);

private:
    
};


#endif	/* BOT_HPP */

