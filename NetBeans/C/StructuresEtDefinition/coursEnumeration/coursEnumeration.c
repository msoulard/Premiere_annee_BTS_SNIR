/* 
 * File:   coursEnumeration.c
 * Author: msoulard
 *
 * Created on 12 décembre 2019, 10:25
 */

#include "biblio.h"

int main() {
    char *nomJour[7] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", " dimanche"};
    jours aujourdhui = SAMEDI;
    printf("%s\n", nomJour[aujourdhui]);

    boolean idem;
    char *chaine;
    chaine=saisirChaine("Donnez une phrase sans espace à tester si c'est un palindrome : ");
    idem=estUnPalindrome(chaine);
    if(idem==TRUE){
        printf("C'est un palindrome");
    }
    else{
        printf("Ce n'est pas un palindrome");
    }

    return 0;
}

