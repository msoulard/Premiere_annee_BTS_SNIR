package edu.touchard.fonderie;

/**
 *
 * @author msoulard
 */
public class BarreCarree extends Barre {
    private double cote;
    
    //Constructeur par défaut

    /**
     *
     */
    public BarreCarree() {
    }
    
    //Constructeur à paramètres

    /**
     *
     * @param cote
     * @param densite
     * @param longueur
     * @param reference
     */
    public BarreCarree(double cote, double densite, double longueur, String reference) {
        super(densite, longueur, reference);
        this.cote = cote;
    }
    
    //Constructeur copie

    /**
     *
     * @param copie
     */
    public BarreCarree(BarreCarree copie) {
        super(copie);
        this.cote = copie.cote;
    }

    void calculerMasse() {
        double section;
        double masse;
        section = cote * cote;
        masse = longueur * densite * section;
        System.out.println("Masse d'une barre circulaire : " + masse);
    }

    void afficher() {
        super.afficherReference();
        calculerMasse();
    }

}
