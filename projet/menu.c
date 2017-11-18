#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include "action.h"
#include "donnee.h"

int affichage_menu () // affichage de menu avec le choix 
{ int a ;
printf ("Pour afficher les donnees dans l'ordre du fichier csv tapez 1 \n\n");
printf ("Pour afficher les donnees dans l'ordre croissant selon le temps tapez 2 \n\n");
printf ("Pour afficher les donnees dans l'ordre decroissant selon le temps tapez 3 \n\n");
printf ("Pour afficher les donnees dans l'ordre croissant selon le pouls tapez 4 \n\n");
printf ("Pour afficher les donnees dans l'ordre croissant selon le temps tapez 5 \n\n");
printf ("Pour rechercher et afficher les donnees dans un temps particulier tapez 6 \n\n") ;
printf ("Pour afficher la moyenne de pouls dans une plage de temps tapez 7 \n\n") ; 
printf ("Pour afficher le nombre de ligne actuellement en memoire tapez 8 \n\n") ;
printf ("Pour afficher le maximaum de pouls tapez 9 \n\n") ; 
printf ("Pour afficher le minimaum de pouls tapez 10 \n\n ");
printf ("tapez 0 pour quitter \n\n");
}
void affichage_particulier (battm T[], int n2 ) // Affichage de choix d'utilisateur 
{ int j , a ;
scanf ("%d",&a);	 //le choix d'utlisiteur selon le menu 
printf ("\n");
do{

if (a==1) 
{for (j=0;j<n2;j++){

printf ("%d \t",T[j].tmp);  // affichage du 1 er menu 
printf ("%d \n",T[j].pouls);
}
}
else if (a==2){ 
croi_temps (T,n2);	// affichage du 2 eme menu 
}
else if (a==3)
decroiss_temps(T,n2); // affichage du 3 eme menu 
else if (a==4)
croi_pouls(T,n2) ; //affichage du 4 eme menu 
else if (a==5)
decroiss_pouls(T,n2); // affichage du 5 eme menu 
else if (a==6)
temps_particulier (T,n2); //affichage du 6 eme menu 
else if (a==7)
temps_donnee (T,n2); // affichage du 7 eme menu 
else if (a==8)
nombre_de_donnee(n2); // affichage du 8 eme menu
else if (a==9)
pouls_max (T,n2); // affichage du 9 eme choix 
else if (a==10)
pouls_min(T,n2); // affichage du 10 eme choix
scanf("%d",&a);
}while (a!=0);{

printf ("bye byeee !!!");}


}
