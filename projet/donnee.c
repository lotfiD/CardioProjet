#include <stdio.h>
#include <stdlib.h>
#include "donnee.h"
#include "action.h"
void execution (int *tab, int *n){
 int i = 0;
    char *token;
    char Fsnl[10000];
    FILE * Fpointer;
    Fpointer = fopen("bacon.csv","r"); //execution de fichier csv
     while (fgets(Fsnl ,10000,Fpointer)!= NULL)
        {

       token = strtok(Fsnl, ";"); // enlever les ";" de notre chaine de caractere


  while( token != NULL ) {

      tab[i]=atoi(token); // conversion d'une chaine de caractere à un tableau " tab " de type entier
      *n = *n+1; // La taille de tableau " tab "

      token = strtok(NULL, ";"); // ajouter les ";" dans notre chaine de caractere
      i++;
   }
   }
 }
void manipulation (int tab[],battm T[], int n ,int *n2 )
{
	int i ,j=0 ;
	for (i=0;i<n;i=i+2)
{
   T[j].tmp=tab[i]; // Remplissage de la partie de temps dans notre tableau de structure
 j++;
 *n2=*n2+1 ; // La taille de notre tableau de structure
}
j=0 ;
	for (i=1;i<n;i=i+2)
{
   T[j].pouls=tab[i]; // Remplissage de la partie de pouls dans notre tableau de structure
 j++;
}
}
