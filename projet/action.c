#include <stdio.h>
#include <stdlib.h>
#include "action.h"
#include "donnee.h"

void croi_temps(battm T[] , int n2) // trier les donn�es en ordre croissant selon le temps
{int j , x , u , k;

for (k=0;k<n2;k++){  //Tri de bulle
for (j=0;j<n2-1;j++)
{if (T[j].tmp>T[j+1].tmp)
{
	x=T[j].tmp ;
	T[j].tmp=T[j+1].tmp ;
	T[j+1].tmp=x ;

	u=T[j].pouls ;
	T[j].pouls=T[j+1].pouls ;
	T[j+1].pouls=u ;
}
}
}
for (j=0;j<n2;j++)
{

printf ("temps = %d \t",T[j].tmp);
printf ("pouls = %d \n",T[j].pouls);
}
}
void temps_donnee (battm T[],int n2) // calculer la moyenne de pouls de une plage de temps donn�e
{ int a ,b , s=0 , h=0 , j  ;
float moy ; // d�claration de la moyenne de type r�el
printf ("entrer une plage de temps \n ");
scanf ("%d%d",&a,&b);
for (j=0;j<n2;j++)
{if (T[j].tmp>=a&&T[j].tmp<=b)
{s=s+T[j].pouls ; // calcul de pouls entre la plage de temps
h=h+1 ; // calcul de nombre de case entre la plage de temps
}
}
moy=s/h ; // calcul de la moyenne de pouls entre la plage de temps
printf ("la moyenne de pouls entre %d et %d est : %f ",a,b,moy); // affichage de la moyenne de pouls
}

void temps_particulier (battm T[],int n2)// affichage de donn�e dans un temps particulier
{ int x , j ;
printf ("donner le temps particulier \n") ;
scanf ("%d",&x);
for(j=0;j<n2;j++)
{if(T[j].tmp==x)
printf ("le pouls pour le temps particulier %d est %d",T[j].tmp,T[j].pouls);
}
}


void decroiss_temps (battm T[],int n2) // Trier  les donn�es en ordre d�croissant selon le temps
{
int j , x , u , k;

for (k=0;k<n2;k++){  //Tri de bulle
for (j=0;j<n2-1;j++)
{if (T[j].tmp<T[j+1].tmp)
{
	x=T[j].tmp ;
	T[j].tmp=T[j+1].tmp ;
	T[j+1].tmp=x ;

	u=T[j].pouls ;
	T[j].pouls=T[j+1].pouls ;
	T[j+1].pouls=u ;
}
}
}
for (j=0;j<n2;j++)
{

printf ("temps = %d \t",T[j].tmp);
printf ("pouls = %d \n",T[j].pouls);
}
}
void croi_pouls (battm T[] , int n2) // Trier les donn�es en ordre croissant selon le pouls
{
int j , x , u , k;

for (k=0;k<n2;k++){  //Tri de bulle
for (j=0;j<n2-1;j++)
{if (T[j].pouls>T[j+1].pouls)
{
	x=T[j].tmp ;
	T[j].tmp=T[j+1].tmp ;
	T[j+1].tmp=x ;

	u=T[j].pouls ;
	T[j].pouls=T[j+1].pouls ;
	T[j+1].pouls=u ;
}
}
}
for (j=0;j<n2;j++)
{

printf ("pouls = %d \t",T[j].pouls);
printf ("temps = %d \n",T[j].tmp);
}
}

void decroiss_pouls (battm T[] , int n2) // Trier les donn�es en ordre d�croissant selon le pouls
{
int j , x , u , k;

for (k=0;k<n2;k++){  //Tri de bulle
for (j=0;j<n2-1;j++)
{if (T[j].pouls<T[j+1].pouls)
{
	x=T[j].tmp ;
	T[j].tmp=T[j+1].tmp ;
	T[j+1].tmp=x ;

	u=T[j].pouls ;
	T[j].pouls=T[j+1].pouls ;
	T[j+1].pouls=u ;
}
}
}
for (j=0;j<n2;j++)
{

printf ("pouls = %d \t",T[j].pouls);
printf ("temps = %d \n",T[j].tmp);
}
}
void pouls_max (battm T[], int n2) // trouver le maximaum dans les donn�es de pouls
{ int j , max  ; // initialisation de max
max = T[0].pouls ;
	for (j=0;j<n2;j++)
	{if (max<T[j].pouls)
	max=T[j].pouls ;  // trouver le maximaum
	}
	printf ("le maximum est : %d \n",max); // affichage de le maximum
}

void pouls_min (battm T[], int n2) // trouver le minimaum dans les donn�es de pouls
{ int j , min  ; // initialisation de min
min = T[0].pouls ;
	for (j=0;j<n2;j++)
	{if (min>T[j].pouls)
	min=T[j].pouls ;  // trouver le minimum
	}
	printf ("le minimum est : %d \n",min); // affichage de le minimum
}

void nombre_de_donnee (int n2) // affichage de nombre de donn�es actuellement en m�moire
{printf ("\n le nombre de lignes de donn�es actuellement en memoire est %d",n2);
}



