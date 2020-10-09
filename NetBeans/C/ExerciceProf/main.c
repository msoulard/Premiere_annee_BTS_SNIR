#include <stdio.h>
#include <stdlib.h>
#define NBELEVE 24

int main() {
    /*Exercice 1*/
    float note[NBELEVE];
    int i;
    
    // initialiser le tableau de notes de manière interactive
    for(i=0 ; i<NBELEVE ; i++){
        printf("Donnez la note /20 de l'élève %d : ",i+1);
        scanf("%f",&note[i]);
    }    
    
    // afficher les notes
    i=0;
    while(i<NBELEVE){
        i=i+1;
        printf("L'élève %d a eu %.2f/20\n",i,note[i]);
    }
    
    /*Exercice 2*/
    

    return 0;
}

