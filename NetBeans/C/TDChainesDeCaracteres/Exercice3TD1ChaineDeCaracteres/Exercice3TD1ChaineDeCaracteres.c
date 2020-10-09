/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice3TD1ChaineDeCaracteres.c
 * Author: msoulard
 *
 * Created on 7 novembre 2019, 11:24
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main() {
    char phrase[TAILLEMAX];
    int nbA;
    int n;
    
    nbA=0;
    printf("Donnez une phrase pour savoir le nombre de 'a' contenu dans celle-ci ");
    gets(phrase);
    
    for(n=0 ; n<strlen(phrase) ; n++){
        if(phrase[n]=='a'){
            nbA++;
        }
    }
    printf("Dans votre phrase, il y a %d 'a'.",nbA);

    return 0;
}

