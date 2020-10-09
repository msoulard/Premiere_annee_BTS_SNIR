/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.diapoconceptdobjet;

/**
 *
 * @author msoulard
 */
public class TestVoiture {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Voiture maVoiture;
        maVoiture = new Voiture("rouge", 3000);
        maVoiture.afficher();

        maVoiture.rouler(15);
        System.out.println("couleur : " + maVoiture.getCouleur());
        System.out.println("kilométrage : " + maVoiture.getNbKilometres());
        maVoiture.setCouleur("gris");
        maVoiture.afficher();
    }

}
