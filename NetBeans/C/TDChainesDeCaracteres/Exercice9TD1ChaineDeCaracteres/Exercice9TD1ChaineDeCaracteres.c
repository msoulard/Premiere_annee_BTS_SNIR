/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice9TD1ChaineDeCaracteres.c
 * Author: msoulard
 *
 * Created on 7 novembre 2019, 15:22
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LONG 255

int main() {
    char morse[36][6] = {".-", "-..", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".----", "-.-", ".-..", "--",
        "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--",
        "....-", ".....", "-....", "--...", "---..", "----.", "------"};

    char buffer[LONG];
    int i;
    
    printf("Saisir une phrase ");
    fgets(buffer,sizeof(buffer), stdin);
    printf("\nLa phrase en morse est : \n");


    for (i=0 ; i <strlen(buffer); i++) {
        if (buffer[i] >= 'A' && buffer[i] <= 'Z') {
            printf("%s ", morse[buffer[i] - 'A']);
        }
        else if (buffer[i] >= 'a' && buffer[i] <= 'z') {
            printf("%s ", morse[buffer[i] - 'a']);
        }
        else if (buffer[i] >= '0' && buffer[i] <= '9') {
            printf("%s ", morse[buffer[i] - '0' + 26]);
        }
        else{
            printf("  ");
        }
    }    
    printf("\n");
    
    return 0;
}

