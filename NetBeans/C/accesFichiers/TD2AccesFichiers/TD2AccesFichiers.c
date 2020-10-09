/* 
 * File:   TD2AccesFichiers.c
 * Author: msoulard
 *
 * Created on 15 janvier 2020, 10:55
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char** argv) {
    int retour;
    FILE *fic;
    unsigned int largeur;
    unsigned int hauteur;
    unsigned int couleur;
    int i;

    //ouverture du fichier en lecture
    fic = fopen("/home/USERS/ELEVES/SNIR2019/imgBMP/plasmaRLE.bmp", "r");
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    // on se positionne au 18e octet (largeur) 
    retour = fseek(fic, 18, SEEK_SET);
    if (retour == -1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    //lire la largeur
    retour = fread(&largeur, sizeof (largeur), 1, fic);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //afficher la largeur
    printf("largeur de l'image : %u pixels\n", largeur);

    //lire la hauteur
    retour = fread(&hauteur, sizeof (hauteur), 1, fic);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //afficher la hauteur
    printf("hauteur de l'image : %u pixels\n", hauteur);

    // on se positionne au 42e octet
    retour = fseek(fic, 20, SEEK_CUR);
    if (retour == -1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    //lire la couleur
    retour = fread(&couleur, sizeof (couleur), 1, fic);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    //afficher la couleur
    printf("%u couleurs dans l'image\n", couleur);

    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    return (EXIT_SUCCESS);
}

