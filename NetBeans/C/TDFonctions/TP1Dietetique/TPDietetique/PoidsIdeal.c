#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

char sexe(){
    char choix;
    do{
        printf("sexe (h ou f) : ");
        scanf(" %c",&choix);
    }while(choix!='h' && choix!='f');
    return choix;
}
void ficheRecapitulative(char nom[TAILLEMAX], char prenom[TAILLEMAX], int age, float taille, float poids){
    printf("\nFiche récapitulative :");
    printf("\n- Identité : %s %s", prenom, nom);
    printf("\n- Âge : %d ans", age);
    printf("\n- Poids : %.2f kg", poids);
    printf("\n- Taille : %.2f m", taille);
}
float calculIMC(float poids, float taille){
    float imc;  
    imc=poids/(taille*taille);
    return imc;
}
void afficherCorpulence(float imc){
    char tabCorpulence[7][TAILLEMAX] = {"famine", "maigreur", "normale", "surpoids", "obésité modérée", "obésité sévère", "obésité morbide"};
    float tabIMC[8] = {0, 16.5, 18.5, 25, 30, 35, 40, 100};
    int i;
    printf("\nVotre indice de masse corporelle est de %.2f", imc);
    for (i=0; i<7; i++)
    {
        if(imc >= tabIMC[i] && imc < tabIMC[i+1])
        {
            printf("\nvotre corpulence est qualifiée de %s\n", tabCorpulence[i]);
        }
    }    
}
void afficherMenu(){
    printf("\n\nCalculer votre poids idéal :");
    printf("\na - formule de Lorentz");
    printf("\nb - formule de Devine");
    printf("\nc - formule de Lorentz en tenant compte de l'âge");
    printf("\nq - sortir du menu de calcul du poids");
    printf("\nVotre choix : ");
}
float calculerPoidsLorentz(char sexe, float taille){
    float poidsIdeal;
    switch(sexe){
        case 'f':
            poidsIdeal=(taille*100)-100-(((taille*100)-150)/2.5);
            break;
        case 'h':
            poidsIdeal=(taille*100)-100-(((taille*100)-150)/4);
    }
    return poidsIdeal;
}
float calculerPoidsLorentzAge(int age, float taille){
    float poidsIdeal;
    poidsIdeal=50+(((taille*100)-150)/4)+((age-20)/4.0);
    return poidsIdeal;
}
float calculerPoidsDevine(float taille, char sexe){
    float poidsIdeal;
    switch(sexe){
        case 'f':
            poidsIdeal=45.5+(2.3*((taille/0.0254)-60));
            break;
        case 'h':
            poidsIdeal=50+(2.3*((taille/0.0254)-60));
    }
    return poidsIdeal;
}