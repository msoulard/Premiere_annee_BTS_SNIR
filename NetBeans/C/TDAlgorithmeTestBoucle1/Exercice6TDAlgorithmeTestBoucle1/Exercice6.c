#include <stdio.h>
#include <stdlib.h>

int main() {
    int colonne;
    int ligne;
    int max;
    int nb;
    printf("Donnez la longueur du côté du triangle isocèle inversé que vous voulez \n");
    scanf("%d",&max);
    nb=max;
    for(ligne=0 ; ligne<nb ; ligne++)
    {
        for(colonne=0 ; colonne<max ; colonne++)
        {
            printf("#");
        }
        printf("\n");
        max=max-1;
    }

    return (EXIT_SUCCESS);
}

