/* 
 * File:   coursArgumentDeLaLigneDeCommance.c
 * Author: msoulard
 *
 * Created on 12 décembre 2019, 11:16
 */

#include <stdio.h>
#include <stdlib.h>

    /*Exercice 1*/
//char **argv <-> char argv[NBCHAINE][LONGUEUERSCHAINES]
int main(int argc, char** argv) {
/*
    int i;
    printf("Il y a %d paramètres\n",argc);
    //affichage des chaînes du tableau argv
    for(i=0 ; i<argc ; i++){
        printf("argument %d : %s\n",i,argv[i]);
    }
*/

    /*Exercice 2*/
    char operateur;
    float val1;
    float val2;
    float resultat;
    //s'il n'y a pas 3 arguments après le nom de l'exécutable, sortir du programme
    if(argc!=4){
        printf("usage : %s operateur val1 val2\n",argv[0]);
        exit(0);
    }
    //convertion des arguments et affectation dans les variables correspondantes
    sscanf(argv[1],"%c",&operateur);
    sscanf(argv[2],"%f",&val1);
    sscanf(argv[3],"%f",&val2);
    //tester l'opérateur et affecter le résultat
    switch (operateur){
        case '+' :
            resultat=val1+val2;
            break;
        case '-':
            resultat=val1-val2;
            break;
        case'x':
            resultat=val1*val2;
            break;
        case '/':
            resultat=val1/val2;
            break;
    }
    //afficher le résultat de l'opération
    printf("%.2f %c %.2f = %.2f\n", val1,operateur,val2,resultat);
    
    return (EXIT_SUCCESS);
}