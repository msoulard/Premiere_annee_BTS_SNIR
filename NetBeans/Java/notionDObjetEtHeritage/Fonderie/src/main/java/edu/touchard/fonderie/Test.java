package edu.touchard.fonderie;

/**
 *
 * @author msoulard
 */
public class Test {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        BarreCarree barreCarree;
        BarreRectangle barreRectangle;
        BarreRonde barreRonde;
        BarreCarree barreCarreeCopie;

        barreCarree = new BarreCarree(0.5, 7.8, 9, "AC02");
        barreRectangle = new BarreRectangle(0.6, 0.5, 8.9, 13, "AD03");
        barreRonde = new BarreRonde(0.9, 11.3, 14, "AE04");
        barreCarreeCopie = new BarreCarree(barreCarree);

        barreCarree.afficher();
        barreCarreeCopie.afficher();
        barreRectangle.afficher();
        barreRonde.afficher();
    }

}
