/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice7TD1ChaineDeCaracteres.c
 * Author: msoulard
 *
 * Created on 7 novembre 2019, 11:56
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main() {
    char phrase[TAILLEMAX];
    int n;
    int lettre;
    int longueur;
    
    printf("Donnez une phrase ");
    gets(phrase);
    longueur=strlen(phrase);

    for (n = 0; n < longueur / 2; n++) {
        lettre = phrase[n];
        phrase[n] = phrase[longueur - n - 1];
        phrase[longueur - n - 1] = lettre;
    }
    for (n = 0; n < longueur; n++) {
        printf("%c", phrase[n]);
    }

    return 0;
}

