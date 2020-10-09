/* 
 * File:   TPBonusStructures.c
 * Author: msoulard
 *
 * Created on 7 janvier 2020, 13:23
 */

#include <stdio.h>
#include <stdlib.h>
#include "treasureQuest.h"

int main() {
    char monde[LARGEUR][HAUTEUR];
    int i;
    int x, y; // position du joueur
    int sortie = 1;
    int tresor = 0;
    unsigned char dir;
    char choix;
    unsigned int etage = 1;
    typePersonnage *adversaire;
    typePersonnage *joueur;

    // création personnage
    joueur = creerPersonnage();
    // boucle jeu
    do {
        // boucle étage courant
        do {
            initMonde(monde, 10, 2, 2); // 30 monstres, 2 potions et 8 pièges
            x = LARGEUR / 2;
            y = HAUTEUR / 2;
            sortie = 1;
            tresor = 0;
            do {
                printf("Etage %u\n", etage);
                afficheMonde(monde, x, y);
                printf(JAUNE);
                printf(" Vie[%d/%u] ", joueur->pv, joueur->pvMax);
                printf(BLANC);
                //le trésor de l'étage n'a pas encore été trouvé, afficher distance du trésor
                if (tresor == 0) {
                    printf("(trésor à %.1f m)\n", getDistance(x, y, getXTresor(monde), getYTresor(monde)));
                } else {// le trésor a été trouvé, afficher distance de la sortie
                    printf("(sortie à %.1f m)\n", getDistance(x, y, getXSortie(monde), getYSortie(monde)));
                }
                printf("direction : ");
                scanf(" %c", &dir);
                // gestion des déplacements
                switch (dir) {
                    case '9':
                        x++;
                        y++;
                        break;
                    case '8':
                        y++;
                        break;
                    case '7':
                        x--;
                        y++;
                        break;
                    case '6':
                        x++;
                        break;
                    case '4':
                        x--;
                        break;
                    case '3':
                        x--;
                        y--;
                        break;
                    case '2':
                        y--;
                        break;
                    case '1':
                        x++;
                        y--;
                        break;
                }
                // gestion des bord de monde
                // si le joueur veut entrer dans le mur
                // il ne change finalement pas de place
                if (x == LARGEUR) {
                    x = LARGEUR - 1;
                }
                if (x == -1) {
                    x = 0;
                }
                /*
                à compléter
                 */
                switch (monde[x][y]) {
                    case MONSTRE:
                        printf(ROUGE);
                        afficheMonstre();
                        adversaire = creerAdversaire(1 + etage / 5);
                        faireUnDuel(joueur, adversaire);
                        free(adversaire);
                        printf(BLANC);
                        /*
                        à compléter
                         */
                        break;
                    case PIEGE:
                        affichePiege();
                        joueur->pv-20;
                        break;
                    case SORTIE:
                        if (tresor == 1) {
                            sortie = 0;
                        }
                        afficheSortie();
                        printf("La sortie\n");
                        break;
                    case TRESOR:
                        tresor = 1;
                        printf(JAUNE);
                        afficheTresor();
                        printf(BLANC);
                        printf("vous avez trouvé le trésor. reste à trouver la sortie\n");
                        /*
                        à compléter
                         */
                        break;
                    case POTION:
                        joueur->pv += POTION;
                        printf(VERT);
                        affichePotion();
                        printf("une potion de vie!!! vous gagnez %d pv\n", POTION);
                        printf(BLANC);
                        /*
                        à compléter
                         */
                        break;
                }
                if (joueur->pv <= 0) {
                    sortie = 0;
                }
            } while (sortie == 1);
            if (joueur->pv <= 0) {
                affichePerdu();
                printf("vous avez perdu\n");
            } else {
                etage++;
                printf("etage %u!!\n", etage);
            }
        } while (etage != 100 && joueur->pv > 0);
        printf("\nUne autre partie (O/N)?");
        scanf(" %c", &choix);
    } while (choix == 'o' || choix == 'O');

    return 0;
}