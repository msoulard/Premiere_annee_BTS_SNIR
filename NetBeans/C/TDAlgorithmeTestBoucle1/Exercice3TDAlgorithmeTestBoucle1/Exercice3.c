#include <stdio.h>
#include <stdlib.h>

int main() {
    
    /*Partie 1*/
    /*int i;
    int resultat;    
    resultat=0;
    i=0;    
    for(i=0; i<=10;i++){
        resultat=i*7;
        printf("%dx7=%d\n",i,resultat);
    }*/
    
    /*Partie 2*/
    /*int i;
    int x;
    int resultat;    
    resultat=0;
    i=0;    
    printf("Donnez la table de multiplication que vous souhaitez connaître ");
    scanf("%d",&x);    
    for(i=0;i<=10;i++){
        resultat=i*x;
        printf("%dx%d=%d\n",i,x,resultat);
    }*/
    
    /*Partie 3*/
    /*int i;
    int x;
    int resultat;
    int debut;
    int fin;    
    resultat=0;
    i=0;    
    printf("Donnez la table de multiplication que vous souhaitez connaître ");
    scanf("%d",&x);
    printf("Donnez le début de la table de multiplication ");
    scanf("%d",&debut);
    printf("Donnez la fin de la table de multiplication ");
    scanf("%d",&fin);    
    for(i=debut;i<=fin;i++){
        resultat=i*x;
        printf("%dx%d=%d\n",i,x,resultat);
    }*/
    
    /*Partie 4*/
    /*int i;
    int x;
    int resultat;
    int debut;
    int fin;
          
    printf("Donnez la table de multiplication que vous souhaitez connaître ");
    scanf("%d",&x);
    printf("Donnez le début de la table de multiplication ");
    scanf("%d",&debut);
    printf("Donnez la fin de la table de multiplication ");
    scanf("%d",&fin);
    
    resultat=0;
    i=debut;
    
    do{
        i=i+1;
        resultat=i*x;
        printf("%dx%d=%d\n",i,x,resultat);
    }while(i<=fin);*/
    
    /*Partie 5*/
    int i;
    int x;
    int resultat;
    int debut;
    int fin;
          
    printf("Donnez la table de multiplication que vous souhaitez connaître ");
    scanf("%d",&x);
    printf("Donnez le début de la table de multiplication ");
    scanf("%d",&debut);
    printf("Donnez la fin de la table de multiplication ");
    scanf("%d",&fin);
    
    resultat=0;
    i=debut;
    
    while(i<=fin)
    {
        i=i+1;
        resultat=i*x;
        printf("%dx%d=%d\n",i,x,resultat);
    }

    return (EXIT_SUCCESS);
}

