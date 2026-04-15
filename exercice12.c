/*"VARIABLE:i, N, S: entier"
DEBUT
  AFFICHER:"entrer la valeur de N"
  LIRE(N)
  POUR i (i=1; i<=N;i<-i+1)
  S<-0
  S<-S+i
  FIN POUR
  AFFICHER: la valeur de S
FIN*/
#include <stdio.h>
int main()
{
  int i, N, S;
  printf("entrer la valeur de N \n");
  scanf("%d", &N);
  for (i=1; i<=N;i++)
  {
  S=S+i;
  }
  printf("%d", S);
  return(0);
}
