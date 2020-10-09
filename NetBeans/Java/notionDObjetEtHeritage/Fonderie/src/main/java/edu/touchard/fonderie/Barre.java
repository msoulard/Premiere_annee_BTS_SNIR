package edu.touchard.fonderie;

/**
 *
 * @author msoulard
 */
public class Barre {

    /**
     *
     */
    protected double densite;

    /**
     *
     */
    protected double longueur;

    /**
     *
     */
    protected String reference;

    //Constructeur par défaut

    /**
     *
     */
    public Barre() {
        System.out.println("Constructeur par défaut");
    }

    //Constructeur à paramètres

    /**
     *
     * @param densite
     * @param longueur
     * @param reference
     */
    public Barre(double densite, double longueur, String reference) {
        System.out.println("Constructeur à paramètre");
        this.densite = densite;
        this.longueur = longueur;
        this.reference = reference;
    }

    //Constructeur copie

    /**
     *
     * @param copie
     */
    public Barre(Barre copie) {
        System.out.println("Constructeur copie");
        this.densite = copie.densite;
        this.longueur = copie.longueur;
        this.reference = copie.reference;
    }

    void afficherReference() {
        System.out.println("Référence de la barre : " + reference);
    }
}
