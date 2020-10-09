/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   maBiblio.h
 * Author: msoulard
 *
 * Created on 19 novembre 2019, 13:23
 */

#ifndef maBiblio_H
#define maBiblio_H

#define TAILLEMAX 255
#define LARGEUR 15
#define HAUTEUR 9

void afficherMenu(char sexe);
float additionReels(float v1, float v2);
int partieEntiere(float v);
int calculerCarre(int carre);
void afficherCarre(int resultat);
float calculerDiscriminant(float x, float y, float z);
void afficherRacines(float x, float y, float z);
void afficherUneLigne(int ligne);
void afficherUnCarre(int lon);
void afficherUnRectangle(int longueur, int largeur);
int compterSymbole(char chaine[TAILLEMAX], char caractere);
int verifTerminaison(char *chaine, char fin[2]);
void initGrille(unsigned char grille[LARGEUR][HAUTEUR]);
void afficheGrille(unsigned char grille[LARGEUR][HAUTEUR]);
int nbCroix(unsigned char grille[LARGEUR][HAUTEUR]);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* MENU_ADDITION_H */

