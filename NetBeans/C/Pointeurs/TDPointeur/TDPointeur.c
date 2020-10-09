/* 
 * File:   TDPointeur.c
 * Author: msoulard
 *
 * Created on 9 décembre 2019, 15:06
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "biblio.h"
#define TAILLEMAX 255

int main(int argc, char** argv)
{
    /*Exercice 1 (questions 1 à 4)*/
/*
    char *ptrCar;
    int *ptrEntier;
    float *ptrReel;
    char chaine[] = "12345678000A";
    int i;
    ptrCar = chaine;
    ptrEntier = (int *) chaine;
    ptrReel = (float *) chaine;
    for (i = 0; i < 3; i++)
    {
        printf("ptrCar    = %p       *ptrCar    = %c\n", ptrCar, *ptrCar);
        printf("ptrEntier = %p       *ptrEntier = %d\n", ptrEntier, *ptrEntier);
        printf("ptrReel   = %p       *ptrReel   = %f\n", ptrReel, *ptrReel);
        ptrCar++;
        ptrEntier++;
        ptrReel++;
        printf("\n");
    }
*/
    
    /*Exercice 2(question 5)*/
    
/*
    int nbMois;
    char *mois;
    printf("Donnez le nombre du mois : ");
    scanf("%d",&nbMois);
    mois=moisNom(nbMois);
    printf("Le mois %d est %s",nbMois,mois);
*/
    
    /*Exercice 2 (question 6)*/
    
/*
    char chaine[TAILLEMAX];
    char *chaineSansLesE;
    printf("Donnez une chaîne de carcatères : ");
    scanf("%s",chaine);
    chaineSansLesE=supprimerE(chaine);
    printf("Chaîne de caractères sans les 'e' : %s", chaineSansLesE);
*/
    
    /*Exercice 2 (question 7)*/
    
/*
    char *reponse;
    reponse=saisirChaine("Comment vous appelez-vous?");
    printf("Vous vous appelez %s",reponse);
*/
    
    /*Exercice 3 (question 8)*/
    
/*
    float val1;
    float val2;

    val1 = 10;
    val2 = 20;

    printf("val1=%.2f val2=%.2f\n", val1, val2);
    swapFloat(&val1, &val2);
    printf("val1=%.2f val2=%.2f\n", val1, val2);
*/
    
    /*Exercice 3 (question 9)*/
    
    float a;
    float b;
    float c;
    float racine1;
    float racine2;
    int racine;
    
    racine1=0;
    racine2=0;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    
    racine=discriminant(a, b, c, &racine1, &racine2);
    if(racine==1){
        printf("\nracine1=%.2f\nracine2=%.2f", racine1, racine2);
    }
    else{
        printf("\nIl n'y a pas de racine dans l'ensemble des réels");
    }
    
    return (EXIT_SUCCESS);
}

