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
public class CompteBancaire {
    private float solde;
    private float decouvert;
    //construsteur par défaut
    public CompteBancaire() {
    }
    //constructeur à paramètres
    public CompteBancaire(float s, float d) {
        this.solde=s;
        this.decouvert=d;
    }
    //constructeur copie
    public CompteBancaire(CompteBancaire c) {
        this.solde=c.solde;
        this.decouvert=c.decouvert;
    }
    void deposer(float depot){
        solde+=depot;
    }
    void retirer(float retrait){
        if(retrait>=0 && solde+decouvert>=retrait){
            solde-=retrait;
        }        
    }
    void afficher(){
        System.out.println("Votre compte bancaire a un solde de "+solde+" et vous avez le droit à un découvert de "+decouvert);
    }
    void changerDecouvert(float nouveau){
        decouvert=nouveau;
    }
}
