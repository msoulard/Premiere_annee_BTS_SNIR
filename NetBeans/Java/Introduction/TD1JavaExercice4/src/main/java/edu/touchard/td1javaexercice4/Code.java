/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package edu.touchard.td1javaexercice4;

import java.util.Scanner;

/**
 *
 * @author msoulard
 */
public class Code {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int tableau[] = new int[4];
        int i;
        Scanner clavier = new Scanner(System.in);
        do {
            for (i = 0; i < 4; i++) {
                System.out.println("Donnez le chiffre " + (i+1) + " du code : ");
                tableau[i] = clavier.nextInt();
            }
        } while (tableau[0] != 1 || tableau[1] != 2 || tableau[2] != 3 || tableau[3] != 4);
        System.out.println("Vous avez trouvé le code");
        clavier.close();
    }
}
