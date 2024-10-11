#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int h, q;
      bool b;

      scanf("%d %d", &h, &q);

       if ( h == 0 && q == 1){
          b = true;

          printf("%d", b);
       }

        else if ((h == 1) || (h == 0 && q == 0)){      
          b = false;

          printf("%d", b);
        }


 return 0;
}