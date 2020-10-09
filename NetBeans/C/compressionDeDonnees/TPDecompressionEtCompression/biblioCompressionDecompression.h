/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblioCompressionDecompression.h
 * Author: msoulard
 *
 * Created on 28 janvier 2020, 13:26
 */

#ifndef BIBLIOCOMPRESSIONDECOMPRESSION_H
#define BIBLIOCOMPRESSIONDECOMPRESSION_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

#pragma pack(push, 1)

typedef struct{
    unsigned char signature[2];
    unsigned int tailleFichier;
    unsigned int reserve;
    unsigned int adresseImg;
} typeEnTeteFichierBmp; 

typedef struct{
    unsigned int tailleEnTete;
    unsigned int largeur;
    unsigned int hauteur;
    unsigned short int nbPlan;
    unsigned short int bitParPixel;
    unsigned int typeCompression;
    unsigned int tailleImage;
    unsigned int resolutionHorizontale;
    unsigned int resolutionVerticale;
    unsigned int nbCouleursUtilisees;
    unsigned int nbCouleursImportantes;
} typeEnTeteImageBmp;
typedef struct{
    unsigned char bleu;
    unsigned char vert;
    unsigned char rouge;
    unsigned char alpha;   
}typeCouleur;

int decompressBMP(char* source, char* destination);

#ifdef __cplusplus
}
#endif

#endif /* BIBLIOCOMPRESSIONDECOMPRESSION_H */

