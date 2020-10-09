/* 
 * File:   biblioTPAccesFichier.h
 * Author: msoulard
 *
 * Created on 22 janvier 2020, 09:10
 */

#ifndef BIBLIOTPACCESFICHIER_H
#define BIBLIOTPACCESFICHIER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define NBADHERENTS 5000
#define NBCARMAXNOM 50
#define NBCARMAXPRENOM 50

typedef enum {
    NATATION,
    BASKETBALL,
    HANDBALL,
    SQUASH,
    TENNIS
} sport;
typedef struct {
    int jour;
    int mois;
    int annee;
} typeDate;
typedef struct {
    char nom[NBCARMAXNOM];
    char prenom[NBCARMAXPRENOM];
    typeDate dateNaissance;
    int nbActivites;
    sport tabActivite[5];
    int numCarte;
} typeAdherent;

void afficherMenu(int nbAdherent);
void afficherDate(typeDate date);
void afficherActivite(sport activite);
void afficherUnAdherent(typeAdherent *ad);
typeAdherent *creerUnAdherent();
void afficherLesAdherents(typeAdherent *ad[], int nb);
int ajouterUnAdherent(typeAdherent *tab[], int nb);
int supprimerUnAdherent(typeAdherent *tab[], int nro, int nb);
int supprimerTousLesAdherents(typeAdherent *tab[], int nb);
void sauvegardeAdherents(typeAdherent *tab[ ], int nbAdherent);
int chargeAdherents(typeAdherent *tab[ ]);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* BIBLIOTPACCESFICHIER_H */

