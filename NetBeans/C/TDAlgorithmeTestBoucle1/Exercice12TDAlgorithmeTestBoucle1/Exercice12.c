#include <stdio.h>
#include <stdlib.h>
#define VAL1 2
#define VAL2 3
#define VAL3 4

int main() {
    int val1;
    int val2;
    int val3;
    int nbTentative;
    
    nbTentative=1;
    printf("Donnez le premier chiffre ");
    scanf("%d",&val1);
    printf("Donnez le second chiffre ");
    scanf("%d",&val2);
    printf("Donnez le troisième chiffre ");
    scanf("%d",&val3);
    
    do{
        nbTentative++;
        printf("Code incorrect\n");
        printf("Donnez le premier chiffre ");
        scanf("%d", &val1);
        printf("Donnez le second chiffre ");
        scanf("%d", &val2);
        printf("Donnez le troisième chiffre ");
        scanf("%d", &val3);
    }while(nbTentative<3 && val1!=VAL1  && val2!=VAL2 && val3!=VAL3);
    if(val1==VAL1 && val2==VAL2 && val3==VAL3){
        printf("Code OK\n");
    }
    if(nbTentative>=3){
        printf("Code incorrect\n"); 
        printf("Trop d'erreurs");
    }
    
    

    return (EXIT_SUCCESS);
}

