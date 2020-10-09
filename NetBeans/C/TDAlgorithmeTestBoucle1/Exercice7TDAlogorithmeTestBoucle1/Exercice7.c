#include <stdio.h>
#include <stdlib.h>

int main() {
    
    /*Partie 1*/
    /*int val;
    int resultat;
    printf("Donnez une valeur entière positive inférieure à 256 à convertir en binaire ");
    scanf("%d",&val);
    if(val>=128){
        printf("1");
        val=val-128;
    }
    else{
        printf("0");
    }
    if(val>=64){
        printf("1");
        val=val-64;
    }
    else{
        printf("0");
    }
    if(val>=32){
        printf("1");
        val=val-32;
    }
    else{
        printf("0");
    }
    if(val>=16){
        printf("1 ");
        val=val-16;
    }
    else{
        printf("0 ");
    }
    if(val>=8){
        printf("1");
        val=val-8;
    }
    else{
        printf("0");
    }
    if(val>=4){
        printf("1");
        val=val-4;
    }
    else{
        printf("0");
    }
    if(val>=2){
        printf("1");
        val=val-2;
    }
    else{
        printf("0");
    }
    if(val>=1){
        printf("1");
        val=val-1;
    }
    else{
        printf("0");
    }*/
    
    /*Partie 2*/
    int val;
    int bi;
    int resultat;
    printf("Donnez une valeur entière positive inférieure à 4 294 967 296 à convertir en binaire ");
    bi=268435456;
    scanf("%d",&val);
    while(val>=1){
        bi=bi/2;
        if(val>=bi){
            printf("1");
            val=val-bi;
        }
        else{
            printf("0");
        }
    }

    return (EXIT_SUCCESS);
}

