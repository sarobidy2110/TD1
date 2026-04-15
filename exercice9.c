/*"VARIABLE: i, N:entier"
DEBUT
  AFFICHER:"entrer la valeur de N"
  LIRE(N)
  POUR i<-2, i<=N, i<-i+2
  AFFICHER: i
  FIN POUR
FIN*/
#include <stdio.h>
int main()
{
  int i, N;
  printf("entrer la valeur de N \n");
  scanf("%d", &N);
  for (i=2; i<=N;i=i+2)
  {
  printf("%d", i);
  }
  return(0);
}
