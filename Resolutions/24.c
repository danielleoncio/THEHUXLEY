#include <stdio.h>

int fator(int x){

  int fatorial;

   if(x == 0){
      fatorial = 1;
      return fatorial;
   }
   else{
      fatorial = x * fator(x-1);
      return fatorial;
   }
}


void ler(){
  int result; 
  int x;

   scanf("%d", &x);
   
    if (x != -1){
     result = fator(x);
     printf("%d\n", result);
     ler();
    }

    else{
      return ;
    }
 }


 int main(){

   ler();

  return 0;
}
