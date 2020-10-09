
/* 
 * File:   biblioTD3Question4.h
 * Author: msoulard
 *
 * Created on 21 janvier 2020, 14:18
 */

#ifndef BIBLIOTD3QUESTION4_H
#define BIBLIOTD3QUESTION4_H
#pragma pack(push, 1)

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct enTeteFichierBmp {
        unsigned char signature[2];
        unsigned int tailleFichier;
        unsigned int reserve;
        unsigned int adrInfImg;
    } typeEnTeteFichierBmp;

    typedef struct enTeteImage {
        unsigned int tailleET;
        unsigned int largeurImg;
        unsigned int hauteurImg;
        unsigned short int nbDP;
        unsigned short int bitPPix;
        unsigned int TypeDeComp;
        unsigned int tailleImg;
        unsigned int resHor;
        unsigned int resVer;
        unsigned int nbCouleur;
        unsigned int nbCouImp;
    } typeEnTeteImage;

    typedef struct {
        unsigned char b;
        unsigned char g;
        unsigned char r;
        unsigned char a;
    } typeCouleur;

    void afficherEnTeteFichierBmp(typeEnTeteFichierBmp bmp);
    void afficherEnTeteImageBmp(typeEnTeteImage img);



#ifdef __cplusplus
}
#endif

#endif /* BIBLIOTD3QUESTION4_H */

