/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.introductionjavatabledemultiplication;

import java.util.Scanner;

/**
 *
 * @author msoulard
 */
public class NewMain {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int i;
        int resultat;
        int multiplicateur;
        Scanner sc = new Scanner(System.in);
        System.out.println("Donnez un multiplicateur ");
        multiplicateur = sc.nextInt();
        sc.close();
        System.out.println("Table de multiplication de " + multiplicateur);
        for (i = 1; i <= 10; i++) {
            resultat = i * multiplicateur;
            System.out.println(i + "x" + multiplicateur + "=" + resultat);
        }
    }

}
