#include <stdio.h>

int main() {
    
   double litros, pay;
   char combustivel;
   
   scanf("%lf %c", &litros, &combustivel);
   
    if(combustivel == 'A'){
       if(litros <= 20.0){
          pay = 1.90 * litros * 0.97;
       }
       else{
           pay = 1.90 * litros * 0.95;
       }
    }
   
    else if(combustivel == 'G'){
       if(litros <= 20.0){
          pay = 2.50 * litros * 0.96;
       }
       else{
           pay = 2.50 * litros * 0.94;
       }
    }
   
    else if(combustivel == 'D'){
       if(litros <= 25.0){
          pay = 1.66 * litros;
       }
       else{
           pay = 1.66 * litros * 0.96;
       }
    }
   
   
        printf("R$ %.2lf", pay);
   

 return 0;
}