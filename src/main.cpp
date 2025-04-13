/*
 * File:   main.cpp
 * Author: franklin
 *
 * Created on November 14, 2009, 5:33 PM
 */
#include <stddef.h>
#include <iostream>
#include "stdlib.h"
#include <fstream>
#include "bot.hpp"

// using namespace std;

int main(int argc, char **argv)
{

    // Create a new bot object
    bot fewb;

    // Start the statsHandler
    // Connect to the Server
    server myServer;

    ifstream ifs("/cygdrive/c/Users/franklin/Documents/workspace/tang_cpp/servers.txt");
    string line;
    while (std::getline(ifs, line))
    {
        // int blah = fewb.connectToServer(myServer);
        std::cout << myServer << endl;
    }

    // connectionHandler myCH; // declare an instance of connectionHandler
    // myCH.makeSocket();

    // connect to the channel, call channel join method
    return (EXIT_SUCCESS);
}