/* 
 * File:   main.c
 * Author: msoulard
 *
 * Created on 29 janvier 2020, 09:10
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "golf.h"

int main(int argc, char *argv[]) {

    typeScore *scores[NBMAXSCORES];
    /**********************************************
    declaration du tableau des parcours
     **********************************************/
    typeParcours *tab[NBMAXPARCOURS];

    int nbParcours = 0; // nombre de parcours disponibles
    int nbScores = 0;
    char choix;
    int nro, i;
    nbParcours = chargerParcours(tab);//charger le nombre de parcours existants

    //boucle de jeu tant que l'utilisateur ne choisit pas "Q"
    do {
        // appel de la fonction afficherMenu
        afficherMenu(nbParcours);
        //sélection du choix de l'utilisateur
        printf("votre choix ? ");
        scanf(" %c", &choix);
        choix = toupper(choix);
        //appels aux fonctions en fonction du choix de l'utilisateur
        switch (choix) {
            //création d'un parcours
            case 'C':
                nbParcours = creerParcours(tab, nbParcours);
                sauvegarderParcours(tab, nbParcours);
                break;
            //afficher un parcours
            case 'V':
                afficherLesParcours(tab, nbParcours);
                printf("Numero du parcours a afficher :");
                scanf(" %d", &nro);
                afficherUnParcours(tab, nro);
                break;
            //jouer un parcours
            case 'J':
                afficherLesParcours(tab, nbParcours);
                printf("Numero du parcours sur lequel vous voulez jouer :");
                scanf(" %d", &nro);
                scores[nbScores++] = jouerParcours(tab[nro]);
                break;
            //jouer un parcours à 2
            case 'D':
                afficherLesParcours(tab, nbParcours);
                printf("Numero du parcours sur lequel vous voulez jouer :");
                scanf(" %d", &nro);
                jouerParcoursADeux(tab[nro]);
                break;
        }
    } while (choix != 'Q');

    return EXIT_SUCCESS;
}