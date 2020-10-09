/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package edu.touchard.td1javaexercice3;

import java.util.Scanner;

/**
 *
 * @author msoulard
 */
public class Degres {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        double celsius;
        double fahrenheit;
        Scanner clavier=new Scanner(System.in);
        System.out.println("Donnez une température en Fahrenheit ");
        fahrenheit=clavier.nextDouble();
        celsius=(5.0/9.0)*(fahrenheit-32);
        System.out.println(fahrenheit+" en Fahrenheit donne "+celsius+" en Celsius");
        clavier.close();
    }
    
}
