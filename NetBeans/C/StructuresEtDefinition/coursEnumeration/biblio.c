#include "biblio.h"

boolean estUnPalindrome(char *chaine){
    int i;
    int longueur;
    boolean idem=TRUE;
    longueur=strlen(chaine);
    for (i=0;i<longueur/2;i++)
    {
        if (chaine[i]!=chaine[(longueur-1)-i])
        {
            idem=FALSE;
        }
    }
    return idem;
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