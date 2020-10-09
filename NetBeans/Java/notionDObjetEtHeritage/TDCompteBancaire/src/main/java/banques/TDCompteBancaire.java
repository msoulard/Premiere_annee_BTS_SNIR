/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package banques;

/**
 *
 * @author msoulard
 */
public class TDCompteBancaire {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        CompteBancaire compte;
        compte = new CompteBancaire(1000, 500);
        compte.afficher();
        compte.deposer(100);
        compte.changerDecouvert(600);
        compte.afficher();
        compte.retirer(-200);
        compte.afficher();
    }
    
}
