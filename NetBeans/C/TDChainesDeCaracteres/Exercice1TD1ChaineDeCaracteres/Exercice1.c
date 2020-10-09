/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TD1ChaineDeCaracteres.c
 * Author: msoulard
 *
 * Created on 7 novembre 2019, 10:23
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 255

int main() {
    char phrase[TAILLEMAX];
    
    printf("Donnez une phrase ");
    gets(phrase);
    printf("Votre phrase est '%s'.",phrase);   

    return 0;
}

