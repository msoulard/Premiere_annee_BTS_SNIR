#include <stdio.h>
#include <stdlib.h>

// #define ORDI 10

int main() {
    
    /*Partie 1*/
    /*int joueur;
    int ordi;    
    ordi=10;
    joueur=0;    
    printf("Donnez une valeur ");
    scanf("%d",&joueur);       
    while(ordi != joueur)
    {
        if(ordi>joueur)
        {
        printf("Votre valeur est inférieure à celle de l'ordinateur. Essayez encore \n");
        printf("Donnez une valeur ");
        scanf("%d",&joueur);
        }
        if(ordi<joueur)
        {
        printf("Votre valeur est supérieure à celle de l'ordinateur. Essayez encore \n");
        printf("Donnez une valeur ");
        scanf("%d",&joueur);
        }               
    }
    printf("Vous avez gagnez !! Votre valeur correspond à celle de l'ordinateur.");*/
    
    /*Partie 2*/    
    int joueur;
   int ordi;
    int i;    
    ordi=10;
    joueur=0;
    i=1;    
    printf("Donnez une valeur ");
    scanf("%d",&joueur);        
    while(ordi != joueur)
    {
        i++;
        if(ordi>joueur)
        {
        printf("Votre valeur est inférieure à celle de l'ordinateur. Essayez encore \n");
        }
        if(ordi<joueur)
        {
        printf("Votre valeur est supérieure à celle de l'ordinateur. Essayez encore \n");
        }
        printf("Donnez une valeur ");
        scanf("%d",&joueur);
    }
    printf("Vous avez gagnez !! Votre valeur correspond à celle de l'ordinateur. Vous avez fait %d coups.",i);

    return (EXIT_SUCCESS);
}

