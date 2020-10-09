/* 
 * File:   main.c
 * Author: msoulard
 *
 * Created on 4 décembre 2019
 */

#include <stdio.h>
#include <stdlib.h>

#include "poker.h"

int main(int argc, char** argv) {
    int age1; //âge du premier joueur
    int age2; //âge du seconbd joueur
    char pseudo1[NBMAXCAR]; //pseudo du premier joueur
    char pseudo2[NBMAXCAR]; //pseudo du second joueur
    int ok1; //âge requis ou non pour le premier joueur
    int ok2; //âge requis ou non pour le second joueur
    char jeu; // choix de rejouer ou non
    int solde1; //solde du premier joueur
    int soldeMise1;//solde qu'il reste au premier joueur après sa mise
    int soldeMise2;//solde qu'il reste au second joueur après sa mise
    int solde2; //solde du second joueur
    int mise1; //mise du premier joueur
    int mise2; //mise du second joueur
    int des1[NBDES]; //dés du premier joueur
    int des2[NBDES]; //dés du second joueur
    int i; //compteur
    int num1; //numéro du dés du premier joueur à relancer
    int num2; //numéro du dés du second joueur à relancer
    int score1; //score du premier joueur
    int score2; //score du second joueur

    // exemple d'affichage avec des couleurs
    //printf("du texte en %svert%s mais juste le mot vert\n", GREEN, GREY);

    // demander nom et age des 2 joueurs
    printf("%sJoueur 1 donnez un pseudo : ", BLACK);
    scanf(" %s",pseudo1);
    printf("Joueur 1 donez votre âge : ");
    scanf(" %d", &age1);
    printf("Joueur 2 donnez un pseudo : ");
    scanf(" %s",pseudo2);
    printf("Joueur 2 donez votre âge : ");
    scanf(" %d", &age2);
    // tester si les ages permettent de joueur
    ok1 = testerAge(age1, 18);
    ok2 = testerAge(age2, 18);
    //vérification des âges des deux joueurs
    if (ok1 == 0 && ok2 == 0) {//les deux joueurs ont l'âge requis pour jouer
        //boucle du jeu
        do {
            // initialiser les cagnottes
            solde1 = 100;
            soldeMise1=0;
            solde2 = 100;
            soldeMise2=0;
            // boucle de partie (fin si l'un des joueurs a un solde de 0)
            do {
                // chaque joueur mise
                printf("\n[%s%s%s]", PURPLE, pseudo1, BLACK);
                mise1 = demanderMise(solde1);
                printf("\n[%s%s%s]", YELLOW, pseudo2,BLACK);
                mise2 = demanderMise(solde2);
                // lancement des dés
                //dés du premier joueur
                for (i = 0; i < NBDES; i++) {
                    des1[i] = lancerUnDes(NBFACES);
                }
                //dés du second joueur
                for (i = 0; i < NBDES; i++) {
                    des2[i] = lancerUnDes(NBFACES);
                }
                // afficher le résultat du premier joueur
                printf("\nrésultat du lancement des dés du joueur %s%s%s :\n", PURPLE, pseudo1, BLACK);
                afficherCombinaison(des1, NBDES);
                // choix du dés à relancer pour le premier joueur et affichage de la nouvelle combinaison
                printf("\njoueur %s%s%s :\n", PURPLE, pseudo1, BLACK);
                num1 = demanderNumeroDeDes();
                des1[num1] = lancerUnDes(NBFACES);
                if(num1==-1){
                    
                }
                else{
                   afficherCombinaison(des1, NBDES); //affichage de la nouvelle combinaison; 
                }                
                // afficher le résultat du second joueur
                printf("\nrésultat du lancement des dés du joueur %s%s%s :\n", YELLOW, pseudo2, BLACK);
                afficherCombinaison(des2, NBDES);
                // choix du dés à relancer pour le second joueur et affichage de la nouvelle combinaison
                printf("\njoueur %s%s%s :\n", YELLOW, pseudo2, BLACK);
                num2 = demanderNumeroDeDes();
                des2[num2] = lancerUnDes(NBFACES);
                if(num2==-1){
                    
                }
                else{
                  afficherCombinaison(des2, NBDES); //affichage de la nouvelle combinaison;  
                }                
                //calcul du score de chaque joueur
                score1 = calculerScore(des1, NBDES); //premier joueur
                score2 = calculerScore(des2, NBDES); //second joueur
                //afficher les scores
                printf("\n%s%s%s a un score de %d", PURPLE, pseudo1, BLACK, score1);
                printf("\n%s%s%s a un score de %d", YELLOW, pseudo2, BLACK, score2);
                // test du score du joueur 1 par rapport au score du joueur 2
                if (score1 > score2) {
                    //affichage du gagnant avec son score
                    printf("\n%s%s%s remporte la mise avec un score de %d", PURPLE, pseudo1, BLACK, score1);
                }
                if (score1 < score2) {
                    //affichage du gagnant avec son score
                    printf("\n%s%s%s remporte la mise avec un score de %d", YELLOW, pseudo2, BLACK, score2);
                }
                if (score1 == score2) {
                    //affichage du gagnant avec son score
                    printf("\nVous êtes à égalité avec un score de %d", score1);
                }
                //mise à jour des soldes
                soldeMise1=solde1-mise1;
                solde1=0;
                soldeMise2=solde2-mise2;
                solde2=0;
                if (score1 > score2) {
                    solde1=soldeMise1+mise1*2;
                }
                if (score1 < score2) {
                    solde2=soldeMise2+mise2;
                }
                if (score1 == score2) {
                    solde1=soldeMise1+mise1*2;
                    solde2=soldeMise2+mise2*2;
                }
                //fin de la boucle de partie                
            } while (solde1 > 0 && solde2 > 0);
            //affichage du gagnant
            if (solde1 < solde2) {
                printf("\nLe gagnant est %s%s%s", YELLOW, pseudo2, BLACK);
            }
            if (solde2 < solde1) {
                printf("\nLe gagnant est %s%s%s", PURPLE, pseudo1, BLACK);
            }
            //vérification de la réponse
            do {
                //demande aux joueurs s'ils veulent rejouer
                printf("\nVoulez-vous rejouer (o/n) ? ");
                scanf(" %c",&jeu);
            }while(!(jeu!='o' || jeu!='n'));
        }while (!(jeu == 'n'));//fin de la boucle
    } else {// une des deux joueurs ou les deux joueurs n'ont pas l'âge requis
        printf("\nVous ne pouvez pas jouer, un des joueurs n'a pas l'âge requis");
    }
    // afficher un message d'au revoir
    printf("\nMerci d'avoir joué et à bientôt");

    return (EXIT_SUCCESS);
}

