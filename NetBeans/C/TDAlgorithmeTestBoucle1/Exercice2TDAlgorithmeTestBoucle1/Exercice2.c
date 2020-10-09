#include <stdio.h>
#include <stdlib.h>

int main() {
    /*float note;
    
    printf("Saisissez la note chiffrée ");
    scanf("%f",&note);
    
    if(0<=note && note<=4){
        printf("Votre élève a eu E.");
    }
    else if(4<note && note<=8){
        printf("Votre élève a eu D");
    }
    else if(8<note && note<=12){
        printf("Votre élève a eu C.");
    }
    else if(12<note && note<=16){
        printf("Votre élève a eu B.");
    }
    else if(16<note && note<=20){
        printf("Votre élève a eu A.");
    }*/
    
    /*float note;
    
    printf("Saisissez la note chiffrée ");
    scanf("%f",&note);
    
    if(0<=note && note<=4){
        printf("Votre élève a eu E.");
    }
    if(4<note && note<=8){
        printf("Votre élève a eu D");
    }
    if(8<note && note<=12){
        printf("Votre élève a eu C.");
    }
    if(12<note && note<=16){
        printf("Votre élève a eu B.");
    }
    if(16<note && note<=20){
        printf("Votre élève a eu A.");
    }*/

    char note;

    printf("Saisissez la note chiffrée ");
    scanf("%c", &note);

    switch (note) {
        case 'E':
            printf("Votre élève a eu entre 0 et 4.");
            break;
        case 'D':
            printf("Votre élève a eu entre 4 et 8.");
            break;
        case 'C':
            printf("Votre élève a eu entre 8 et 12.");
            break;
        case 'B':
            printf("Votre élève a eu entre 12 et 16.");
            break;
        case 'A':
            printf("Votre élève a eu entre 16 et 20.");
            break;
    }
    

    return (EXIT_SUCCESS);
}

