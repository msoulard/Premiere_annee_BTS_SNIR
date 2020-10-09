/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PoidsIdeal.h
 * Author: msoulard
 *
 * Created on 26 novembre 2019, 13:13
 */

#ifndef POIDSIDEAL_H
#define POIDSIDEAL_H
#define TAILLEMAX 255

char sexe( );
void ficheRecapitulative(char nom[TAILLEMAX], char prenom[TAILLEMAX], int age, float taille, float poids);
float calculIMC(float poids, float taille);
void afficherCorpulence(float imc);
void afficherMenu();
float calculerPoidsLorentz(char sexe, float taille);
float calculerPoidsLorentzAge(int age, float taille);
float calculerPoidsDevine(float taille, char sexe);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* POIDSIDEAL_H */

