#include "biblioCompressionDecompression.h"

int decompressBMP(char* source, char* destination) {
    int i;
    int retour;
    int erreur;
    char repetition;
    char valeurOctet;
    int nbOctet;
    FILE *ficCompresse;
    FILE *ficDecompresse;
    typeEnTeteFichierBmp enTeteFichier;
    typeEnTeteImageBmp enTeteImage;
    typeCouleur palette;

    nbOctet = 0;
    erreur=0;

    //ouverture du fichier compressé en lecture
    ficCompresse = fopen(source, "r");
    if (ficCompresse == NULL) {
        printf("%s\n", strerror(errno));
        erreur++;
        exit(errno);
    }
    //ouverture du fichier décompresé en mode création/écriture
    ficDecompresse = fopen(destination, "w+");
    if (ficDecompresse == NULL) {
        printf("%s\n", strerror(errno));
        erreur++;
        exit(errno);
    }
    //lecture de l'en-tête du fichier compressé
    retour = fread(&enTeteFichier, sizeof (typeEnTeteFichierBmp), 1, ficCompresse);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        erreur++;
        exit(errno);
    }
    //copie de l'en-tête du fichier compressé dans l'en-tête du fichier décompressé
    retour = fwrite(&enTeteFichier, sizeof (typeEnTeteFichierBmp), 1, ficDecompresse);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        erreur++;
        exit(errno);
    }
    //lecture de l'en-tête de l'image compressée
    retour = fread(&enTeteImage, sizeof (typeEnTeteImageBmp), 1, ficCompresse);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        erreur++;
        exit(errno);
    }
    //copie de l'en-tête de l'image compressée dans l'en-tête de l'image décompressée
    retour = fwrite(&enTeteImage, sizeof (typeEnTeteImageBmp), 1, ficDecompresse);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        erreur++;
        exit(errno);
    }
    //boucle pour lire les couleurs
    for (i = 0; i < enTeteImage.nbCouleursUtilisees; i++) {
        //lecture de la palette de l'image compressée
        retour = fread(&palette, sizeof (typeCouleur), 1, ficCompresse);
        if (retour != 1) {
            printf("%s\n", strerror(errno));
            erreur++;
            exit(errno);
        }
        //copie de la palette de l'image compressée dans la palette de l'image décompressée
        retour = fwrite(&palette, sizeof (typeCouleur), 1, ficDecompresse);
        if (retour != 1) {
            printf("%s\n", strerror(errno));
            erreur++;
            exit(errno);
        }
    }
    //calcul de la taille du fichier
    do {
        retour = fread(&repetition, sizeof (char), 1, ficCompresse);
        if (retour != 1) {
            printf("%s\n", strerror(errno));
            erreur++;
            exit(errno);
        }
        retour = fread(&valeurOctet, sizeof (char), 1, ficCompresse);
        if (retour != 1) {
            printf("%s\n", strerror(errno));
            erreur++;
            exit(errno);
        }
        for (nbOctet = 0; nbOctet < repetition; nbOctet++) {
            retour = fwrite(&valeurOctet, sizeof (char), 1, ficDecompresse);
        }
    } while (repetition != 0 || valeurOctet != 1);
    //fermer le fichier compressé
    retour = fclose(ficCompresse);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        erreur++;
        exit(errno);
    }
    //modification de la taille du fichier dans l'en-tête du fichier décompressé
    enTeteFichier.tailleFichier = sizeof (typeEnTeteFichierBmp) + sizeof (typeEnTeteImageBmp) + 256 * 4+ (enTeteImage.resolutionHorizontale*enTeteImage.resolutionVerticale);      
    //modification du type de compression dans l'en-tête de l'image décompressée
    enTeteImage.typeCompression = 0;
    //enregistre
    retour=fseek(ficDecompresse, 0, SEEK_SET);
    retour=fwrite(&enTeteFichier, sizeof(typeEnTeteFichierBmp),1,ficDecompresse);
    if (retour != 1) {
            printf("%s\n", strerror(errno));
            erreur++;
            exit(errno);
        }
    retour = fwrite(&enTeteImage, sizeof (typeEnTeteImageBmp), 1, ficDecompresse);
     if (retour != 1) {
            printf("%s\n", strerror(errno));
            erreur++;
            exit(errno);
        }
    //fermer le fichier décompressé
    retour = fclose(ficDecompresse);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        erreur++;
        exit(errno);
    }
    
    return erreur;
}