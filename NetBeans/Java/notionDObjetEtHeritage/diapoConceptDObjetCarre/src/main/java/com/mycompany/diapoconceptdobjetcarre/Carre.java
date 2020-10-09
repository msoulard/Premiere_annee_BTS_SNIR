/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.diapoconceptdobjetcarre;

/**
 *
 * @author msoulard
 */
public class Carre {
    int cote;
    //contructeur par défaut
    public Carre(){
        
    }
    //constructeur à paramètre
    public Carre (int cote){
        this.cote=cote;
    }
    public int calculPerimetre(){
        int perimetre;
        perimetre=cote*4;
        return perimetre;
    }
    public int calculAire(){
        int aire;
        aire=cote*cote;
        return aire;
    }
    public void afficherPerimetre(){
        System.out.println("périmètre : " + calculPerimetre());        
    }
    public void afficherAire(){
        System.out.println("aire : " + calculAire());
    }
    
}
