/*
 *File:Version3
 *Author:msoulard
 *Created on 16 octobre 2019
 *Description:Jeu MinorMind
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/timeb.h>
#include <math.h>
#include <ctype.h>
#include <unistd.h>
#include <time.h>
#include <sys/random.h>

#define NBMAXCAR 255

// attendre un maxTime millisecondes

void msleep(unsigned int maxTime) {

    /*struct timespec {
    time_t tv_sec;        // secondes
    long   tv_nsec;       // nanosecondes
};*/

    struct timespec req;
    struct timespec rem;
    time_t secondes = 0;
    long nanoSecondes = 0;
    if (maxTime >= 1000) {
        do {
            secondes++;
            maxTime -= 1000;
        } while (maxTime >= 1000);
    }
    nanoSecondes = maxTime * 1000000;
    req.tv_sec = secondes;
    req.tv_nsec = nanoSecondes;
    nanosleep(&req, &rem);

}

/**
 * 
 * @param maxAlea valeur max de l'aleatoire
 * @return retourne une valeur entiere E[0..maxAlea[
 */
unsigned int aleatoire(unsigned int maxAlea) {
    struct timeb t;
    float a, b;
    unsigned int nbmilli;
    ftime(&t);
    nbmilli = t.time * 1000 + t.millitm;
    srand(nbmilli);
    a = rand();
    b = (maxAlea * a) / RAND_MAX;
    msleep(250);
    return ( (unsigned int) b);


}

int main(int argc, char** argv) {
    //Déclaration des variables aléatoires
    int valAlea1;
    int valAlea2;
    int valAlea3;
    int valAlea4;
    //Affectation des variables aléatoires
    valAlea1 = aleatoire(9);
    printf("La première valeur aléatoire est : %d \n", valAlea1);
    //tirage aléatoire de la valeur jusqu'à ce qu'elle soit différente de la précedente
    do {
        valAlea2 = aleatoire(9);
    } while (valAlea2 == valAlea1);
    printf("La seconde valeur aléatoire est : %d \n", valAlea2);
    do {
        valAlea3 = aleatoire(9);
    } while (valAlea3 == valAlea1 || valAlea3 == valAlea2);
    printf("La troisième valeur aléatoire est : %d \n", valAlea3);
    do {
        valAlea4 = aleatoire(9);
    } while (valAlea4 == valAlea1 || valAlea4 == valAlea2 || valAlea4 == valAlea3);
    printf("La quatrième valeur aléatoire est : %d \n", valAlea4);
    //Déclaration des variables du jeu
    int val1;
    int val2;
    int val3;
    int val4;
    int ok;
    char rejouer;
    int nbDeTentative;
    int nbDeValeursCorrectesBienPlacees;
    int nbDeValeursCorrectesMalPlacees;
    //Demander le pseudo ou pénom
    char prenom[NBMAXCAR];
    printf("Donnez votre pseudo ou prénom : ");
    scanf("%s", prenom);
    //Répéter le jeu tant que le joueur écrit o
    do {
        nbDeTentative=0;
        nbDeValeursCorrectesBienPlacees = 0;
        nbDeValeursCorrectesMalPlacees = 0;
        //boucle de jeu
        do {
            nbDeTentative = nbDeTentative+1;
            //Affectation des premières variables du joueur    
            printf("Donnez la première valeur : ");
            scanf("%d", &val1);
            printf("Donnez la seconde valeur : ");
            scanf("%d", &val2);
            printf("Donnez la troisième valeur : ");
            scanf("%d", &val3);
            printf("Donnez la quatrième valeur : ");
            scanf("%d", &val4);
            //Vérification que les valeurs du joueur soient comprises entre 0 et 9
            while (0 > val1 || val1 > 9) {
                printf("Votre première valeur n'est pas correcte. Il faut qu'elle soit comprise entre 0 et 9.\n");
                printf("Donnez la première valeur : ");
                scanf("%d", &val1);
            }
            do {
                while (0 > val2 || val2 > 9) {
                    printf("Votre seconde valeur n'est pas correcte. Il faut qu'elle soit comprise entre 0 et 9 et ne peut pas être égale à une autre de vos valeurs.\n");
                    printf("Donnez la seconde valeur : ");
                    scanf("%d", &val2);
                }
            } while (val2 == val1);
            do {
                while (0 > val3 || val3 > 9) {
                    printf("Votre troisième valeur n'est pas correcte. Il faut qu'elle soit comprise entre 0 et 9 et ne peut pas être égale à une autre de vos valeurs.\n");
                    printf("Donnez la troisième valeur : ");
                    scanf("%d", &val3);
                }
            } while (val3 == val1 || val3 == val2);
            do {
                while (0 > val4 || val4 > 9) {
                    printf("Votre quatrième valeur n'est pas correcte. Il faut qu'elle soit comprise entre 0 et 9 et ne peut pas être égale à une autre de vos valeurs.\n");
                    printf("Donnez la quatrième valeur : ");
                    scanf("%d", &val4);
                }
            } while (val4 == val1 || val4 == val2 || val4 == val3);
            //Test de bonne combinaison
            if (val1 == valAlea1 && val2 == valAlea2 && val3 == valAlea3 && val4 == valAlea4) {
                ok = 1;
            } else {
                ok = 0;
            }
            //Nombre des valeurs bien placées
            if (ok == 0) { //Le joueur n'a pas trouvé la bonne combinaison
                if (val1 == valAlea1) { //si valeur 1 bien placée
                    nbDeValeursCorrectesBienPlacees = nbDeValeursCorrectesBienPlacees + 1;
                } else { //si valeur 1 mal placée
                    if (val1 == valAlea2 || val1 == valAlea3 || val1 == valAlea4) {
                        nbDeValeursCorrectesMalPlacees = nbDeValeursCorrectesMalPlacees + 1;
                    }
                }
                if (val2 == valAlea2) { //si valeur 2 bien placée
                    nbDeValeursCorrectesBienPlacees = nbDeValeursCorrectesBienPlacees + 1;
                } else { //si valeur 2 mal placée
                    if (val2 == valAlea1 || val2 == valAlea3 || val2 == valAlea4) {
                        nbDeValeursCorrectesMalPlacees = nbDeValeursCorrectesMalPlacees + 1;
                    }
                }
                if (val3 == valAlea3) { //si valeur 3 bien placée
                    nbDeValeursCorrectesBienPlacees = nbDeValeursCorrectesBienPlacees + 1;
                } else { //si valeur 3 mal placée
                    if (val3 == valAlea1 || val3 == valAlea2 || val3 == valAlea3) {
                        nbDeValeursCorrectesMalPlacees = nbDeValeursCorrectesMalPlacees + 1;
                    }
                }
                if (val4 == valAlea4) { //si valeur 4 bien placée
                    nbDeValeursCorrectesBienPlacees = nbDeValeursCorrectesBienPlacees + 1;
                } else { //si valeur 4 mal placée
                    if (val4 == valAlea1 || val4 == valAlea2 || val4 == valAlea3) {
                        nbDeValeursCorrectesMalPlacees = nbDeValeursCorrectesMalPlacees + 1;
                    }
                }
                printf("Vous avez %d de bien placés.\n", nbDeValeursCorrectesBienPlacees);
                printf("Vous avez %d de mal placés.\n", nbDeValeursCorrectesMalPlacees);
            }
        } while (ok != 1);
        //Le combinaison a été trouvée
        printf("Vous avez gagnez %s. Il vous a fallu %d tentative(s).", prenom, nbDeTentative);
        //demander si le joueur veut rejouer
        do {
            printf("Voulez vous rejouer (o/n)?\n");
            scanf("%c", &rejouer);
        } while (rejouer != 'o' && rejouer != 'n');
    } while (rejouer == 'o');

    return (EXIT_SUCCESS);
}

