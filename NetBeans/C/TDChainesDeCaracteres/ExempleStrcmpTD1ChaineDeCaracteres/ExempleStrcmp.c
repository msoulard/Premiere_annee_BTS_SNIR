/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExempleStrcmp.c
 * Author: msoulard
 *
 * Created on 7 novembre 2019, 10:37
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 255

int main ()
{
  char motATrouver[TAILLEMAX] = "cheval";
  char motUtilisateur[TAILLEMAX];
  do {
     printf ("Quel est mon animal préféré ? ");
     gets (motUtilisateur);
  } while (strcmp (motATrouver,motUtilisateur) != 0);
  printf ("Vous avez trouvé la bonne réponse. Félicitations !");
  
  return 0;
}

