#include <stdio.h>

void hundred(int x) {

    if (x == 0){
      printf ("%d\n", x);
      return;
    }

    else{
       hundred(x-1);
       printf("%d\n", x);
    }
}

int main(){

   hundred(99);

 return 0;
}