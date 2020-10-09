/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice13TD1ChaineDeCaracteres.c
 * Author: msoulard
 *
 * Created on 12 novembre 2019, 15:46
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main() {
    char phraseInitiale[TAILLEMAX];
    char phraseFinale[TAILLEMAX];
    int longueur;
    int i;
    int compteur;
    
    compteur = 0;
    printf("Donnez une phrase : ");
    gets(phraseInitiale);
    longueur = strlen(phraseInitiale);
    
    for(i=0; i<longueur; i++)
    {
        if((phraseInitiale[i]>=65 && phraseInitiale[i]<=90)||(phraseInitiale[i]>=97 && phraseInitiale[i]<=122))
        {
            phraseFinale[i-compteur]=phraseInitiale[i];
        }
        else
        {
            compteur++;
        }
    }
    printf("%s", phraseFinale);
    
    return 0;
}

