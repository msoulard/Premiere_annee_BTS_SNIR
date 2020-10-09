#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int jours;
    int heures;
    int minutes;
    int convertion;
    printf("Donnez un nombre entier de jours à convertir en minutes ");
    scanf("%d",&jours);
    printf("Donnez un nombre entier d'heures à convertir en minutes ");
    scanf("%d",&heures);
    printf("Donnez un nombre entier de minutes ");
    scanf("%d",&minutes);
    convertion = (jours*24*60)+(heures*60)+minutes;
    printf("Dans %d jours, %d heures et %d minutes, il y a %d minutes",jours,heures,minutes,convertion);
    
    return (EXIT_SUCCESS);
}

