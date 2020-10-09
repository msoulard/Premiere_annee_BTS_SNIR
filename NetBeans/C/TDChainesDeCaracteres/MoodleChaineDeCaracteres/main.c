/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: msoulard
 *
 * Created on 18 novembre 2019, 15:39
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define TAILLEMAX 255

int main(){
    char chaine[TAILLEMAX];
    int tailleChaine;
    int n;
    
    scanf("%s",chaine);
    tailleChaine=strlen(chaine);
    n=0;
    
    for(n=0 ; n<tailleChaine ; n++){
        printf("(%c)",chaine[n]);
    }
          
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main() {
    char phrase[TAILLEMAX];
    int nbA;
    int n;
    
    nbA=0;
    scanf("%s",phrase);
    
    for(n=0 ; n<strlen(phrase) ; n++){
        if(phrase[n]=='a'){
            nbA++;
        }
    }
    printf("il y a %d a dans la chaine %s", nbA, phrase);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main(){
    char chaine1[TAILLEMAX];
    char chaine2[TAILLEMAX];
    
    scanf("%s",chaine1);
    scanf("%s",chaine2);
    
    if(strcmp(chaine1, chaine2)==0){
        printf("identique");
    }
    else{
        printf("pas identique");
    }
    
    return 0;
}