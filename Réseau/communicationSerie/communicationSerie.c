/* 
 * File:   communicationSerie.c
 * Author: msoulard
 *
 * Created on 16 janvier 2020, 14:47
 */

#include <stdio.h>
#include <stdlib.h>
#include "serie.h"

int main(int argc, char** argv) {
    int fd;
    int nb;
    char message[1000];
    
    fd = ouvrirPort("/dev/ttyS0");
    configurerPort(fd,9600);
    
    do{
       nb=recevoirMessage(fd,message, '\r');
       printf("%s\n",message);
       envoyerMessage(fd, message);
    }while(strncmp(message, "bye", 3));
    fermerPort(fd);

    return (EXIT_SUCCESS);
}

