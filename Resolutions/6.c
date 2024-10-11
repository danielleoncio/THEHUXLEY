
#include <stdio.h>
#include <math.h>

int main(){

  double a, b, c, delta, raiz3, raiz1, raiz2;

   scanf("%lf %lf %lf", &a, &b, &c);
      delta = b * b - (4 * a * c);

        if(a == 0){
            printf("NEESG");
        }

        else if (delta < 0){
          printf("NRR");
        }

        else if(delta >= 0){

          raiz3 = pow(delta,0.5);
          raiz1 = ((-1) * (b) - raiz3)/(2*a);
          raiz2 = ((-1) * (b) + raiz3)/(2*a);
          if (raiz1 > raiz2) {
               printf("%.2lf\n%.2lf", raiz1, raiz2);
            }
          else{
               printf("%.2lf\n%.2lf", raiz2, raiz1);
            }
        }
        
  return 0;
}