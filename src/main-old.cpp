/*
 * File:   main.cpp
 * Author: franklin
 *
 * Created on November 14, 2009, 5:33 PM
 */

#include <stdlib.h>
#include "bot.hpp"

/*
 *
 */
int main(int argc, char **argv)
{

    // Create a new bot object
    bot fewb;

    // Start the statsHandler
    // Connect to the Server
    server myServer = fewb.readServerList();
    int blah = fewb.connectToServer(myServer);

    // connectionHandler myCH; // declare an instance of connectionHandler
    // myCH.makeSocket();

    // connect to the channel, call channel join method

    return (EXIT_SUCCESS);
}
