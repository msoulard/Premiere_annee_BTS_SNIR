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
public class CompteCheque extends CompteBancaire {

    private double decouvertAutorise;

    void changerDecouvert(float nouveau) {
        decouvertAutorise = nouveau;
    }
}
