/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExempleStrncmp.c
 * Author: msoulard
 *
 * Created on 7 novembre 2019, 10:37
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    if (strncmp("coucou", "couteau", 3) == 0) {
        printf("les 3 premier sont identiques \n");
    }
    
    return 0;
}
