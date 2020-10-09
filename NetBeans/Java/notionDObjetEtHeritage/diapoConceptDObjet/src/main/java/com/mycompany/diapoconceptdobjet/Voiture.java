package com.mycompany.diapoconceptdobjet;

/**
 *
 * @author msoulard
 */
public class Voiture {

    private String couleur;
    private int nbKilometres;

    public Voiture(String c, int nb) {
        this.couleur = c;
        this.nbKilometres = nb;
    }

    public void rouler(int distance) {
        nbKilometres += distance;
    }

    public void afficher() {
        System.out.println("couleur : " + couleur);
        System.out.println("kilométrage : " + nbKilometres);
    }

    public String getCouleur() {
        return couleur;
    }

    public int getNbKilometres() {
        return nbKilometres;
    }

    public void setCouleur(String couleur) {
        this.couleur = couleur;
    }

    public void setNbKilometres(int nbKilometres) {
        this.nbKilometres = nbKilometres;
    }
    

}
