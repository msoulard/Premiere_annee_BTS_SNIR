#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x;
    float fonctionX;
    float somme;
    
    somme=0;
    
    for(x=1 ; x<5 ; x=x+0.0001){
        fonctionX=pow(x,2)+3*x-5;
        somme=somme+fonctionX*0.0001;
    }
    printf("L'intégrale de f(x) entre 1 et 5 vaut %.3f",somme);

    return (EXIT_SUCCESS);
}

