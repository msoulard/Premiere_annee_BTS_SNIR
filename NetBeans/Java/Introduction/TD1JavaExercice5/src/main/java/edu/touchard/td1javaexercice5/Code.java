/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package edu.touchard.td1javaexercice5;

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
        int compteur = 1;
        Scanner clavier = new Scanner(System.in);
        do {
            for (i = 0; i < 4; i++) {
                System.out.println("Donnez le chiffre " + (i + 1) + " du code : ");
                tableau[i] = clavier.nextInt();
            }
            compteur++;
        } while (compteur <= 3 && (tableau[0] != 1 || tableau[1] != 2 || tableau[2] != 3 || tableau[3] != 4));
        if (tableau[0] == 1 && tableau[1] == 2 && tableau[2] == 3 && tableau[3] == 4) {
            System.out.println("Vous avez trouvé le code");
        } else {
            System.out.println("Vous n'avez pas trouvé le code après 3 essais");
        }
        clavier.close();
    }

}
