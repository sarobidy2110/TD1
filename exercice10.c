/*"VARIABLE:i, N: entier"
DEBUT
  AFFICHER:"entrer la valeur de N"
  LIRE(N)
  POUR i (i=1; i<=N;i<-i+1)
  SI N mod i=0 ALORS
  AFFICHER: la valeur de i
  FIN SI
  FIN POUR
FIN*/
#include <stdio.h>
int main()
{
  int N,i;
  printf("entrer la valeur de N \n");
  scanf("%d", &N);
  for(i=0; i<=N; i++)
  if(N%i==0)
  {
  printf("%d", i);
  }
  return(0);
}
