#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    double grainsDeRiz;
    double TotalGrainsDeRiz;
    TotalGrainsDeRiz=1;
    grainsDeRiz=1;
    n=1;
    for(n=2; n<=64;n++){
        grainsDeRiz=grainsDeRiz*2;
        TotalGrainsDeRiz=TotalGrainsDeRiz+grainsDeRiz;
    }
    printf("Le garde grenier donnera %d grains de riz à l'inventeur.",TotalGrainsDeRiz);

    return 0;
}

