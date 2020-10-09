/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice11TD1ChaineDeCaracteres.c
 * Author: msoulard
 *
 * Created on 12 novembre 2019, 14:35
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 255

int main() {
    char phrase[TAILLEMAX];
    
    printf("Donnez une phrase : ");
    gets(phrase);
    
    if(strncmp(phrase,"salut",5)==0)
    {
        printf("Bon début");
    }
    else{
        printf("Mauvais début");
    }

    return 0;
}

