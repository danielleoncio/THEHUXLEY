#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

 double f,c,i;
    
   scanf("%lf",&f);
   
    i = f - 32;
    c = i / 1.8;

    printf("%.2lf",c);

 return 0;
}