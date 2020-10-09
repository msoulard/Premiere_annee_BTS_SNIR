/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio.h
 * Author: msoulard
 *
 * Created on 5 décembre 2019, 10:43
 */

#ifndef BIBLIO_H
#define BIBLIO_H

#include <stdio.h>
#include <stdlib.h>

#define NBCARMAXNOM 50
#define NBCARMAXPRENOM 50
#define NBBADGE 10

typedef struct personne{
    char nom[NBCARMAXNOM];
    char prenom[NBCARMAXPRENOM];
    unsigned int annee;
    float taille;
    float poids;
}typePersonne;

typedef struct adherent{
    char nom[NBCARMAXNOM];
    char prenom[NBCARMAXPRENOM];
    char badge[NBBADGE];
    int numActivite;
}typeAdherent;

typePersonne creePersonne();
void afficherPersonne(typePersonne personne);
typePersonne *creerPersonnePtr();
void afficherPersonnePtr(typePersonne *personne);
typeAdherent *nouvelAdherent(typeAdherent personne);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

