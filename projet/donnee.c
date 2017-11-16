#include <stdio.h>
#include <stdlib.h>
#include "donnee.h"
typedef 
struct battm{
	int pouls ;
	int tmp ;
}battm;
void execution (int tab[], int *n){
 int i = 0;
    char *token;
    char Fsnl[10000];
    FILE * Fpointer;
    Fpointer = fopen("bacon.csv","r");
     while (fgets(Fsnl ,10000,Fpointer)!= NULL)
        {
    
       token = strtok(Fsnl, ";");

    
  while( token != NULL ) {

      tab[i]=atoi(token);
      *n = *n+1;
      token = strtok(NULL, ";");
      i++;
   } 
   }
 }
void manipulation (int tab[], int n)
{
	int i ,j=0 ;
	battm T[5000] ;
	for (i=0;i<n;i=i+2)
{  T[j].pouls=tab[i+1] ;
   T[j].tmp=tab[i];
printf ("%d \t",T[j].tmp);

j++ ;
}
}
