#include <stdio.h>
#include <stdlib.h>
#define FEUILLE 0.076474

int main() {
    int nbPliage;
    float hauteur;
    while(hauteur<320755){
        nbPliage=nbPliage+1;
        hauteur=nbPliage*FEUILLE;
    }
    printf("Il faudrait plier %d de fois la feuille en deux pour atteindre le hauteur de la tour Eiffel.",nbPliage);
    

    return (EXIT_SUCCESS);
}

