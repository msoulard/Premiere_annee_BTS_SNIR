#include <stdio.h>
#include <stdlib.h>

int main() {
    
    /*Partie 1*/
    /*int note;    
    while(note>0)
    {
        printf("Donnez les notes et quand vous avez fini donner une valeur négative \n");
        scanf("%d",&note);
    }*/
    
    /*Partie 2*/
    /*int note;
    int i;
    i=0;
    printf("Donnez les notes et quand vous avez fini donner une valeur négative \n");
    scanf("%d",&note);
    while(note>0)
    {
        printf("Donnez les notes et quand vous avez fini donner une valeur négative \n");
        scanf("%d",&note);
        i=i+1;
    }
    printf("Vous avez entré %d notes.",i);*/
    
    /*Partie 3*/
    /*int note;
    int i;
    int resultat;
    resultat=0;
    i=0;
    printf("Donnez les notes et quand vous avez fini donner une valeur négative \n");
    scanf("%d",&note);
    while(note>0)
    {
        resultat=resultat+note;
        printf("Donnez les notes et quand vous avez fini donner une valeur négative \n");
        scanf("%d",&note);        
        i=i+1;
    }
    printf("Vous avez entré %d notes.\n",i);
    printf("La somme des notes est de %d.",resultat);*/
    
    /*Partie 4*/
    int note;
    int i;
    int resultat;
    resultat=0;
    i=0;
    printf("Donnez les notes et quand vous avez fini donner une valeur négative \n");
    scanf("%d",&note);
    while(note>0)
    {
        resultat=resultat+note;
        printf("Donnez les notes et quand vous avez fini donner une valeur négative \n");
        scanf("%d",&note);        
        i=i+1;
    }
    resultat=resultat/i;
    printf("Vous avez entré %d notes.\n",i);
    printf("La moyenne des notes est de %d.",resultat);

    return (EXIT_SUCCESS);
}

