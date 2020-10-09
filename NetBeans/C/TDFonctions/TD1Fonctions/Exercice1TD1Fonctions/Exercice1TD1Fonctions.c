/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice1TD1Fonctions.c
 * Author: msoulard
 *
 * Created on 12 novembre 2019, 16:38
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char genre;
    
    printf("Vous êtes un homme ou une femme (h/f) ? ");
    scanf("%c",&genre);
    
    if(genre=='f'){
        printf("menu pour femme");
    }
    if(genre=='h'){
        printf("menu pour homme");
    }

    return 0;
}

