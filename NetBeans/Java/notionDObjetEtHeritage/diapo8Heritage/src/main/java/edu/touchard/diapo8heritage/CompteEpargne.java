/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package edu.touchard.diapo8heritage;

/**
 *
 * @author msoulard
 */
public class CompteEpargne extends CompteBancaire {

    private double tauxInteret;

    double calculerInteret() {
        double interet;
        interet = tauxInteret * solde / 100.0;
        return interet;
    }

    void creditInteret() {
        solde += calculerInteret();
    }

    void changerTaux(double nouveauTaux) {
        tauxInteret = nouveauTaux;
    }
}
