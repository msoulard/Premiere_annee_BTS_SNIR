/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice2TD1Fonctions.c
 * Author: msoulard
 *
 * Created on 12 novembre 2019, 16:50
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float resultat;
    float val1;
    float val2;
    
    printf("val1 : ");
    scanf("%f",&val1);
    printf("val2 : ");
    scanf("%f",&val2);
    
    resultat=val1+val2;
    printf("%.2f + %.2f = %.2f",val1,val2,resultat);

    return 0;
}

