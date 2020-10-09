/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice10TD1ChainesDeCaracteres.c
 * Author: msoulard
 *
 * Created on 12 novembre 2019, 13:20
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main() {
    char motATrouver[TAILLEMAX] = "bonjour";
    char motUtilisateur[TAILLEMAX];
    
    printf("Donnez un mot ");
    gets(motUtilisateur);
    
    if (strcmp(motATrouver, motUtilisateur) == 0) {
        printf("ok");
    }
    else{
        printf("erreur");
    }

    return 0;
}

