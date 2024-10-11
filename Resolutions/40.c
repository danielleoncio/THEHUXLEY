#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

 double c,tip,p;
    
   scanf("%lf",&c);

   tip = c/10;
    p = tip + c;

    printf("%.2lf",p);
    
 return 0;
}