#include <stdio.h>
#include <stdlib.h>

int main() {
    int coucou;
    printf("Combien de fois entend-on le coucou dans la forêt lointaine ? ");
    scanf("%d",&coucou);
    printf("Dans la forêt lointaine, on entend le coucou.");
    while(coucou>=0){
        printf("coucou !\n");
        coucou=coucou-1;
    }
    printf("fait le coucou.");

    return 0;
}

