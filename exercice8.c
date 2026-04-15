/*"VARIABLE: i, N: entier"
DEBUT
  AFFICHER:"entrer la valeur de n"
  LIRE(N)
  POUR i<-1, i<=N, i<-i+1
  AFFICHER: la valeur de i
  FIN POUR
FIN*/
#include <stdio.h>
int main()
{
  int i, N;
  printf("entrer la valeur de N \n");
  scanf("%d", &N);
  for (i=1; i<=N;i++)
  {
  printf("%d", i);
  }
  return(0);
}
