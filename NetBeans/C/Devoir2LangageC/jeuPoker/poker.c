/* 
 * File:   poker.c
 * Author: msoulard
 *
 * Created on 4 décembre 2019
 * Description : définition des fonctions pour le poker aux dés
 */

#include "poker.h"

void msleep(unsigned int maxTime) {
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

int calculerScore(int des[], int nbDes) {
    unsigned int idem[NBFACES] = {0, 0, 0, 0, 0, 0};
    // compteurs de combinaison
    int paire = 0, brelan = 0, carre = 0, poker = 0;
    int score = 0;
    // faire le compte des faces identiques pour chaque valeur de face
    for (int i = 0; i < nbDes; i++) {
        idem[des[i]]++;
    }
    // pour chaque face de des, compter le nombre d'occurence
    for (int i = 0; i < NBFACES; i++) {
        if (idem[i] == 2) {
            paire++;
        }
        if (idem[i] == 3) {
            brelan++;
        }
        if (idem[i] == 4) {
            carre++;
        }
        if (idem[i] == 5) {
            poker++;
        }
    }
    // application de la pondération pour chaque combinaison pour avoir le score
    score = paire * 10 + brelan * 30 + carre * 60 + poker * 70;
    return score;
}

int testerAge(int age, int ageLimite) {
    int x;
    //vérification de l'âge
    if (age < ageLimite) {
        x = -1;
    } else {
        x = 0;
    }
    return x;
}

int demanderMise(int solde) {
    int mise;
    //vérification que la mise soit inférieure ou égale au solde
    do {
        printf("\nVotre mise (solde de %d) ? ", solde);
        scanf("%d", &mise);
    } while (mise > solde);
    return mise;
}

int lancerUnDes(int nbFace) {
    int face;
    //prend une valeur aléatoire entre 0 et nbFace
    do {
        face = aleatoire((unsigned int) nbFace);
    } while (face <= 0 && face >= nbFace);
    return face;
}

void afficherCombinaison(int des[], int nbDes) {
    int i;
    //affichage des numéros des dés
    printf("numéro des dés | ");
    for (i = 0; i < nbDes; i++) {
        printf("%d |", i);
    }
    //affichage des valeurs des dés
    printf("\nvaleur des dés | ");
    for (i = 0; i < nbDes; i++) {
        printf("%d |", des[i]);
    }
}

int demanderNumeroDeDes() {
    int relancer;
    //choix du dés à relancer
    printf("numéro du dés à relancer (0, 1, 2, 3, 4 ou -1 si aucun) : ");
    scanf("%d", &relancer);
    return relancer;
}