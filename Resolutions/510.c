#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
   
 bool m, i, entrada;

   scanf("%d %d", &m, &i);

   if (m == 1 || i == 1) {
      entrada = true;
      printf("%d", entrada);
    }

   else if (m == 0 && i == 0){
      entrada = false;
      printf("%d", entrada );
    }
    
  return 0;
}