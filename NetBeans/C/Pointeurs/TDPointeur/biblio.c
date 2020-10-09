#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define TAILLEMAX 255

char *moisNom(int nbMois) {
    char mois[12][15] = {"janvier", "fevrier", "mars", "avril", "mai", "juin", "juillet", "aout", "septembre", "octobre", "novembre", "decembre"};
    char *nomDuMois;
    if (nbMois >= 1 && nbMois <= 12) {
        nomDuMois = (char*) malloc((strlen(mois[nbMois - 1]) + 1) * sizeof (char));
        strcpy(nomDuMois, mois[nbMois - 1]);
    } else {
        nomDuMois = (char*) malloc((strlen("mois inconnu") + 1) * sizeof (char));
        strcpy(nomDuMois, "mois inconnu");
    }
    return nomDuMois;
}

char *supprimerE(char *chaine) {
    char buffer[TAILLEMAX];
    char *chaineSansE;
    int i;
    int j;
    j = 0;
    for (i = 0; i < strlen(chaine); i++) {
        if (chaine[i] != 'e') {
            buffer[j] = chaine[i];
            j++;
        }
    }
    buffer[j] = '\0';
    chaineSansE = (char*) malloc((strlen(buffer) + 1) * sizeof (char));
    strcpy(chaineSansE, buffer);
    return chaineSansE;
}

char *saisirChaine(char *phrase) {
    char chaine[TAILLEMAX];
    char *ptrChaine;
    printf("%s ", phrase);
    scanf("%s", chaine);
    ptrChaine = (char*) malloc((strlen(chaine) + 1) * sizeof (char));
    strcpy(ptrChaine, chaine);
    return ptrChaine;
}

void swapFloat(float *ptrV1, float *ptrV2) {
    float val;
    val = *ptrV2;
    *ptrV2 = *ptrV1;
    *ptrV1 = val;
}

int discriminant(float a, float b, float c, float *racine1, float *racine2) {
    float discri;
    int possible;
    discri = (b*b)-(4*a*c);
    if(discri==0){
        *racine1=-b/2*a;
        *racine1=*racine2;
    }
    if(discri>0){
        *racine1=(-b-sqrtf(discri))/2*a;
        *racine2=(-b+sqrtf(discri))/2*a;
    }
    if(discri>=0){
        possible=1;
    }
    else{
        possible=-1;
    }
    return possible;
}