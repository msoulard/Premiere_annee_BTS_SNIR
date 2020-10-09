/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio.h
 * Author: msoulard
 *
 * Created on 12 décembre 2019, 10:26
 */

#ifndef BIBLIO_H
#define BIBLIO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

typedef enum {
    LUNDI,
    MARDI,
    MERCREDI,
    JEUDI,
    VENDREDI,
    SAMEDI,
    DIMANCHE
} jours;

typedef enum {
    TRUE,
    FALSE
}boolean;
boolean estUnPalindrome(char *chaine);
char *saisirChaine(char *phrase);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

