#include <stdio.h>

int fatorial(int x){

   if(x == 0){
      return 1;
   }
   else{
      return x * fatorial(x - 1);
   }

}


int main(){

   int n, result;
   scanf("%d", &n);
   result = fatorial(n);
   printf("%d", result);
   
  return 0;
}