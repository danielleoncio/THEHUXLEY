#include <stdio.h>

int mdc(int x, int y){

 int resto;

   if(x > y) {
      resto = x % y;
        if (x % y == 0){
           return y;
        }
        else{
           return mdc(y,resto);
        }
    }
   else {
       resto = y % x;
        if (y % x == 0){
           return x;
        }
        else{
           return mdc(x,resto);
        }
   }
}


int main(){

  int num1, num2, maxdc;

   scanf("%d %d", &num1, &num2);

   maxdc = mdc(num1, num2);

   printf("%d", maxdc);
    
 return 0;
}