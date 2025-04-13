// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: reference additional headers your program requires here
#ifdef _WIN32_WINNT
//#include <stdlib.h>
#include <windows.h>
#include <process.h>	//allows _beginthread
#include "tang_cpp.h"
#include "IRC.h"
#include <winsock.h>
//#include <winsock2.h>
//#include <ws2tcpip.h>
#include <stdlib.h>   // Needed for _wtoi
#include <iostream>
#else
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#define closesocket(s) close(s)
#define SOCKET_ERROR -1
#define INVALID_SOCKET -1
#endif