#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float C;
    float F;
    printf("Donnez la température en degrés Fahrenheit à convertir en Celsius");
    scanf("%f",&F);
    C = (5/9)*(F-32);
    printf("La température en degrés Celsius est de %f",C);

    return (EXIT_SUCCESS);
}