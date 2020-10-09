/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package edu.touchard.diapo15ihm;

/**
 *
 * @author msoulard
 */
import javax.swing.JButton;
import javax.swing.JFrame;

public class TestIHM {
    
    public static void main(String[] args){
        JFrame maFenetre = new JFrame("ma fenetre");
        JButton b = new JButton("mon bouton");
        
        maFenetre.getContentPane().add(b);
        maFenetre.pack();
        maFenetre.setVisible(true);
    }
    
}
