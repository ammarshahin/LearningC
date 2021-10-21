#include <stdio.h>
#include <math.h>

int main(){
   int a,b,c,d; /* Coefficients are assumed to be integers */
   double root1,root2; /* roots may not be real */
   printf("Enter a, b and c where (a*x*x + b*x + c = 0): "); /* get the Coefficients from user */
   scanf("%d%d%d", &a, &b, &c);

   d = b*b - 4*a*c; /* Discriminant (b*b-4*a*c) decides the nature of roots */

   if (d<0){ //complex roots
     printf("First root = %lf + j%lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
     printf("Second root = %lf - j%lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
   }else{ //real roots
      root1 = (-b + sqrt(d))/(2*a);
      root2 = (-b - sqrt(d))/(2*a);
      printf("First root = %lf\n", root1);
      printf("Second root = %lf\n", root2);
   }
   return 0;
}
