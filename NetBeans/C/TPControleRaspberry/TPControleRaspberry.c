#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

int main() {
    
    /*Initialisation du raspberry*/
    InitialiserLeds();
    InitialiserJoystick();
    
    /*les variables*/
    int ligne;
    int colonne;
    int posY;
    int touche;
    
    /*les briques*/
    for(ligne=0;ligne<=1;ligne++){
        for(colonne=0;colonne<=7;colonne++){
            Allumer(ligne,colonne,ROUGE);
        }
    }
    
    /*la raquette*/
    ligne=7;
    touche=0;
    posY=3;
    do{
        while(1<=posY && posY<=6){            
            if(touche=KEY_LEFT){
                Allumer(ligne,posY+1,NOIR);
                posY=posY-1;
                Allumer(ligne,posY,BLEU);
                Allumer(ligne,posY-1,BLEU);
            } 
            else if(touche=KEY_RIGHT){
                Allumer(ligne,posY-1,NOIR);
                posY=posY+1;
                Allumer(ligne,posY,BLEU);
                Allumer(ligne,posY+1,BLEU);
            } 
            else{
                Effacer();
            }
        }
    }while(touche != KEY_ENTER);
    
    

    return (EXIT_SUCCESS);
}

