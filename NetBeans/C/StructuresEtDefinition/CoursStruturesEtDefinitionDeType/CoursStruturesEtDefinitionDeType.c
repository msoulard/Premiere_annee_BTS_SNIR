/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CoursStruturesEtDefinitionDeType.c
 * Author: msoulard
 *
 * Created on 5 décembre 2019, 10:42
 */

#include "biblio.h"

/*
 * 
 */
int main() {
    /*Présentation*/
    /*typePersonne robert;
    
    strcpy(robert.nom,"bidochon");
    strcpy(robert.prenom,"robert");
    robert.annee=1954;
    robert.taille=1.65;
    robert.poids=75;
    printf("%s est né en %u mesurant %.2fm et pesant %.2fkg",robert.prenom, robert.annee, robert.taille, robert.poids);*/
    
    /*Utilisation du nouveau type*/
    /*typePersonne *robert;
    
    robert=(typePersonne *)malloc(sizeof(typePersonne));
    
    strcpy(robert->nom,"bidochon");
    strcpy(robert->prenom,"robert");
    robert->annee=1954;
    robert->taille = 1.65;
    robert->poids = 75.3;
    printf("%s est né en %u mesurant %.2fm et pesant %.2fkg",robert->prenom, robert->annee, robert->taille, robert->poids);
    
    // quand je n'ai plus besoin de robert
    free(robert);*/
    
    /*Question 1*/
    /*typePersonne toto;
    toto=creePersonne();
    printf("%s est né en %u mesurant %.2fm et pesant %.2fkg",toto.prenom, toto.annee, toto.taille, toto.poids);*/
    
    /*Question 2*/
    /*typePersonne toto;
    toto=creePersonne();
    afficherPersonne(toto);*/
 
    /*Question 3*/
    /*typePersonne *titi;
    titi=creerPersonnePtr();
    printf("%s est né en %u mesurant %.2fm et pesant %.2fkg",titi->prenom, titi->annee, titi->taille, titi->poids);*/
    
    /*Question 4*/
    /*typePersonne *titi;
    titi=creerPersonnePtr();
    afficherPersonnePtr(titi);*/
    
    return (EXIT_SUCCESS);    
}

