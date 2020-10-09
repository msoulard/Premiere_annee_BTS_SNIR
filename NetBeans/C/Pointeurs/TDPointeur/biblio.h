/* 
 * File:   biblio.h
 * Author: msoulard
 *
 * Created on 10 décembre 2019, 13:11
 */

#ifndef BIBLIO_H
#define BIBLIO_H
#define TAILLEMAX 255

char *moisNom(int nbMois);
char *supprimerE(char *chaine);
char *saisirChaine(char *phrase);
void swapFloat(float *ptrV1, float *ptrV2);
int discriminant(float a, float b, float c, float *racine1, float *racine2);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

