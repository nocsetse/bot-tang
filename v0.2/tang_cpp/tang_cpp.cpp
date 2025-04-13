/*
* tang_cpp.cpp : Defines the entry point for the console application.
*/

#include "stdafx.h"
using std::cout;
using std::endl;

// Need to link with Ws2_32.lib
#pragma comment(lib, "ws2_32.lib")

/*
* our callback function 
*/
int end_of_motd(char* params, irc_reply_data* hostd, void* conn)
{
	IRC* irc_conn=(IRC*)conn;
	//irc_conn->join("#fubaria"); /* join the channel #magpie */
	return 0;

}

/* 
* This thread maintains connection to IRC server  
*/
void cmd_thread(void* irc_conn) 
{
	IRC* conn=(IRC*)irc_conn;
	//int status;

	getc(stdin); /* read in a character from standard in (basically pause for a single keypress) */
	//status = conn->join("#fubaria");
	conn->quit("Leaving"); /* send the Quit command to the IRC server */
	_endthread(); /* end the thread */
}

int _tmain(int argc, _TCHAR* argv[])
{
	int status = 0;
	IRC conn; //declare an IRC connection
	WORD wVersionRequested;
	WSADATA wsaData; 
	int iResult;

	/* Use the MAKEWORD(lowbyte, highbyte) macro declared in Windef.h */
	wVersionRequested = MAKEWORD(2, 2);

	//if (WSAStartup(MAKEWORD(1, 1), &wsaData)) /* more winsock rubbish */
	iResult = WSAStartup(wVersionRequested, &wsaData);

	if (iResult != 0) 
	{
		//printf("Failed to initialise winsock!\n");
		//printf("WSAStartup failed: %d\n", iResult);
		/* Tell the user that we could not find a usable */
		/* Winsock DLL.                                  */
		printf("WSAStartup failed with error: %d\n", iResult);
	}

	/* Confirm that the WinSock DLL supports 2.2.        */
	/* Note that if the DLL supports versions greater    */
	/* than 2.2 in addition to 2.2, it will still return */
	/* 2.2 in wVersion since that is the version we      */
	/* requested.                                        */

	if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2) {
		/* Tell the user that we could not find a usable */
		/* WinSock DLL.                                  */
		printf("Could not find a usable version of Winsock.dll\n");
		WSACleanup();
		return 1;
	}
	else
		printf("The Winsock 2.2 dll was found okay\n");

	/* install any hooks/handlers/callback functions of yours
	 * that you wish cpIRC to call when a specified IRC event
	 * occurs:

	 conn.hook_irc_command("irc response", &function_name);
	 
	 where "irc?response"?is?an?IRC?reply?such?as?376?or?JOIN,?and?function_name?is?
	 the?name?of?a?callback?function?of?the?format:
	 
	 int function_name(char* params, irc_reply_data* hostd, void* conn)
	 {
	    IRC* irc_conn=(IRC*)conn; // notice that you are passed a pointer to the connection object
	   return 0;
     }

	 *
	 * hook the end of MOTD message 
	 */
	//conn.hook_irc_command("376", &end_of_motd);

	/* spawn our key input thread */
	//_beginthread(cmd_thread, 0, (void*)&conn); 
	
	
	/*
	 * status = conn.start("some.irc.server.com", 6667, "some nick", "some user", "some irc name", "some password");
	*/
	wprintf(L"Connecting to IRC server now:\n");
	status = conn.start("irc.he.net", 6667, "gnat", "gnat", "gnat", "tang_password");
	if (status == 1)
	{
		// The WSACleanup function terminates use of the Winsock 2 DLL (Ws2_32.dll).
	    WSACleanup(); 
		printf("Start IRC connection fails.\n");
	}


	//conn.message_loop(); 

	return 0;
}

