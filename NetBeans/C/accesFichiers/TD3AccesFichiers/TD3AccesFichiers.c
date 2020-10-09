/* 
 * File:   TD3AccesFichiers.c
 * Author: msoulard
 *
 * Created on 16 janvier 2020, 10:41
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "biblioTD3.h"
#pragma pack(push, 1)

int main(int argc, char** argv) {
    int retour;
    FILE *fic;
    typeEnTeteFichierBmp enTeteFichier;
    typeEnTeteImage enTeteImage;


    //ouverture du fichier en lecture
    fic = fopen("/home/USERS/ELEVES/SNIR2019/imgBMP/plasma.bmp", "r");
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //lecture de l'en-tête du fichier
    retour = fread(&enTeteFichier, sizeof (typeEnTeteFichierBmp), 1, fic);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    afficheEnTeteFichierBmp(enTeteFichier);
    //lecture de l'en-tête de l'image
    retour = fread(&enTeteImage, sizeof (typeEnTeteImage), 1, fic);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    afficheEnTeteImageBmp(enTeteImage);
    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    
    return (EXIT_SUCCESS);
}

