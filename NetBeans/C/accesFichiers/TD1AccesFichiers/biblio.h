/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio.h
 * Author: msoulard
 *
 * Created on 9 janvier 2020, 11:45
 */

#ifndef BIBLIO_H
#define BIBLIO_H

#define NBMAXCAR 50
typedef struct personne{
	char nom[NBMAXCAR];
	char prenom[NBMAXCAR];
	int age;
	float poids;
	char sexe ; // 'f' ou 'm'
}typePersonne;

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

