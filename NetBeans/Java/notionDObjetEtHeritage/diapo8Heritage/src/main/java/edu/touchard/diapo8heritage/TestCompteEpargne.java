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
public class TestCompteEpargne {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //...
        CompteEpargne ce;
        double interet;
        ce = new CompteEpargne();
        ce.deposer(100.0);
        ce.changerTaux(0.5);
        interet = ce.calculerInteret();
    }

}
