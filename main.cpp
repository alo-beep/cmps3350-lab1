// CMPS 3350 - lab1 is all about source control AND git
// Prints each command-line argument passed into the program, one per line
// a new change
#include <stdio.h>

int main(int argc, char ** argv)
{
    for(int i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    return 0;
}
