/*"VARIABLE:a, b, c, T: entier"
DEBUT:
  AFFICHER:"entrer la valeur de a"
  LIRE(a)
  AFFICHER:"entrer la valeur de b"
  LIRE(b)
  AFFICHER:"entrer la valeud de c"
  LIRE(c)
  T<-a
  a<-b
  b<-T
  AFFICHER: la valeur de a, b, c
FIN*/
#include<stdio.h>
int main()
{
  int a, b, c, T;
  printf("entrer la valeur de a\n");
  scanf("%d", &a);
  printf("entrer la valeur de b\n");
  scanf("%d", &b);
  printf("entrer la valeur de c\n");
  scanf("%d", &c);
  T=a;
  a=b;
  b=T;
  printf("a=%d b=%d c=%d\n", a, b, c);
  return(0);
}
