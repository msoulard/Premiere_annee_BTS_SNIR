/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice5TD1ChaineDeCaracteres.c
 * Author: msoulard
 *
 * Created on 7 novembre 2019, 11:38
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main() {
    char phrase[TAILLEMAX];
    int nbConsonne;
    int n;
    
    nbConsonne=0;
    printf("Donnez une phrase pour savoir le nombre de consonnes contenu dans celle-ci ");
    gets(phrase);
    
    for(n=0 ; n<strlen(phrase) ; n++){
        if(phrase[n]=='a' || phrase[n]=='e' || phrase[n]=='i' || phrase[n]=='o' || phrase[n]=='u' || phrase[n]=='y'){
            
        }
        else{
            nbConsonne++;
        }
    }
    printf("Dans votre phrase, il y a %d consonnes.",nbConsonne);


    return 0;
}