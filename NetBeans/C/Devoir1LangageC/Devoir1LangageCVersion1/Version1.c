/*
 *File:Version1
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

// attendre un maxTime millisecondes

void msleep(unsigned int maxTime)
{
    
    /*struct timespec {
    time_t tv_sec;        // secondes
    long   tv_nsec;       // nanosecondes
};*/

    struct timespec req;
    struct timespec rem;
    time_t secondes = 0;
    long nanoSecondes = 0;
    if (maxTime >= 1000)
    {
        do
        {
            secondes++;
            maxTime -= 1000;
        }
        while (maxTime >= 1000);
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
unsigned int aleatoire(unsigned int maxAlea)
{
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


int main(int argc, char** argv)
{
    //Déclaration des variables aléatoires
    int valAlea1;
    int valAlea2;
    int valAlea3;
    int valAlea4;
    //Affectation des variables aléatoires
    valAlea1 = aleatoire(9);
    //printf("La première valeur aléatoire est : %d \n", valAlea1);
    valAlea2 = aleatoire(9);
    //printf("La seconde valeur aléatoire est : %d \n", valAlea2);
    valAlea3 = aleatoire(9);
    //printf("La troisième valeur aléatoire est : %d \n", valAlea3);
    valAlea4 = aleatoire(9);
    //printf("La quatrième valeur aléatoire est : %d \n", valAlea4);
    //Déclaration des variables des valeurs du joueur
    int val1;
    int val2;
    int val3;
    int val4;
    //Jeu
    //Affectation des premières variables du joueur    
    printf("Donnez la première valeur : ");
    scanf("%d",&val1);
    printf("Donnez la seconde valeur : ");
    scanf("%d",&val2);
    printf("Donnez la troisième valeur : ");
    scanf("%d",&val3);
    printf("Donnez la quatrième valeur : ");
    scanf("%d",&val4);
    //Vérification que les valeurs du joueur soient comprises entre 0 et 9
    while(0>val1 || val1>9){
        printf("Votre première valeur n'est pas correcte.\n");
        printf("Donnez la première valeur : ");
        scanf("%d",&val1);
    }
    while(0>val2 || val2>9){
        printf("Votre seconde valeur n'est pas correcte.\n");
        printf("Donnez la seconde valeur : ");
        scanf("%d",&val2);
    }
    while(0>val3 || val3>9){
        printf("Votre troisième valeur n'est pas correcte.\n");
        printf("Donnez la troisième valeur : ");
        scanf("%d",&val3);
    }
    while(0>val4 || val4>9){
        printf("Votre quatrième valeur n'est pas correcte.\n");
        printf("Donnez la quatrième valeur : ");
        scanf("%d",&val4);
    }
    //Vérification des égalités entre les variables aléatoires et les valeurs du joueurs avec de nouvelles chances jusqu'à ce que le joueur trouve les bonnes valeurs
    while(val1!=valAlea1 || val2!=valAlea2 || val3!=valAlea3 || val4!=valAlea4){
        nbDeTentative=nbDeTentative+1;
        printf("Vous avez perdu. Retentez votre chance.\n");     
        //Vérification que les valeurs du joueur soient comprises entre 0 et 9
        while(0>val1 || val1>9){
            printf("Votre première valeur n'est pas comprise entre 0 et 9.\n");
            printf("Donnez la première valeur : ");
            scanf("%d",&val1);
        }
        while(0>val2 || val2>9){
            printf("Votre seconde valeur n'est pas comprise entre 0 et 9.\n");
            printf("Donnez la seconde valeur : ");
            scanf("%d",&val2);
        }
        while(0>val3 || val3>9){
            printf("Votre troisième valeur n'est pas comprise entre 0 et 9.\n");
            printf("Donnez la troisième valeur : ");
            scanf("%d",&val3);
        }
        while(0>val4 || val4>9){
            printf("Votre quatrième valeur n'est pas comprise entre 0 et 9.\n");
            printf("Donnez la quatrième valeur : ");
            scanf("%d",&val4);
        }
    }
    printf("Vous avez gagnez.");
    
    return (EXIT_SUCCESS);
}
