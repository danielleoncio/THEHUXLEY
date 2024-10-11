#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double raiocm,raio;
    double pi=3.14159,area;

     scanf("%lf",&raiocm);
    
     raio = raiocm*0.01;
     area = pi*raio*raio;
    
    printf("Area = %.4lf\n",area);

return 0;
}