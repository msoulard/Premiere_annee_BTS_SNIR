/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExempleStrlen.c
 * Author: msoulard
 *
 * Created on 7 novembre 2019, 10:36
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main ()
{
  char phrase[TAILLEMAX];
  printf ("Donnez une phrase dans laquelle vous désirez savoir la longeur de celle-ci ");
  gets (phrase);
  printf ("Votre phrase contient %u caractères.\n",strlen(phrase));
  return 0;
}

