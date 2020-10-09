/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: msoulard
 *
 * Created on 4 novembre 2019, 15:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    /*Date de naissance*/
    int jour;
    int mois;
    int annee;
    
    printf("Donnez votre jour de naissance : ");
    scanf("%d",&jour);
    while(jour<1 || jour>31){
        printf("Donnez votre jour de naissance : ");
        scanf("%d",&jour);
    }
    printf("Donnez votre mois de naissance : ");
    scanf("%d",&mois);
    while(mois<1 || mois>12){
        printf("Donnez votre mois de naissance : ");
        scanf("%d",&mois);
    }
    printf("Donnez votre année de naissance : ");
    scanf("%d",&annee);
    while(annee>2017){
        printf("Donnez votre année de naissance : ");
        scanf("%d",&annee);
    }
    
    //printf("Votre date de naissance est %d/%d/%d.",jour,mois,annee);
    
    /*Prénom et nom de l'utilisateur*/
    char prenom[49];
    char nom[49];
    
    printf("Donnez votre prénom : ");
    scanf("%s",prenom);
    printf("Donnez votre nom : ");
    scanf("%s",nom);
    
    printf("Bienvenu(e) %s %s.\n",prenom,nom);
    
    /*Vérification de l'année de naissance*/
    if(annee>=1999){
        printf("Vous êtes autorisés à continuer.\n");
    }
    else{
        printf("Désolé vous êtes trop jeune");
    }
    
    /*Forme de la date de naissance*/
    int choix;
    
    printf("Format d'affichage de votre naissance : \n 1-jj/mm/aaaa \n 2-jj-mm-aaaa \n 3-jj:mm:aaaa \n 4-jj.mm.aaaa \n Choisissez le format d'affichage (1, 2, 3 ou 4) : ");
    scanf("%d",&choix);
    
    switch (choix){
        case 1 :
            printf("Votre date de naissance est %d/%d/%d.",jour,mois,annee);
            break;
        case 2 :
            printf("Votre date de naissance est %d-%d-%d.",jour,mois,annee);
            break;
        case 3 :
            printf("Votre date de naissance est %d:%d:%d.",jour,mois,annee);
            break;
        case 4 :
            printf("Votre date de naissance est %d.%d.%d.",jour,mois,annee);
            break;
        default :
            printf("Votre choix n'est pas correcte, veuillez recommencer.");
            printf("Format d'affichage de votre naissance : \n 1-jj/mm/aaaa \n 2-jj-mm-aaaa \n 3-jj:mm:aaaa \n 4-jj.mm.aaaa \n Choisissez le format d'affichage (1, 2, 3 ou 4) : ");
            scanf("%d",&choix);
    }


    return (EXIT_SUCCESS);
}

