#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double A,B,y,j,k,z;

  scanf("%lf",&A);
  scanf("%lf",&B);
  
  y = A*3.5;
  j = B*7.5;
  k = y+j;
  z = k/11;
  
  printf("MEDIA = %.5lf",z);

return 0;
}