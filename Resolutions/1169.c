#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     
     double level, potencia, produto, aux;

       scanf("%lf", &level);

     if (1 <= level && level <= 20){
        produto = level * level * level;

        potencia = produto + 20;

        printf("Potencia de : %.0lf W", potencia);
     }

     else if (21 <= level && level <= 40){
        aux = level - 10;

        produto = aux * aux;

        potencia = produto + 8000;

        printf("Potencia de : %.0lf W", potencia);
     }
     
     
     else if (41 <= level && level <= 60){
        produto = 5 * level;

        potencia = produto + 9000;

        printf("Potencia de : %.0lf W", potencia);
     }

     else if (61 <= level && level <= 80){
        produto = 2 * level;

        potencia = produto + 9300;

        printf("Potencia de : %.0lf W", potencia);
     }
     
     else if (81 <= level && level <= 100){
        produto = level;

        potencia = produto + 9500;

        printf("Potencia de : %.0lf W", potencia);
     }

 return 0;
}