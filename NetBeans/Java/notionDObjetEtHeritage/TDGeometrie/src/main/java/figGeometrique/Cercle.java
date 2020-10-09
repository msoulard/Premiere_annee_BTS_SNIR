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
public class Cercle {
    private double rayon;
    private double x;
    private double y;
    private double aire;

    public Cercle() {
    }

    public Cercle(double r, double abs, double ord) {
        this.rayon = r;
        this.x = abs;
        this.y = ord;
    }
    double calculerAireCercle(){
        double aire;
        aire = rayon * rayon * Math.PI;
        return aire;
    }
    void afficherCercle(){
        System.out.println("Ce cercle de centre ("+x+", "+y+") et a une aire de "+calculerAireCercle());
    }
}
