/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice12TD1ChaineDeCaracteres.c
 * Author: msoulard
 *
 * Created on 12 novembre 2019, 15:42
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 255
#define PASSWORD "2A00l5a2s0k1a8"
#define USERNAME "msoulard"

int main() {
    char userName[TAILLEMAX];
    char passWord[TAILLEMAX];
    
    char phrase[TAILLEMAX];
    printf("Username : ");
    gets(userName);
    printf("Password : ");
    gets(passWord);
    
    if(strcmp(userName, USERNAME)==0 && strcmp(passWord, PASSWORD)==0)
    {
        printf("Acces Autorisé");
    }
    else
    {
        printf("Acces Refusé");
    }

    return 0;
}

