/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   moodleTableau.c
 * Author: msoulard
 *
 * Created on 9 décembre 2019, 14:12
 */

#include <stdio.h>
#include <stdlib.h>
#define NBELEMENTS 10

int main() {
    /*int tabE[NBELEMENTS]={0,1,2,3,4,5,6,7,8,9};
    int i;
    for(i=0 ; i<NBELEMENTS ; i++){
        printf("%d ",tabE[i]);
    }*/
    char tabC[NBELEMENTS];
    int i;
    for (i = 0; i < NBELEMENTS; i++) {
        tabC[i] = 'x';
    }

    return 0;
}

