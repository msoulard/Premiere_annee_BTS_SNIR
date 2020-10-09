/* 
 * File:   serie.h
 * Author: msoulard
 *
 * Created on 16 janvier 2020, 14:49
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/termios.h>
#include <unistd.h>
#include <string.h>

#ifndef SERIE_H
#define SERIE_H

int ouvrirPort(const char *device);
void configurerPort(int fd, int baud);
int envoyerMessage(int fd, char *message);
int recevoirMessage(int fd, char *message, char fin);
void fermerPort(const int fd);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* SERIE_H */

