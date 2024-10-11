#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int a, b, c;

     scanf("%d %d %d", &a, &b, &c);

     if (a == b && b == c){
        printf("1");
     }

     else if (a != b && a != c && b != c){
        printf("2");
     }

     
     else if ((a == b && b != c) || (a == c && c != b) || (b == c && a != c)){
       printf("3");
     }
     

  return 0;
}