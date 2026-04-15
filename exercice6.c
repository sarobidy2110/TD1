/*"VARIABLE: n1, n2, M:reel
             c1, c2: entier "
DEBUT:
  AFFICHER:"entrer la valeur de n1"
  LIRE(n1)
  AFFICHER:"entrer la valeur de n2"
  LIRE(n2)
  AFFICHER:"entrer la valeur de c1"
  LIRE(c1)
  AFFICHER:"entrer la valeur de c2"
  LIRE(c2)
  M<-((n1*c1)+(n2*c2))/(a+b)
  AFFICHER:M
FIN*/
#include <stdio.h>
int main()
{
  int c1, c2;
  float n1, n2, M;
  printf("entrer la valeur de n1 \n");
  scanf("%f", &n1);
  printf("entrer la valeur de n2 \n");
  scanf("%f", &n2);
  printf("entrer la valeur de c1 \n");
  scanf("%d", &c1);
  printf("entrer la valeur de c2 \n");
  scanf("%d", &c2);
  M=((n1*c1)+(n2*c2))/(c1+c2);
  printf("%f", M);
  return(0);
}
