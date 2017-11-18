#ifndef H_MASTRUCTURE
#define H_MASTRUCTURE
// declaration de notre structure
typedef struct battm
{ 
 
  int tmp;
  int pouls;

}battm;

#endif
void execution (int tab[], int *n); //execution de notre fichier csv et mettre son contenu dans un tableau
void manipulation (int tab[],battm T[], int n ,int *n2 ); //Mettre notre données dans un tableau de structure 

