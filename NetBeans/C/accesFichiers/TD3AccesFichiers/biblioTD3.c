#include "biblioTD3.h"

void afficheEnTeteFichierBmp(typeEnTeteFichierBmp e) {
    printf("EN-TETE DU FICHIER :\n");
    printf("signature : %c%c\n", e.signature[0], e.signature[1]);
    printf("taille du fichier : %u\n", e.tailleFichier);
    printf("octets réservés : %u\n", e.reserve);
    printf("adresse relative des informations de l'image : %u\n", e.adresse);
}

void afficheEnTeteImageBmp(typeEnTeteImage e) {
    printf("\nEN-TETE DE L'IMAGE :\n");
    printf("taille de l'en-tête : %u\n", e.tailleEnTente);
    printf("dimension de l'image : %ux%u pixels\n", e.largeur, e.hauteur);
    printf("nombre de plan : %u\n", e.nbPlan);
    printf("nombre de bits utilisés par pixel : %u\n", e.bitParPixel);
    printf("type de compression : %u\n", e.typeCompression);
    printf("taille de l'image : %u pixels\n", e.tailleImage);
    printf("résolution horizontale : %u\n", e.resolutionHorizontale);
    printf("résolution verticale : %u\n", e.resolutionVerticale);
    printf("nombre de couleuèrs utilisées : %u\n", e.nbCouleursUtilisees);
    printf("nombre de couleurs importantes : %u\n", e.nbCoulerusImportantes);
}

