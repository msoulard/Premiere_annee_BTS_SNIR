#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>

int main()
{
    InitialiserLeds();
    InitialiserJoystick();
    
    /*Exercice 1*/
    /*Allumer(0,0,BLEU);
    Allumer(0,1,ROUGE);
    Allumer(1,0,VERT);
    Allumer(0,7,ORANGE);
    Allumer(7,0,JAUNE);
    Allumer(7,7,MAGENTA);*/
    
    /*Exercice 2 Partie 1*/
    /*Allumer(0,0,ROUGE);
    Allumer(0,1,ROUGE);
    Allumer(0,2,ROUGE);
    Allumer(0,3,ROUGE);
    Allumer(0,4,ROUGE);
    Allumer(0,5,ROUGE);
    Allumer(0,6,ROUGE);
    Allumer(0,7,ROUGE);*/
    
    /*Exercice 2 Partie 2*/
    /*int colonne;
    for(colonne = 0 ; colonne <= 7 ; colonne++)
    {
        Allumer(0,colonne,ROUGE);
    }*/
    
    /*Exercice 2 Partie 3*/
    /*int ligne;
    for(ligne = 0 ; ligne <= 7 ; ligne++)
    {
        Allumer(ligne,0,ROUGE);
    }*/
    
    /*Exercice 2 Partie 3*/
    /*int colonne;
    int ligne;
    for(ligne = 2 ; ligne <= 5 ; ligne++)
    {
        for(colonne = 0 ; colonne <= 7 ; colonne++)
        {
            Allumer(ligne,colonne,ROUGE);
        }
    }*/
    
    /*Exercice Prof*/
    /*int colonne;
    int ligne;
    for(colonne = 0 ; colonne <= 7 ; colonne++)
    {
        Allumer(0,colonne,ROUGE);
    }
    for(colonne = 0 ; colonne <= 7 ; colonne++)
    {
        Allumer(7,colonne,ROUGE);
    }
    for(ligne = 0 ; ligne <= 7 ; ligne++)
    {
        Allumer(ligne,0,ROUGE);
    }
    for(ligne = 0 ; ligne <= 7 ; ligne++)
    {
        Allumer(ligne,7,ROUGE);
    }*/
    
    /*Exercice 3 Partie 1*/
    /*int colonne;
    int ligne;
    for(ligne = 0 ; ligne <= 7 ; ligne++)
    {
        for(colonne = 0 ; colonne <= 7 ; colonne ++)
        {
            Allumer(ligne,colonne,BLEU);
        }
    }*/
    
    /*Exercice 3 Partie 2*/
    /*int colonne;
    int ligne;
    for(ligne = 0 ; ligne <= 7 ; ligne++)
    {
        sleep(1);
        for(colonne = 0 ; colonne <= 7 ; colonne ++)
        {            
            Allumer(ligne,colonne,BLEU);
        }
    }*/
    
    /*Exercice 3 Partie 3*/
    /*int colonne;
    int ligne;
    for(ligne = 0 ; ligne <= 7 ; ligne++)
    {     
        for(colonne = 0 ; colonne <= 7 ; colonne ++)
        {            
            Allumer(ligne,colonne,BLEU);            
        }
        sleep(1);
        Effacer();
    }*/
    
    /*Exercice 3 Partie 4*/
    /*int colonne;
    int ligne;
    for(ligne = 0 ; ligne <= 7 ; ligne++)
    {     
        for(colonne = 0 ; colonne <= 7 ; colonne ++)
        {            
            Allumer(ligne,colonne,BLEU);
            Allumer(colonne,ligne,ROUGE);            
        }
        sleep(1);
        Effacer();
    }*/
    
    /*Exercice 3 Partie 4*/
    /*int colonne;
    int ligne;
    for(ligne = 7 ; ligne >= 0 ; ligne--)
    {
        Effacer();
        for(colonne = 7 ; colonne >= 0 ; colonne --)
        {            
            Allumer(ligne,colonne,BLEU);
            Allumer(colonne,ligne,ROUGE);            
        }
        sleep(1);
    }*/
    
    /*Exercice 3 Partie 5*/
    /*int colonne;
    int ligne;
    for(;;)
    {
        for(ligne = 0 ; ligne <= 7 ; ligne++)
        {
            Effacer();     
            for(colonne = 0 ; colonne <= 7 ; colonne ++)
            {            
                Allumer(ligne,colonne,BLEU);
                Allumer(colonne,ligne,ROUGE);            
            }
            sleep(1);
        }
        for(ligne = 7 ; ligne >= 0 ; ligne--)
        {
            Effacer();
            for(colonne = 7 ; colonne >= 0 ; colonne --)
            {            
                Allumer(ligne,colonne,BLEU);
                Allumer(colonne,ligne,ROUGE);            
            }
            sleep(1);
        }
    }*/
    
    /*Exercice 4 Partie 1*/
    /*int ligne;
    int colonne;
    int touche;
    do
    {
        for(ligne = 0 ; ligne <= 7 ; ligne++)
        {
            for(colonne = 0 ; colonne <= ligne ; colonne++)
            {
                Allumer(ligne,colonne,ROUGE);
                Allumer(colonne,ligne,ROUGE);
                Allumer(colonne,colonne,ROUGE);
            }
            usleep(200000);
            Effacer();
        }
        touche = ScannerJoystick();
    }
    while(touche != KEY_ENTER);*/
    
    /*Exercice 4 Partie 2*/
    /*int ligne;
    int colonne;
    int touche;
    do
    {
        ligne=0;
        while(touche != KEY_ENTER && ligne <= 7)
        {
            Effacer();
            for(colonne = 0 ; colonne <= ligne ; colonne++)
            {
                Allumer(ligne,colonne,ROUGE);
                Allumer(colonne,ligne,ROUGE);
                Allumer(colonne,colonne,ROUGE);
            }
            usleep(200000);
            ligne=ligne+1;
            touche = ScannerJoystick();
        }        
    }
    while(touche != KEY_ENTER);*/
    
    /*Exercice 4 Partie 3*/
    int ligne;
    int colonne;
    int touche;
    touche=0;
    while(1)
    {
        do
        {
            ligne=0;
            while(touche != KEY_ENTER && ligne <= 7)
            {
                Effacer();
                for(colonne = 0 ; colonne <= ligne ; colonne++)
                {
                    Allumer(ligne,colonne,ROUGE);
                    Allumer(colonne,ligne,ROUGE);
                    Allumer(colonne,colonne,ROUGE);
                }
                usleep(200000);
                ligne=ligne+1;
                touche = ScannerJoystick();
            }        
        }while(touche != KEY_ENTER);
        do
        {
            touche = ScannerJoystick();
        }while(touche != KEY_ENTER);
        touche = 0;
    }
    
    

    return 0;
}