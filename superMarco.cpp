// IDENTIFIER  = B99292359FFD910ED13A7E6C7F9705B8742F0D79

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <getopt.h>
#include <unistd.h>
#include <stdlib.h>
#include <cstddef> 
#include <stdint.h>
#include "classes.cpp"

using namespace std;

    static struct option long_options[] = {
    { "stack", no_argument, nullptr, 's' },
    { "queue", no_argument, nullptr, 'q' },
    { "output", required_argument, nullptr, 'o'},
    {"help", no_argument, nullptr, 'h'},
    { nullptr,  0, nullptr, '\0'}
    };

// function declarations for main

void printHelp(char *argv[]) {
   cout << "Usage: " << argv[0] << " [--stack|--queue --output = M|L] -h\n";
   cout << "This program simulates a castle with options for stack or \n";
   cout << "queue mode and map output types." << endl;
}  // printHelp()

int main(int argc, char *argv[]) {
    // cout << "hi";

    ios_base::sync_with_stdio(false);

    Castle my_castle;
    int opt = 0;
    int option_index = 0;
    int s_count = 0; int q_count = 0;
    while ((opt = getopt_long(argc, argv, "sqo:h", long_options, &option_index)) 
    != -1) {
        switch(opt) {
            case 'h':
                printHelp(argv);
                return 0;           
            case 's':
                my_castle.stack_mode_on = true;
                s_count++;
                break;

            case 'q':
                my_castle.stack_mode_on = false;
                q_count++;
                break;

            case 'o':
            
                if (*optarg == 'L') {
                    my_castle.default_map = false;
                }
                break;
            
            default: 
                cerr << "invalid option" << endl;
                exit(1);
            // check for errors in case more than one

        }
    }
    if (s_count + q_count != 1) {
        if (s_count + q_count == 0) {
            cerr << "Stack or queue must be specified" << endl;
        } 
        else {
            cerr << "Stack or queue can only be specified once" << endl;
        }
        exit(1);
    }
    my_castle.driver();
    return 0;
}

