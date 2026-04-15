/*"VARIABLE: N, i, fact: entier"
DEBUT
  AFFICHER:"entrer la valeur de N"
  LIRE(N)
  POUR i (i=1; i<=N;i<-i+1)
  fact<- fact*i
  AFFICHER: i
  FIN POUR
FIN*/
#include <stdio.h>
int main()
{
  int N, i, fact;
  printf("entrer la valeur de N \n");
  scanf("%d", &N);
  for (i=2; i<=N;i=i+2)
  {
  fact=fact*i;
  }
  printf("%d", fact);
  return(0);
}
