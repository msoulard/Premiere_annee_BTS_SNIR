/* 
 * File:   biblioTD3.h
 * Author: msoulard
 *
 * Created on 16 janvier 2020, 10:56
 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifndef BIBLIOTD3_H
#define BIBLIOTD3_H
#pragma pack(push, 1)

typedef struct {
    unsigned char signature[2];
    unsigned int tailleFichier;
    unsigned int reserve;
    unsigned int adresse;    
}typeEnTeteFichierBmp;//14 octets
typedef struct {
    unsigned int tailleEnTente;
    unsigned int largeur;
    unsigned int hauteur;
    unsigned short int nbPlan;
    unsigned short int bitParPixel;
    unsigned int typeCompression;
    unsigned int tailleImage;
    unsigned int resolutionHorizontale;
    unsigned int resolutionVerticale;
    unsigned int nbCouleursUtilisees;
    unsigned int nbCoulerusImportantes;
}typeEnTeteImage;//40 octets
typedef struct{
    unsigned char bleu;
    unsigned char vert;
    unsigned char rouge;
    unsigned char alpha; //réserve       
}typeCouleur; //4 octets

void afficheEnTeteFichierBmp(typeEnTeteFichierBmp e);
void afficheEnTeteImageBmp(typeEnTeteImage e);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* BIBLIOTD3_H */

