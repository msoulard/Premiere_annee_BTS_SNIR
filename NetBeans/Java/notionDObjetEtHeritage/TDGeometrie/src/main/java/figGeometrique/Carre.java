/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package figGeometrique;

/**
 *
 * @author msoulard
 */
public class Carre {
    private double cote;

    public Carre() {
    }

    public Carre(double c) {
        this.cote = c;
    }
    double calculerAireCarre(){
        double aire;
        aire=cote*cote;
        return aire;
    }
    void afficherCarre(){
        System.out.println("Ce carré a pour côté "+cote+" et pour aire "+calculerAireCarre());
    }
}
