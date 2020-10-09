#include "biblio.h"

typePersonne creePersonne(){    
    typePersonne unePersonne;
    
    printf("nom : ");
    scanf("%s",&unePersonne.nom);
    printf("prénom : ");
    scanf("%s",&unePersonne.prenom);
    printf("année : ");
    scanf("%u",&unePersonne.annee);
    printf("taille : ");
    scanf("%f",&unePersonne.taille);
    printf("poids : ");
    scanf("%f",&unePersonne.poids);    
    
    return unePersonne;
}
void afficherPersonne(typePersonne personne){
    
    printf("nom : %s\n",personne.nom);
    printf("prenom : %s\n",personne.prenom);
    printf("année : %u\n",personne.annee);
    printf("taille : %.2f\n",personne.taille);
    printf("poids : %.2f\n",personne.poids);
}
typePersonne *creerPersonnePtr(){
    typePersonne *PtrPers;
    PtrPers=(typePersonne *)malloc(sizeof(typePersonne));
    
    printf("nom : ");
    scanf("%s",&PtrPers->nom);
    printf("prénom : ");
    scanf("%s",&PtrPers->prenom);
    printf("année : ");
    scanf("%u",&PtrPers->annee);
    printf("taille : ");
    scanf("%f",&PtrPers->taille);
    printf("poids : ");
    scanf("%f",&PtrPers->poids);
    return PtrPers;
}
void afficherPersonnePtr(typePersonne *personne){
    
    printf("nom : %s\n",personne->nom);
    printf("prenom : %s\n",personne->prenom);
    printf("année : %u\n",personne->annee);
    printf("taille : %.2f\n",personne->taille);
    printf("poids : %.2f\n",personne->poids);
}
typeAdherent *nouvelAdherent(typeAdherent personne){
    typeAdherent *ptr;
    ptr=(typeAdherent*)malloc(sizeof(typeAdherent));
    printf("nom : ");
    scanf(" %s",&ptr->nom);
    printf("prénom : ");
    scanf(" %s",&ptr->prenom);
    printf("numéro de badge : ");
    scanf(" %s",&ptr->badge);
    printf("numéro d'activité : ");
    scanf("%d",&ptr->numActivite);
    return ptr;
}