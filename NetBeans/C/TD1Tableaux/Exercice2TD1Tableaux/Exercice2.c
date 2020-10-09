/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice2.c
 * Author: msoulard
 *
 * Created on 5 novembre 2019, 15:59
 */

#include <stdio.h>
#include <stdlib.h>
#define NB_JOURS 5

int main() {
    float tabMin[NB_JOURS];
    float tabMax[NB_JOURS];
    int jours;
    float valMin;
    float valMax;

    for (jours = 0; jours < NB_JOURS; jours++) {
        printf("Donnez la température minimale du %d du mois ", jours + 1);
        scanf("%f", &tabMin[jours]);
        printf("Donnez la température maximale du %d du mois ", jours + 1);
        scanf("%f", &tabMax[jours]);
    }

    valMin = tabMin[0];
    valMax = tabMax[0];

    for (jours = 0; jours < NB_JOURS; jours++) {
        if (valMin > tabMin[jours]) {
            valMin = tabMin[jours];
        }
        if (valMax < tabMax[jours]) {
            valMax = tabMax[jours];
        }
    }
    printf("La température minimale du mois est %.2f. \nLa température maximale du mois est %.2f.", valMin, valMax);

    return 0;
}

