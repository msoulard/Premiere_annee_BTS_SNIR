/*
 * File:   TD1AccesFichiers.c
 * Author: msoulard
 *
 * Created on 9 janvier 2020, 10:41
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "biblio.h"
//#pragma pack(push, 1)

int main() {
    FILE *fic;
    int retour;

    /*Question 1*/
/*
    //ouvir fichier en mode création/écriture
    fic = fopen("/home/USERS/ELEVES/SNIR2019/msoulard/Documents/langage C (accès fichiers)/essai.txt", "w+");
    // pb ouverture fichier
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //écrire "bonjour" dans le fichier
    retour = fputs("bonjour", fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
*/

    /*Question 2*/
/*
    char carac;
    //ouverture du fichier en lecture
    fic = fopen("/home/USERS/ELEVES/SNIR2019/fichierTexte.txt", "r");
    // pb ouverture fichier
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //lire le fichier du début à la fin caractère par caractère
    //lire le premier caractère et l'afficher
    retour = fgetc(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    carac = (unsigned char) retour;
    printf("%c", carac);
    //boucle de lecure
    while (!feof(fic)) {
        retour = fgetc(fic);
        if (retour == EOF) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
        carac = (unsigned char) retour;
        printf("%c", carac);
    }
    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
*/

    /*Question 3*/
/*
    char carac;
    int compt;
    compt = 0;
    //ouverture du fichier en lecture
    fic = fopen("/home/USERS/ELEVES/SNIR2019/fichierTexte.txt", "r");
    // pb ouverture fichier
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //lire le fichier du début à la fin
    //boucle de lecure
    while (!feof(fic)) {
        carac = fgetc(fic);
        if (carac != EOF) {
            //compter le nombre de caractères minuscules non accentuées
            if ('a' <= carac && carac <= 'z') {
                compt++;
            }
            printf("%c", carac);
        } else {
            if (!feof(fic)) {
                printf("erreur de lecture");
                exit(errno);
            }
        }
    }
    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    printf("\nend\n");
    printf("%d", compt);
*/

    /*Question 4*/
        /*Version 1*/
/*
    typePersonne personne[5];
    int i;
    //ouvir fichier en mode création/écriture
    fic = fopen("/home/USERS/ELEVES/SNIR2019/msoulard/Documents/langage C (acces fichiers)/TD1Question4(version1).txt", "w+");
    // pb ouverture fichier
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //créer 5 personnes et les enregistrer
    for (i = 0; i < 5; i++) {
        strcpy(personne[i].nom,"nom");
        strcpy(personne[i].prenom,"prenom");
        personne[i].age=20+i;
        personne[i].poids=50+i;
        personne[i].sexe='f';
        retour=fprintf(fic,"%s %s %d %.2f %c\n", personne[i].nom,personne[i].prenom,personne[i].age,personne[i].poids,personne[i].sexe);
    }
    if (retour <0) {
        printf("Erreur de lecture\n");
        exit(errno);
    }
    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
*/
        /*Version 2*/
/*
    typePersonne personne[5];
    int i;
    //ouvir fichier en mode création/écriture
    fic = fopen("/home/USERS/ELEVES/SNIR2019/msoulard/Documents/langage C (acces fichiers)/TD1Question4(version2)bis.txt", "w+");
    // pb ouverture fichier
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //créer 5 personnes
    for (i = 0; i < 5; i++) {
        strcpy(personne[i].nom,"nom");
        strcpy(personne[i].prenom,"prenom");
        personne[i].age=20+i;
        personne[i].poids=50+i;
        personne[i].sexe='f';
    }
    //déclaration du nombre de personnes dans le fichier
    int nb=5;
    retour=fwrite(&nb, sizeof(int),1,fic);
    if (retour <0) {
        printf("Erreur de lecture\n");
        exit(errno);
    }
    //écrire dans le fichier le contenu souhaité
    retour = fwrite(personne, sizeof (typePersonne), 5, fic); //enregistrement des personnes
    if (retour <0) {
        printf("Erreur de lecture\n");
        exit(errno);
    }
    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
*/

    /*Question 8*/
        /*Version 1*/
/*
        typePersonne personne;
    int i;
    //ouvir fichier en mode création/écriture
    fic = fopen("/home/USERS/ELEVES/SNIR2019/msoulard/Documents/langage C (acces fichiers)/TD1Question4(version1).txt", "w+");
    // pb ouverture fichier
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //créer 5 personnes et les enregistrer
    for (i = 0; i < 5; i++) {
        strcpy(personne.nom,"nom");
        strcpy(personne.prenom,"prenom");
        personne.age=20+i;
        personne.poids=50+i;
        personne.sexe='f';
        retour=fprintf(fic,"%s %s %d %.2f %c\n", personne.nom,personne.prenom,personne.age,personne.poids,personne.sexe);
    }
    if (retour <0) {
        printf("Erreur de lecture\n");
        exit(errno);
    }
    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
*/
        /*Version 2*/
/*
    typePersonne personne[5];
    int i;
    //ouvir fichier en mode création/écriture
    fic = fopen("/home/USERS/ELEVES/SNIR2019/msoulard/Documents/langage C (acces fichiers)/TD1Question8(version2).txt", "w+");
    // pb ouverture fichier
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //créer 5 personnes
    for (i = 0; i < 5; i++) {
        strcpy(personne[i].nom,"nom");
        strcpy(personne[i].prenom,"prenom");
        personne[i].age=20+i;
        personne[i].poids=50+i;
        personne[i].sexe='f';
    }
    retour = fwrite(personne, sizeof (typePersonne), 5, fic); //enregistrement des personnes
    if (retour <0) {
        printf("Erreur de lecture\n");
        exit(errno);
    }
    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
*/

    /*Question 9*/
        /*Version 1*/
/*
    typePersonne personne[5];
    int i;
    //ouvir fichier en mode lecture
    fic = fopen("/home/USERS/ELEVES/SNIR2019/msoulard/Documents/langage C (acces fichiers)/TD1Question4(version1).txt", "r");
    // pb ouverture fichier
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //lire ce qu'il y a dans le fichier
    for (i = 0; i < 5; i++) {
        retour = fscanf(fic, "%s %s %d %.2f %c", personne[i].nom, personne[i].prenom, &personne[i].age, &personne[i].poids, &personne[i].sexe);
    }
    if (retour < 0) {
        printf("Erreur de lecture\n");
        exit(errno);
    }
    //afficher le contenu du fichier
    for (i = 0; i < 5; i++) {
        printf("nom : %s\n", personne[i].nom);
        printf("prénom : %s\n", personne[i].prenom);
        printf("âge : %d ans\n", personne[i].age);
        printf("poids : %.2f kg\n", personne[i].poids);
        printf("sexe : %c\n", personne[i].sexe);
        printf("\n");
    }
    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
*/
        /*Version 2*/
    typePersonne personne[5];
    int i;
    //ouvir fichier en mode création/écriture
    fic = fopen("/home/USERS/ELEVES/SNIR2019/msoulard/Documents/langage C (acces fichiers)/TD1Question4(version2)bis.txt", "r");
    // pb ouverture fichier
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //printf("%d\n",sizeof(typePersonne)*5);
    //lire le contenu du fichier
    int nb;
    retour=fread(&nb, sizeof(int),1,fic);
    retour = fread(personne, sizeof (typePersonne), nb, fic);
    if (retour != 5) {
        printf("Erreur de lecture\n");
        exit(errno);
    }
    //afficher le contenu du fichier
    for (i = 0; i < nb; i++) {
        printf("nom : %s\n", personne[i].nom);
        printf("prénom : %s\n", personne[i].prenom);
        printf("âge : %d ans\n", personne[i].age);
        printf("poids : %.2f kg\n", personne[i].poids);
        printf("sexe : %c\n", personne[i].sexe);
        printf("\n");
    }
    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    return EXIT_SUCCESS;
}