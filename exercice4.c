/*"VARIABLE: n1, n2, S, M"
DEBUT
  AFFICHER:"entrer la valeur de n1"
  LIRE(n1)
  AFFICHER:"entrer la valeur de n2"
  LIRE(n2)
  S=n1+n2
  AFFICHER: La somme
  M=S/2
  AFFICHER: La moyenne
FIN */
#include<stdio.h>
int main()
{
  float n1, n2, S, M;
  printf("entrer la valeur de n1\n");
  scanf("%f", &n1);
  printf("entrer la valeur de n2\n");
  scanf("%f", &n2);
  S= n1+ n2;
  M= S/2;
  printf("S=%f M=%f\n", S, M);
  return(0);
}
