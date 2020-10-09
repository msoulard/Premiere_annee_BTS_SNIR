package edu.touchard.fonderie;

/**
 *
 * @author msoulard
 */
public class BarreRectangle extends Barre {

    private double largeur;
    private double hauteur;

    //Constructeur par défaut

    /**
     *
     */
    public BarreRectangle() {
    }

    //Constructeur à paramètres

    /**
     *
     * @param largeur
     * @param hauteur
     * @param densite
     * @param longueur
     * @param reference
     */
    public BarreRectangle(double largeur, double hauteur, double densite, double longueur, String reference) {
        super(densite, longueur, reference);
        this.largeur = largeur;
        this.hauteur = hauteur;
    }

    //Constructeur copie

    /**
     *
     * @param copie
     */
    public BarreRectangle(BarreRectangle copie) {
        super(copie);
        this.largeur = copie.largeur;
        this.hauteur = copie.hauteur;
    }

    void calculerMasse() {
        double section;
        double masse;
        section = largeur * hauteur;
        masse = longueur * densite * section;
        System.out.println("Masse d'une barre circulaire : " + masse);
    }

    void afficher() {
        super.afficherReference();;
        calculerMasse();
    }
}
