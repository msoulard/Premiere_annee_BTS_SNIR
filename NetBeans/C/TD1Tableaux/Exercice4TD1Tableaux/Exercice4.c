/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice4.c
 * Author: msoulard
 *
 * Created on 6 novembre 2019, 11:20
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 10

int main() {
    int tab[TAILLEMAX] = {5, 9, 0, 4, 3, 10, 50, 42, 17, 10};
    int n;
    int temp;

    for (n = 0; n < TAILLEMAX / 2; n++) {
        temp = tab[n];
        tab[n] = tab[TAILLEMAX - n - 1];
        tab[TAILLEMAX - n - 1] = temp;
    }
    for (n = 0; n < TAILLEMAX; n++) {
        printf("%d ", tab[n]);
    }

    return 0;
}

