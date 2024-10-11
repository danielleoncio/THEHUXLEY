#include <stdio.h>

int main(){
    
   int consumo, conta;

    scanf("%d", &consumo);

       if (consumo <= 10){
           conta = 7;
       }
       else if (10 < consumo && consumo < 31){
            conta = 7 + (consumo - 10) * 1;
        }

       else if (30 < consumo && consumo < 101){
            conta = 7 + 20 + (consumo - 30) * 2;
        }      

       else if (100 < consumo){
            conta = 7 + 20 + 140 + (consumo - 100) * 5;
        }


   printf("%d", conta);
   
  return 0;
}