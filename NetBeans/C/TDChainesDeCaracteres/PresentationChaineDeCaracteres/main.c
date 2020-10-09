#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main() {
    char chaine[TAILLEMAX];
    int i;
    int longueurChaine;
    //initialisation de la chaine par l'utilisateur
    printf("Donnez une chaîne de caratère ");
    gets(chaine);
    //initialisation des autres variables
    longueurChaine=strlen(chaine);
    i=0;
    //parcourir le chaine de caractères
    for(i=0 ; i<longueurChaine ; i++){
        printf("[%c]\n",chaine[i]);
    }

    return 0;
}

