/*"VARIABLE:i, N, P: entier"
DEBUT
  AFFICHER:"entrer la valeur de N"
  LIRE(N)
  POUR i (i=1; i<=N;i<-i+1)
  P<-P*i
  FIN POUR
  AFFICHER: P
FIN*/
#include <stdio.h>
int main()
{
  int N, i, P;
  printf("entrer la valeur de N \n");
  scanf("%d", &N);
  for(i=0; i<=N; i++)
  {
  P=P*i;
  }
  printf("%d",P);
  return 0;
}
