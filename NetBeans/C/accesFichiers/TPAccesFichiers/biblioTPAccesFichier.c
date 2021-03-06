#include "biblioTPAccesFichier.h"

void afficherMenu(int nbAdherent) {
    if (nbAdherent == 0) {
        printf("A : Ajouter une fiche adhérent\n");
        printf("Q : Quitter\n");
    } else {
        printf("A : Ajouter une fiche adhérent\n");
        printf("S : Supprimer une fiche\n");
        printf("M : Modifier une fiche\n");
        printf("V : Voir le contenu d'une fiche\n");
        printf("L : Voir le contenu de l'ensemble des fiches\n");
        printf("E : Supprimer toutes les fiches\n");
        printf("Q : Quitter\n");
        ;
    }
}

void afficherDate(typeDate date) {
    printf("%d/%d/%d\n", date.jour, date.mois, date.annee);
}

void afficherActivite(sport activite) {
    char *acti[5] = {"natation", "basketball", "handball", "squash", "tennis"};
    sport choix = activite;
    printf("%s\n", acti[choix]);
}

void afficherUnAdherent(typeAdherent *ad) {
    int i;
    printf("nom : %s\n", ad->nom);
    printf("prénom : %s\n", ad->prenom);
    printf("date de naissance : ");
    afficherDate(ad->dateNaissance);
    printf("nombre d'activités : %d\n", ad->nbActivites);
    for (i = 0; i < ad->nbActivites; i++) {
        afficherActivite(ad->nbActivites - i);
    }
    printf("numéro de carte : %d\n", ad->numCarte);
}

typeAdherent *creerUnAdherent() {
    typeAdherent *ptr;
    int i;
    ptr = (typeAdherent*) malloc(sizeof (typeAdherent));
    printf("nom : ");
    scanf("%s", &ptr->nom);
    printf("prénom : ");
    scanf("%s", &ptr->prenom);
    printf("date de naissance (jj/mm/aaaa): ");
    scanf("%d/%d/%d", &ptr->dateNaissance.jour, &ptr->dateNaissance.mois, &ptr->dateNaissance.annee);

    printf("nombre d'activité : ");
    scanf("%d", &ptr->nbActivites);
    for (i = 0; i < ptr->nbActivites; i++) {
        printf("activités possibles : ");
        scanf("%d", &ptr->tabActivite[i]);
    }
    printf("numéro de carte : ");
    scanf("%d", &ptr->numCarte);
    return ptr;
}

void afficherLesAdherents(typeAdherent *ad[], int nb) {
    int i;
    for (i = 0; i < nb; i++) {
        afficherUnAdherent(ad[i]);
    }
}

int ajouterUnAdherent(typeAdherent *tab[], int nb) {
    tab[nb] = creerUnAdherent();
    return nb + 1;
}

int supprimerUnAdherent(typeAdherent *tab[], int nro, int nb) {
    if (nro >= 0 && nro < nb) {
        free(tab[nro]);
        tab[nro] = tab[nb - 1];
        nb = nb - 1;
    }
    return nb;
}

int supprimerTousLesAdherents(typeAdherent *tab[], int nb) {
    int i;
    for (i = 0; i < nb; i++) {
        free(tab[1]);
    }
    nb = 0;
    return nb;
}

void sauvegardeAdherents(typeAdherent *tab[ ], int nbAdherent) {
    FILE *fichierAdherents;
    int retour;
    int i;
    char reponse = 'o';

    printf("Avant de quitter l'application, voulez-vous sauvegarder les fiches dans un fichier (o/n) ? ");
    scanf(" %c", &reponse);
    if (reponse == 'o') {
        //ouverture du fichier en mode création/écriture
        fichierAdherents = fopen("/home/USERS/ELEVES/SNIR2019/msoulard/Documents/langage C (acces fichiers)/TPAccesFichier.txt", "w+");
        //problème lors de l'ouverture
        if (fichierAdherents == NULL) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
        //écriture dans le fichier
        retour = fwrite(&nbAdherent, sizeof (int), 1, fichierAdherents);
        if (retour != 1) {
            printf("Erreur d'écriture\n");
            exit(errno);
        }
        for (i = 0; i < nbAdherent; i++) {
            retour = fwrite(tab[i], sizeof (typeAdherent), 1, fichierAdherents);
        }
        if (retour != 1) {
            printf("Erreur d'écriture\n");
            exit(errno);
        }
        //fermer le fichier
        retour = fclose(fichierAdherents);
        if (retour == EOF) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
    } else {
        printf("L'application se termine sans sauvegarde des fiches des adhérents.\n");
    }
}

int chargeAdherents(typeAdherent *tab[ ]) {
    FILE *fichierAdherents;
    int retour;
    int nb;
    int i;

    //ouverture du fichier en mode création/écriture
    fichierAdherents = fopen("/home/USERS/ELEVES/SNIR2019/msoulard/Documents/langage C (acces fichiers)/TPAccesFichier.txt", "r");
    //problème lors de l'ouverture
    if (fichierAdherents == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //lire le contenu du fichier
    retour = fread(&nb, sizeof (int), 1, fichierAdherents);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    for (i = 0; i < nb; i++) {
        tab[i] = (typeAdherent*) malloc(sizeof (typeAdherent));
        retour = fread(tab[i], sizeof (typeAdherent), 1, fichierAdherents);
        if (retour != 1) {
            printf("Erreur de lecture\n");
            exit(errno);
        }
    }
    //fermer le fichier
    retour = fclose(fichierAdherents);
    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    return nb;
}