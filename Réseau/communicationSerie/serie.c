#include "serie.h"

int ouvrirPort(const char *device){
    int fd;
    fd=-1;
    //ouverture du fichier
    fd=open(device,O_RDWR | O_NOCTTY);
    if(fd == -1){
        printf("problème lors de l'ouverture : %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }
    return fd;
}

void configurerPort(int fd, int baud){
    struct termios term;
    speed_t vitesse;
    tcgetattr(fd, &term);
    switch(baud){
        case 2400:
            vitesse=B2400;
            break;
        case 4800:
            vitesse=B4800;
            break;
        case 9600:
            vitesse=B9600;
            break;            
        case 19200:
            vitesse=B19200;
            break;
        case 38400:
            vitesse=B38400;
            break;            
    }
    //écriture de la vitesse dans la structure
    cfsetispeed(&term,vitesse);
    //enregistrer dans la structure term avec prise en compte immédiate
    tcsetattr(fd, TCSANOW, &term);
}

int envoyerMessage(int fd, char *message){
    int longueur;
    int nb;
    longueur=strlen(message);
    nb=write(fd,message,longueur);
    return nb;
}

int recevoirMessage(int fd, char *message, char fin){
    char caractere_recu;
    int nb;
    nb=0;
    do{
        read(fd, message, 1);
        caractere_recu = *message;
        message++;
        nb++;
    }while(caractere_recu != fin);
    *message='\0';
    return nb;
}

void fermerPort(int fd){
    close(fd);
}