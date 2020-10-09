/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice6TD1ChaineDeCaracteres.c
 * Author: msoulard
 *
 * Created on 7 novembre 2019, 11:42
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main() {
    char phrase[TAILLEMAX];
    int nbMot;
    int n;
    
    printf("Donnez une phrase dans laquelle vous voulez connaître le nombre de mots ");
    gets(phrase);
    
    if(strlen(phrase)>0){
        nbMot=1;
    }
    else{
        nbMot=0;
    }
    for(n=0 ; n<strlen(phrase) ; n++){       
        if(phrase[n]== ' '){
            nbMot++;
        }
    }
    printf("Dans votre phrase, il y a %d mots.",nbMot);

    return 0;
}

