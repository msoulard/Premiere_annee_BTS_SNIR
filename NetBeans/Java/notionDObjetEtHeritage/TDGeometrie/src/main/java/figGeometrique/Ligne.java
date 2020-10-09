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
public class Ligne {
    private Point debut;
    private Point fin;
    private double epaisseur;
    private boolean pointille;
    public Ligne(){
        
    }
    public Ligne(Point debut, Point fin, double epaisseur, boolean pointille){
        this.debut=debut;
        this.fin=fin;
        this.epaisseur=epaisseur;
        this.pointille=pointille;
    }
    public Ligne(Ligne l){
        this.debut=l.debut;
        this.fin=l.fin;
        this.epaisseur=l.epaisseur;
        this.pointille=l.pointille;
    }
    double calculerLongueurLigne(){
        double longueur;
        longueur=fin.calculerDistancePoints(debut);
        return longueur;
    }
    void afficherLigne(){
        System.out.format("Cette ligne a pour départ ");
        debut.afficherPoint();
        System.out.format("pour fin ");
        fin.afficherPoint();
        System.out.format("et a pour longueur %.2f",calculerLongueurLigne());
    }
}
