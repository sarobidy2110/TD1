/*"VARIBLE: a,b: entier"
DEBUT:
  AFFICHER:"entrer la valeur de a"
  LIRE(a)
  AFFICHER:"entrer la valeur de b"
  LIRE(b)
  SI(a>0 et b>0) ou (a<0 et b<0) ALORS
  AFFICHER:le produit et positif
  SINON 
  AFFICHER:le produit est negatif
  FIN SI 
FIN*/
#include<stdio.h>
int main()
{
  int a,b;
  printf("entrer la valeur de a \n");
  scanf("%d", &a);
  printf("entrer la valeur de b \n");
  scanf("%d", &b);
  if((a>0 && b>0) || (a<0 && b<0))
  {
  printf("le produit est positif \n");
  }
  else 
  {
  printf("le produit est negatif\n");
  }
  return(0);
}
