/*"VARIABLE:a, b, c, MAX: entier"
DEBUT
  AFFICHER:"entrer la valeur de a"
  LIRE(a)
  AFFICHER:"entrer la valeur de b"
  LIRE(b)
  AFFICHER:"entrer la valeur de c"
  LIRE(c)
  MAX<-a
  SI a<b ALORS
  MAX<-b
  SI a<c ALORS
  MAX<-c
  FIN SI
  AFFICHER: MAX
  FIN*/
#include <stdio.h>
int main()
{
  int a, b, c, MAX;
  printf("entrer la valeur de a \n");
  scanf("%d", &a);
  printf("entrer la valeur de b \n");
  scanf("%d", &b);
  printf("entrer la valeur de c \n");
  scanf("%d", &c);
  MAX=a;
  if(a<b)
  {
  MAX=b;
  }
  if(b<c)
  {
  MAX=c;
  }
  printf("%d", MAX);
  return(0);
}
  
