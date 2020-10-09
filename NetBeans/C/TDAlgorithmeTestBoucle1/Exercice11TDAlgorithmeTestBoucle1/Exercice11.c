#include <stdio.h>
#include <stdlib.h>

int main() {
    int annee;
    
    printf("Donnez une année ");
    scanf("%d",&annee);
    
    if(annee %4 == 0){
        printf("L'année est bissextile. \n");
    }
    else if(annee %100 != 0){
        printf("L'année n'est pas bissextile. \n");
    }
    else if(annee % 400 == 0){
        printf("L'année est bissextile. \n");
    }
    else{
        printf("L'année n'est pas bissextile. \n");
    }

    return (EXIT_SUCCESS);
}

