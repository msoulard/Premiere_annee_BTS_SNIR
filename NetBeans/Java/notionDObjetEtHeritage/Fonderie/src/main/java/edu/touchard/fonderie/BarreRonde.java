package edu.touchard.fonderie;

/**
 *
 * @author msoulard
 */
public class BarreRonde extends Barre {

    private double rayon;

    //Constructeur par défaut

    /**
     *
     */
    public BarreRonde() {
    }

    //Constructeur à paramètres

    /**
     *
     * @param rayon
     * @param densite
     * @param longueur
     * @param reference
     */
    public BarreRonde(double rayon, double densite, double longueur, String reference) {
        super(densite, longueur, reference);
        this.rayon = rayon;
    }

    //Constructeur copie

    /**
     *
     * @param copie
     */
    public BarreRonde(BarreRonde copie) {
        super(copie);
        this.rayon = copie.rayon;
    }

    void calculerMasse() {
        double section;
        double masse;
        section = (Math.PI) * rayon * rayon;
        masse = longueur * densite * section;
        System.out.println("Masse d'une barre circulaire : " + masse);
    }

    void afficher() {
        super.afficherReference();;
        calculerMasse();
    }

}
