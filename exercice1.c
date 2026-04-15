/*"Variable: a:entier"
DEBUT 
  AFFICHER "entrer la valeur de a"
  LIRE(a)
  SI (a>0) ALORS 
  AFICHER: a positif
  SINON 
  AFFICHER: a negatif 
  FIN SI 
FIN */
#include<stdio.h>
int main()
{
  int a;
  printf("entrer la valeur de a\n");
  scanf("%d", &a);
  if(a>0)
  {
  printf("a est positif\n");
  }
  else 
  {
  printf("a est negatif\n");
  }
  return(0);
}
