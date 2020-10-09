/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExempleStrcpy.c
 * Author: msoulard
 *
 * Created on 7 novembre 2019, 10:38
 */

/* strcpy example */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main ()
{
  char phrase[TAILLEMAX];
  char copie[TAILLEMAX];
  
  printf("Donnez une phrase à copier ");
  gets(phrase);
  strcpy (copie,phrase);
  printf ("Votre phrase est '%s'\nLa copie de votre phrase est '%s'.",phrase,copie);
  
  return 0;
}
