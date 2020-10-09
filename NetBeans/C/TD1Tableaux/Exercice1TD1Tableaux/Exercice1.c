/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice1.c
 * Author: msoulard
 *
 * Created on 5 novembre 2019, 14:41
 */

#include <stdio.h>
#include <stdlib.h>
#define NB_ELEVES 24

int main() {
    int tabNote[NB_ELEVES];
    int eleve;
    
    for(eleve=0 ; eleve<NB_ELEVES ; eleve++){
        printf("Donnez la note de l'élève ");
        scanf("%d",&tabNote[eleve]);
        printf("L'élève %d a eu le note %d/20.\n", eleve+1, tabNote[eleve]);
    }

    return 0;
}

