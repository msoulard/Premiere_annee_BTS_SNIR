/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExercicesDiapoTableauxAPlusieursDimencions.c
 * Author: msoulard
 *
 * Created on 14 novembre 2019, 10:23
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NBCOL 5
#define NBLIGNE 3
#define NBMOTS 3
#define LONGMAXMOT 10

int main() {
    /*int tab[NBCOL][NBLIGNE];
    int colonne;
    int ligne;
    
    ligne=0;
    colonne=0;
    
    // initialisation du tableau à 0
    for(ligne=0 ; ligne < NBLIGNE ; ligne++){
        for(colonne=0 ;colonne < NBCOL ; colonne++){
            tab[colonne][ligne]=0;
            printf("%d ",tab[colonne][ligne]); 
        }
        printf("\n");
    } */

    /*int tab[NBCOL][NBLIGNE];
    int colonne;
    int ligne;
    int compteur;
    
    ligne=0;
    colonne=0;
    compteur=0;
    // initialisation du tableau
    for(ligne=0 ; ligne < NBLIGNE ; ligne++){
        for(colonne=0 ; colonne < NBCOL ; colonne++){
            tab[colonne][ligne]=compteur;
            compteur++;
        }
    }
    // affichage du tableau
    for(ligne=0 ; ligne < NBLIGNE ; ligne++){
        for(colonne=0 ; colonne < NBCOL ; colonne++){
            printf("%d ",tab[colonne][ligne]);
        }
        printf("\n");
    }*/

    char tabchaine[NBMOTS][LONGMAXMOT] = {"coucou", "salut", "hello"};
    char chaineUtilisateur;
    int nbMot;
    int motTrouve;

    nbMot = 0;
    motTrouve = 0;

    //Affichage des mots de la liste
    for (nbMot = 0; nbMot < NBMOTS; nbMot++) {
        printf("%s\n", tabchaine[nbMot]);
    }
    //Affectation ddu mot de l'utilisateur
    printf("Donnez un mot ");
    scanf("%s",chaineUtilisateur);
    //Vérification que le mot de l'utilisateur soit bien dans la liste générale
        //Version avec une boucle FOR
    for (nbMot = 0; nbMot < NBMOTS; nbMot++) {
        if (strcmp(tabchaine[nbMot], chaineUtilisateur) == 0) {
            motTrouve = 1;
        }
    }
    if(motTrouve==1){
        printf("chaine trouvée");
    }
    else{
        printf("chaine non trouvée");
    }
        //Version avec une boucle WHILE
    nbMot=0;
    while(strcmp(tabchaine[nbMot],chaineUtilisateur)!=0 && nbMot<NBMOTS){
        nbMot++;
    }
    if(nbMot>=NBMOTS){
        printf("chaine non trouvée");
    }
    else{
        printf("chaine trouvée");
    }

        return (EXIT_SUCCESS);
    }

