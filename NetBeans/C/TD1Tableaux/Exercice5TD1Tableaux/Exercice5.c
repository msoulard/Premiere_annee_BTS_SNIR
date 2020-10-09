/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice5.c
 * Author: msoulard
 *
 * Created on 6 novembre 2019, 11:28
 */

#include <stdio.h>
#include <stdlib.h>
#define TAILLE 5

int main() {
    int tab[TAILLE]={5,7,2,1,4};
    int n;
    int i;
    int valmin;
    int posmin;
    
    for(n=0;n<TAILLE;n++){
        valmin=tab[n];
        posmin=n;
        for(i=n; i<TAILLE ; i++){
            if(valmin>tab[i]){
                valmin=tab[i];
                posmin=i;
            }            
        }
        tab[posmin]=tab[n];
        tab[n]=valmin;
    }
    
    for(n=0 ; n<TAILLE ; n++){
        printf("%d ",tab[n]);
    }
    

    return 0;
}

