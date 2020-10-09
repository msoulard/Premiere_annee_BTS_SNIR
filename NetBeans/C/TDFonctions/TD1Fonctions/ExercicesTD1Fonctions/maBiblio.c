#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "maBiblio.h"

#define TAILLEMAX 255
#define LARGEUR 15
#define HAUTEUR 9

//Afficher le menu en fonction du sexe de la personne
void afficherMenu(char sexe){
    if(sexe=='f'){
        printf("menu pour femme\n");
    }
    if(sexe=='h'){
        printf("menu pour homme\n");
    }
}

//Additionner deux réels
float additionReels(float v1, float v2){
    float resultat;
    resultat=v1+v2;
    return resultat;
}

//Renvoie de la partie entière d'un nombre réel
int partieEntiere(float v){
    int e;
    e=v;
    return e;
}

//Calculer le carré d'un nombre
int calculerCarre(int carre){
    int resultat;
    resultat=carre*carre;
    return resultat;
}

//Afficher le carré d'un nombre
void afficherCarre(int x){
    printf("résultat = %d",calculerCarre(x));
}

//Calcul du discriminant
float calculerDiscriminant(float x, float y, float z){
    float discriminant;
    discriminant=(y*y)-(4*x*z);
    return discriminant;
}

//Afficher les racines de la fonction
void afficherRacines(float x, float y, float z){
    float y1;
    float y2;
    float discriminant;
    discriminant=calculerDiscriminant(x,y,z);
    if(discriminant>0){
        y1=(-y+sqrt(discriminant))/(2*x);
        y2=(-y-sqrt(discriminant))/(2*x);
        printf("\nx1=%.2f",y1);
        printf("\nx2=%.2f",y2);
    }    
    else{
        printf("\nLa valeur du discriminant vaut %.2f donc il n'y a pas deux racines pour cette fonction",discriminant);
    }
}

//Afficher une ligne
void afficherUneLigne(int ligne){
    int n;
    for(n=0 ; n<ligne ; n++){
        printf("*");
    }
}

//Afficher un carré
void afficherUnCarre(int lon){
    int hauteur;
    int largeur;
    for(hauteur=0 ; hauteur<lon ; hauteur++){
        for(largeur=0 ; largeur<lon ; largeur++){
            printf("*");
        }
        printf("\n");
    }
}

//Afficher un rectangle
void afficherUnRectangle(int longueur, int largeur){
    int hauteur;
    for(hauteur=0 ; hauteur<longueur ; hauteur++){
        afficherUneLigne(largeur);
        printf("\n");
    }
}

//Compter le nombre de symboles dans une chaîne de caractères
int compterSymbole(char chaine[TAILLEMAX], char caractere){
    int nb;
    int n;
    nb=0;
    for(n=0 ; n<strlen(chaine) ; n++){
        if(chaine[n]==caractere){
            nb++;
        }        
    }
    return nb;
}

//Vérifier la bonne terminaison de la chaîne
int verifTerminaison(char *chaine, char fin[2]){
    int taille;
    int val;
    taille=strlen(chaine);
    if(chaine[taille-1]==fin[1] && chaine[taille-2]==fin[0]){
        val=1;
    }
    else{
        val=-1;
    }
    return val;
}

//Exercice 13
void initGrille(unsigned char grille[LARGEUR][HAUTEUR]){
    int x;
    int y;
    for(y=0 ; y<HAUTEUR ; y++){
        for(x=0 ; x<LARGEUR ; x++){
            grille[x][y]='.';
        }
    }
}
void afficheGrille(unsigned char grille[LARGEUR][HAUTEUR]){
    int x;
    int y;
    unsigned char lettre='A';
    printf(" ");
    for(x=0 ; x<LARGEUR ; x++){
        printf(" %c",lettre++);
    }
    printf("\n");
    for(y=0 ; y<HAUTEUR ; y++){
        printf("%d", y+1);
        for(x=0 ; x<LARGEUR ; x++){
            printf(" %c",grille[x][y]);
        }
        printf("\n");
    }
}
int nbCroix(unsigned char grille[LARGEUR][HAUTEUR]){
    int nbCroix;
    int n;
    int i;
    nbCroix=0;
    for(n=0 ; n<LARGEUR ; n++){
        for(i=0 ; i<HAUTEUR ; i++){
            if(grille[n][i]=='X'){
                nbCroix++;
            }
        }
    }
    return nbCroix;
}