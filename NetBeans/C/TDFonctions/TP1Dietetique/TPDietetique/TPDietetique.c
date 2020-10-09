/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TPDietetique.c
 * Author: msoulard
 *
 * Created on 26 novembre 2019, 13:10
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PoidsIdeal.h"
#define TAILLEMAX 255

/*
 * 
 */
int main() {
    char nom[TAILLEMAX];
    char prenom[TAILLEMAX];
    char genre;
    char choix;
    int age;
    float taille;
    float poids;
    float imc;
    float poidsIdeal;
    
    printf("nom : ");
    gets(nom);
    printf("prénom : ");
    gets(prenom);
    genre=sexe();
    printf("âge : ");
    scanf("%d",&age);
    printf("taille (en mètre) : ");
    scanf("%f",&taille);
    printf("poids (en kg) : ");
    scanf("%f",&poids);
    
    ficheRecapitulative(nom, prenom, age, taille, poids);
    imc=calculIMC(poids, taille);
    afficherCorpulence(imc);
    do{
        afficherMenu();
        scanf(" %c",&choix);
        switch(choix){
            case 'a' :
                poidsIdeal=calculerPoidsLorentz(genre, taille);
                printf("\nVotre poids idéal selon la formule de Lorentz est %.2f kg",poidsIdeal);
                break;
            case 'b' :
                poidsIdeal=calculerPoidsDevine(taille,genre);
                printf("\nVotre poids idéal selon la formule de Devine est %.2f kg",poidsIdeal);
                break;
            case 'c' :
                poidsIdeal=calculerPoidsLorentzAge(age,taille);
                printf("\nVotre poids idéal selon la formule de Lorentz en tenant compte de l'âge est %.2f kg",poidsIdeal);
                break;
        }
    }while(choix!='q');
    

    return 0;
}

