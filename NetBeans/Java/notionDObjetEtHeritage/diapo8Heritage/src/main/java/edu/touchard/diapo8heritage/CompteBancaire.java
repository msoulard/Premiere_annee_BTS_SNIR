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
public class CompteBancaire {

    /**
     *
     */
    protected double solde;

    void deposer(double depot) {
        if(depot>=0){
            solde += depot; 
        }        
    }

    void retirer(double retrait) {
        if (retrait >= 0 && retrait<=solde) {
            solde -= retrait;
        }
    }
}
