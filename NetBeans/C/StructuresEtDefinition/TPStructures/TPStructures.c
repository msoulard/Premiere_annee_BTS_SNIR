/* 
 * File:   TPStructures.c
 * Author: msoulard
 *
 * Created on 10 décembre 2019, 14:06
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gestionnaire.h"
#define NBADHERENTS 5000

int main() {
    typeAdherent * tabAdherent[NBADHERENTS];
    int compteurAdherent;
    int i;
    int choix;
    char menu;

    compteurAdherent = 0;

    do {
        afficherMenu(compteurAdherent);
        scanf(" %c", &menu);
        switch (menu) {
                //Ajouter une fiche
            case 'A':
                compteurAdherent = ajouterUnAdherent(tabAdherent, compteurAdherent);
                break;
                //Supprimer une fiche
            case 'S':
                printf("Quel numéro de fiche voulez-vous supprimer ? (entre 0 et %d) ", compteurAdherent - 1);
                scanf("%d", &choix);
                compteurAdherent = supprimerUnAdherent(tabAdherent, choix, compteurAdherent);
                break;
                //Modifier une fiche
            case 'M':
                printf("Quel numéro de fiche voulez-vous modifier ? (entre 0 et %d) ", compteurAdherent - 1);
                scanf("%d", &choix);
                compteurAdherent = supprimerUnAdherent(tabAdherent, choix, compteurAdherent);
                compteurAdherent = ajouterUnAdherent(tabAdherent, compteurAdherent);
                break;
                //Voir le contenu d'une fiche
            case 'V':
                printf("Quelle fiche voulez-vous voir ? (entre 0 et %d) ", compteurAdherent - 1);
                scanf("%d", &choix);
                afficherUnAdherent(tabAdherent[choix]);
                break;
                //Voir le contenu de l'ensemble des fiches
            case 'L':
                afficherLesAdherents(tabAdherent, compteurAdherent);
                break;
                //Supprimer toutes les fiches
            case 'E':
                compteurAdherent = supprimerTousLesAdherents(tabAdherent, compteurAdherent);
                break;
                //Quitter
            case 'Q':
                break;
        }
    } while (menu != 'Q');

    return 0;
}

