/*"VARIABLE: A, B, C, delta, x1, x2, x: entier"
DEBUT:
  AFFICHER:"entrer la valeur de A"
  LIRE(A)
  AFFICHER:"entrer la valeur de B"
  LIRE(B)
  AFFICHER:"entrer la valeur de C"
  LIRE(C)
 delta= (B*B)-(sqrt(delta)))/(2*A)
 SI (delta>0) ALORS
  x1=(-B-(sqrt(delta)))/(2*A)
  x2=(-B-(sqrt(delta)))/(2*A)
  AFFICHER: la valeur de x1, x2
  SINON SI (delta=0)
  AFFICHER: La valeur de x= -B/(2*A)
  SINON 
  AFFICHER: Pas de solution 
  FIN SI
FIN*/
#include<stdio.h>
#include<math.h>
int main()
{
  float A, B, C, delta, x1, x2,x ;
  printf("entrer la valeur de A\n");
  scanf("%f", &A);
  printf("entrer la valeur de B\n");
  scanf("%f", &B);
  printf("entrer la valeur de C\n");
  scanf("%f", &C);
  delta=(B*B)-(4*A*C);
  if(delta>0)
  {
  x1=(-B-(sqrt(delta)))/(2*A);
  x1=(-B+(sqrt(delta)))/(2*A);
  printf("%f %f\n" ,x1, x2); 
  }
  else if(delta==0) 
  {
  printf("%f\n", x=-B/(2*A));
  }
  else
  {
  printf("pas de solution");
  }
 return(0);
}
  
  
  
  
  
  
  
  
