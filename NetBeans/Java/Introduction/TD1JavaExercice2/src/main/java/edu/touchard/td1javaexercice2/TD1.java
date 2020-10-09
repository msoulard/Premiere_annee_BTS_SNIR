/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package edu.touchard.td1javaexercice2;

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
        int n;
        int i;
        int resultat;
        Scanner clavier=new Scanner(System.in);
        n=clavier.nextInt();
        TD1 facto = new TD1();
        resultat=facto.claculer(n);
        System.out.println(n+" != "+resultat);
        clavier.close();
    }
    private int claculer(int n){
        int facto=1;
        int i;
        for(i=1 ; i<=n ; i++){
            facto*=i;
        }
        return facto;
    }
    
}
