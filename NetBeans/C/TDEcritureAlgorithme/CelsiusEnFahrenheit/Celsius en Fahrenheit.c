#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float C;
    float F;
    printf("Donnez la température en degrés Celsius à convertir en Fahrenheit");
    scanf("%f",&C);
    F = ((C*9)/5)+32;
    printf("La température en degrés Fahrenheit est de %f",F);

    return (EXIT_SUCCESS);
}

