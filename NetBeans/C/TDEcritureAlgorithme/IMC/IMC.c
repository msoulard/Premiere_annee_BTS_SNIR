#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float IMC;
    float taille;
    float masse;
    printf("Donnez votre taille en centimètre");
    scanf("%f", &taille);
    printf("Donnez votre masse en kilogramme");
    scanf("%f",&masse);
    IMC = masse/(taille*taille);
    printf("Votre indice de masse corporelle est de %f",IMC);

    return (EXIT_SUCCESS);
}

