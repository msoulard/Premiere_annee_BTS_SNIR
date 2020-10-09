/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice3TD1Fonctions.c
 * Author: msoulard
 *
 * Created on 19 novembre 2019, 13:21
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "maBiblio.h"

#define TAILLEMAX 255
#define LARGEUR 15
#define HAUTEUR 9

int main() {
    /*
    //Afficher le menu en fonction du sexe de la personne
    char genre;
    
    printf("Vous êtes un homme ou une femme (h/f) ? ");
    scanf("%c",&genre);
    
    afficherMenu(genre);
    
    //Additionner deux réels
    float val1;
    float val2;
    
    printf("val1 : ");
    scanf("%f",&val1);
    printf("val2 : ");
    scanf("%f",&val2);
    
    printf("%.2f + %.2f = %.2f",val1,val2,additionReels(val1, val2));
    
    //Renvoie de la partie entière d'un nombre réel
    float val;
    
    printf("\nDonnez un nombre réel dont vous voulez connaître la partie réelle ");
    scanf("%f",&val);
    
    printf("La partie réelle de votre nombre est %d",partieEntiere(val));
    
    //Faire le carré d'un nombre
    int x;
    
    printf("Donnez un entier pour avoir son carré ");
    scanf("%d",&x);
    
    afficherCarre(x);
    
    //Calcul du discriminant
    float a;
    float b;
    float c;
    
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);
    
    printf("Le discriminant vaut %.2f", calculerDiscriminant(a,b,c));
    afficherRacines(a,b,c);
    
    //Afficher une ligne de '*'
    int ligne;
    
    printf("\nDonnez un entier ");
    scanf("%d",&ligne);
    afficherUneLigne(ligne);
    
    //Afficher un carré
    int carre;
    
    printf("\nDonnez un chiffre ");
    scanf("%d",&carre);
    afficherUnCarre(carre);
    
    //Afficher un rectangle
    int longueur;
    int largeur;
    
    printf("Donnez la longueur d'un rectangle ");
    scanf("%d",&longueur);
    printf("Donnez la largeur d'un rectangle ");
    scanf("%d",&largeur);
    afficherUnRectangle(longueur,largeur);
    
    //Compter le nombre de symboles dans une chaîne de caractères
    char chaine[TAILLEMAX];
    char caractere;
    
    printf("Donnez une chaîne de caractères ");
    gets(chaine);
    printf("Donnez un caractère ");
    scanf("%c",&caractere);
    printf("Il y a %d de '%c' dans votre chaîne de carcatères",compterSymbole(chaine,caractere),caractere);
    
    //Vérifier la bonne terminaison de la chaîne
    char mot[TAILLEMAX];
    char terminaison[2]={'e','r'};
    int finEnER;
    
    printf("Donner un mot ");
    scanf("%s",mot);
    finEnER=verifTerminaison(mot,terminaison);
    if(finEnER==1){
        printf("%s se termine bien en -er",mot);
    }
    else{
        printf("%s ne se termine pas en -er",mot);
    }
    */
    
    //Exercice 13
    unsigned char tab[LARGEUR][HAUTEUR];
    int x;
    int y;
    unsigned char lettre;
    int chiffre;
    int nombreDeCroix;
    
    initGrille(tab);
    do{
        afficheGrille(tab);
        printf("ajouter une croix : lettreChiffre (ex : b4)\n");
        printf("fin avec a-1 : ");
        scanf("%c%d",&lettre,&chiffre);
        if((lettre>='a' && lettre <='a'+LARGEUR) && (chiffre>=1 && chiffre <=HAUTEUR)){
            tab[lettre-'a'][chiffre-1]='X';
        }
    }while(lettre!='a' || chiffre!=-1);
    nombreDeCroix=nbCroix(tab);
    printf("\nil y a %d croix\n",nombreDeCroix);

    return 0;
}

