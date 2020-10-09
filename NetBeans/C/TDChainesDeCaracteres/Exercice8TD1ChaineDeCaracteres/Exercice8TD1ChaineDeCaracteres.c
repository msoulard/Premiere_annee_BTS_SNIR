/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice8TD1ChaineDeCaracteres.c
 * Author: msoulard
 *
 * Created on 7 novembre 2019, 14:59
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main() {
    char message[TAILLEMAX];
    int n;
    
    printf("Donnez un message ");
    fgets(message, sizeof(message), stdin);
    
    for(n=0 ; n<strlen(message) ; n++){
        if(message[n]>64 && message[n]<91){
            message[n]=message[n]+32;
        }
        else if(message[n]>96 && message[n]<123){
            message[n]=message[n]-32;
        }
    }
    printf("%s",message);

    return 0;
}

