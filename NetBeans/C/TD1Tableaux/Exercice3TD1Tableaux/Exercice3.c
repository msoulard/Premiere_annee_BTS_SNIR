/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice3.c
 * Author: msoulard
 *
 * Created on 6 novembre 2019, 10:29
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 10

int main() {
    float tabVal[TAILLEMAX];
    int nbValNeg;
    int nbValPos;
    int nbValNulle;
    int n;
    float sommeValNeg;
    float miniPos;
    float maxiPos;

    /*Initialisation des variables*/
    n = 0;
    nbValNeg = 0;
    nbValPos = 0;
    nbValNulle = 0;
    sommeValNeg = 0;
    miniPos = 0;
    maxiPos = 0;

    /*Affectations des valeurs dans le tableau de base*/
    for (n = 0; n < TAILLEMAX; n++) {
        printf("Donnez une valeur positive, négative ou nulle ");
        scanf("%f", &tabVal[n]);
    }

    /*Compteurs des valeurs positives, négatives et nulles*/
    for (n = 0; n < TAILLEMAX; n++) {
        if (tabVal[n] < 0) {
            nbValNeg++;
        }
        if (tabVal[n] > 0) {
            nbValPos++;
        }
        if (tabVal[n] == 0) {
            nbValNulle++;
        }
    }
    printf("Il y a %d valeurs négatives.\n", nbValNeg);
    printf("Il y a %d valeurs positives.\n", nbValPos);
    printf("Il y a %d valeurs négatives.\n", nbValNulle);

    /*Déclaration des tableaux des valeurs positives et négatives*/
    float tabValNeg[nbValNeg];
    float tabValPos[nbValPos];

    /*Affichage des valeurs négatives, affectation des valeurs négatives au tableau des valeurs négatives et somme des valeurs négatives*/
    nbValNeg = 0;
    printf("Les valeurs négatives sont : ");
    for (n = 0; n < TAILLEMAX; n++) {
        if (tabVal[n] < 0) {
            tabValNeg[nbValNeg] = tabVal[n];
            printf("%.2f ; ", tabValNeg[nbValNeg]);
            sommeValNeg = sommeValNeg + tabValNeg[nbValNeg];
            nbValNeg++;
        }
    }
    printf("\nLa somme des valeurs négatives vaut %.2f.", sommeValNeg);

    /*Affichage des valeurs positives et affectation des valeurs positives au tableau des valeurs positives*/
    nbValPos = 0;
    printf("\nLes valeurs positives sont : ");
    for (n = 0; n < TAILLEMAX; n++) {
        if (tabVal[n] > 0) {
            tabValPos[nbValPos] = tabVal[n];
            printf("%.2f ; ", tabValPos[nbValPos]);
            nbValPos++;
        }
    }

    /*Valeurs minimum et maximum du tableau des valeurs positives*/
    miniPos = tabValPos[0];
    maxiPos = tabValPos[0];
    for (n = 0; n < nbValPos; n++) {
        if (miniPos > tabValPos[n]) {
            miniPos = tabValPos[n];
        }
        if (maxiPos < tabValPos[n]) {
            maxiPos = tabValPos[n];
        }
    }
    printf("\nLa valeur minimale positive est %.2f et la valeur maximale positive est %.2f", miniPos, maxiPos);

    return 0;
}

