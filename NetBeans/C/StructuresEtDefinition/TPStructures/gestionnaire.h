/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gestionnaire.h
 * Author: msoulard
 *
 * Created on 10 décembre 2019, 14:07
 */

#ifndef GESTIONNAIRE_H
#define GESTIONNAIRE_H

#define NBCARMAXNOM 50
#define NBCARMAXPRENOM 50
#define NBADHERENTS 5000

typedef enum{
    NATATION,
    BASKETBALL,
    HANDBALL,
    SQUASH,
    TENNIS
}sport;
typedef struct{
    int jour;
    int mois;
    int annee;
}typeDate;
typedef struct{
    char nom[NBCARMAXNOM];
    char prenom[NBCARMAXPRENOM];
    typeDate dateNaissance;
    int nbActivites;
    sport tabActivite[5];
    int numCarte;
}typeAdherent;

void afficherMenu(int nbAdherent);
void afficherDate(typeDate date);
void afficherActivite(sport activite);
void afficherUnAdherent(typeAdherent *ad);
typeAdherent *creerUnAdherent();
void afficherLesAdherents(typeAdherent *ad[],int nb);
int ajouterUnAdherent(typeAdherent *tab[], int nb);
int supprimerUnAdherent(typeAdherent *tab[],int nro,int nb);
int supprimerTousLesAdherents(typeAdherent *tab[],int nb);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* GESTIONNAIRE_H */

