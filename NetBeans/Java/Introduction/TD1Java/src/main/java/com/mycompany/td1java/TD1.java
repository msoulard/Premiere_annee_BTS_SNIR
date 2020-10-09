/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.td1java;

import java.util.Scanner;

/**
 *
 * @author msoulard
 */
public class TD1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        /*int a;
        int b;
        int c;
        int d;
        int resultat;
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Donnez a ");
        a = sc.nextInt();
        System.out.println("Donnez b ");
        b = sc.nextInt();
        System.out.println("Donnez c ");
        c = sc.nextInt();
        System.out.println("Donnez d ");
        d = sc.nextInt();
        sc.close();*/

        float tableau[] = new float[4];
        int i;
        Scanner sc = new Scanner(System.in);
        for (i = 0; i < 4; i++) {
            System.out.println("Nombre [" + i + "] du tableau  : ");
            tableau[i] = sc.nextFloat();
        }
        sc.close();
        float somme = 0;
        float produit = 1;
        for (i = 0; i < 4; i++) {
            somme += tableau[i];
            produit *= tableau[i];
        }
        System.out.println("somme : " + somme);
        System.out.println("poduit : " + produit);
    }

}
