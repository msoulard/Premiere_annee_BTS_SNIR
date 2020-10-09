/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   diapoPointeur.c
 * Author: msoulard
 *
 * Created on 28 novembre 2019, 11:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "pointeur.h"

/*
 * 
 */
int main() {
    /*Diapo 9*/
    /*int *ptrInt; //un pointeur sur un entier
    char *ptrCaractere; //un pointeur sur un ou des caractères
    float *ptrReel; //un pointeur sur un réel
    
    printf("taille du pointeur 'ptrInt' : %d\n", sizeof(ptrInt));
    printf("taille du pointeur 'ptrCaractere : %d\n", sizeof(ptrCaractere));
    printf("taille du pointeur 'ptrReel' : %d\n", sizeof(ptrReel));
    
    /*Diapo 19*/
    /*unsigned char *ptrOctet;
    int unEntier;
    int i;
    
    unEntier=0x12345678;
    ptrOctet=(char *)&unEntier;
    for(i=0 ; i<sizeof(unEntier) ; i++){
        printf("%p : %hhX\n", ptrOctet, *ptrOctet);
        ptrOctet++;
    }*/

    /*Diapo 24*/
    short int val1;
    short int val2;

    val1 = 10;
    val2 = 20;

    printf("val1=%hd val2=%hd\n", val1, val2);
    echange(&val1, &val2);
    printf("val1=%hd val2=%hd\n", val1, val2);

    return 0;
}

