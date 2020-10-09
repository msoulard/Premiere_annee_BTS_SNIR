/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice14TD1ChaineDeCaracteres.c
 * Author: msoulard
 *
 * Created on 12 novembre 2019, 15:51
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main() {
    char phraseInitiale[TAILLEMAX];
    char phraseFinale[TAILLEMAX];
    int longueur;
    int longueurFinale;
    int i;
    int compteurCaraEnleve;
    int compteur;
    
    compteurCaraEnleve = 0;
    printf("Donnez une phrase : ");
    gets(phraseInitiale);
    longueur = strlen(phraseInitiale);
    
    for(i=0; i<longueur+1; i++)
    {
        if((phraseInitiale[i]>=97 && phraseInitiale[i]<=122)||phraseInitiale[i]==0)
        {
            phraseFinale[i-compteurCaraEnleve]=phraseInitiale[i];
        }
        else
        {
            if(phraseInitiale[i]>=65 && phraseInitiale[i]<=90)
            {
                phraseFinale[i-compteurCaraEnleve]=(phraseInitiale[i]+32);
            }
            else
            {
                compteurCaraEnleve++;
            }
        }
    }
    
    longueurFinale = strlen(phraseFinale)+compteurCaraEnleve;
    
    for(i=0; i<longueurFinale; i++)
    {
        if(phraseFinale[i]==phraseFinale[longueurFinale-i-1])
        {
            compteur++;
        }
    }
    
    if(longueurFinale==compteur)
    {
        printf("Il s'agit d'un palindrome");
    }
    else
    {
        printf("Il ne s'agit pas d'un palindrome");
    }
    
    return 0;
}