#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

int main(int argc, char** argv) {
    
    InitialiserLeds();
    InitialiserJoystick();
    
    /*int x;
    int y;
    int pas;
    
    y=3;
    
    for(x=2;x<=6;x++){
        Allumer(x,y,ROUGE);
        Allumer(y,x,BLEU);
    }*/
    
    /*int colonne;
    int ligne;
    for(colonne = 0 ; colonne <= 7 ; colonne++)
    {
        Allumer(0,colonne,ROUGE);
        Allumer(7,colonne,ROUGE);
    }
    for(ligne = 0 ; ligne <= 7 ; ligne++)
    {
        Allumer(ligne,0,ROUGE);
        Allumer(ligne,7,ROUGE);
    }*/
    
    /*int colonne;
    int ligne;
    ligne=7;
    for(colonne = 0 ; colonne <= 7 ; colonne++)
    {        
        Allumer(colonne,colonne,VERT);
        Allumer(ligne,colonne,VERT);
        ligne=ligne-1;
    }*/
    
    int ligne;
    int colonne;
    int touche;
    touche=0;
    do
    {
        ligne=7;
        for(colonne = 0 ; colonne <= 7 ; colonne++)
        {                            
            Allumer(colonne,colonne,VERT);
            Allumer(ligne,colonne,VERT);                    
            ligne=ligne-1;
        }
        sleep(1);
        Effacer();
        for(colonne = 0 ; colonne <= 7 ; colonne++)
        {
            Allumer(0,colonne,ROUGE);
            Allumer(7,colonne,ROUGE);
        }
        for(ligne = 0 ; ligne <= 7 ; ligne++)
        {
            Allumer(ligne,0,ROUGE);
            Allumer(ligne,7,ROUGE);
        }
        sleep(1);
        Effacer();                
        touche = ScannerJoystick();        
    }while(touche != KEY_ENTER);

    return (EXIT_SUCCESS);
}

