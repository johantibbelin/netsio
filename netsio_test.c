/*
    Netsio in C to connect to Fujinet-PC
*/

#include "netsio.h"

int main(int argc, char** argv) {
    
    int i;
    printf("netSIO test program.\n");
    for (i=0;i<argc;i++) {
        printf("%s ,",argv[i]);
    }
    return 0;
}