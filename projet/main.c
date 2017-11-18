#include <stdio.h>
#include <stdlib.h>
#include "donnee.h"
#include "action.h"
#include "menu.h"


int main ()
{ int   n2=0 , n=0  ;  
 battm T[500] ;
  int tab[500] ;
  int menu ; 
  menu = affichage_menu ();
  execution (&tab,&n);
  manipulation (tab,T,n ,&n2 );
  affichage_particulier (T,n2 );
  
 
	return 0;
}

