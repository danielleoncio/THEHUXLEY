#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
   int produto, quantidade;
   double custo1, custo2;

   scanf("%d", &produto);

   if(produto == 1){
    
       scanf("%d", &quantidade);
        custo1 = quantidade * 5.3;
        
          if (custo1 >= 40  || quantidade >= 15) {
              custo2 = custo1 * 0.85;
              printf("R$ %.2lf", custo2);
           }
           
          else{
              printf("R$ %.2lf", custo1);
           }
    }

    else if(produto == 2){

         scanf("%d", &quantidade);
         custo1 = quantidade * 6.0;
        
          if (custo1 >= 40  || quantidade >= 15) {
              custo2 = custo1 * 0.85;
              printf("R$ %.2lf", custo2);
          }
           
          else{
              printf("R$ %.2lf", custo1);
          }

    }

    else if(produto == 3){

         scanf("%d", &quantidade);
         custo1 = quantidade * 3.2;
        
          if (custo1 >= 40  || quantidade >= 15){
              custo2 = custo1 * 0.85;
              printf("R$ %.2lf", custo2);
           }
           
          else {
              printf("R$ %.2lf", custo1);
           }

    }

    else if(produto == 4){

         scanf("%d", &quantidade);
         custo1 = quantidade * 2.5;
        
          if (custo1 >= 40  || quantidade >= 15) {
              custo2 = custo1 * 0.85;
              printf("R$ %.2lf", custo2);
           }
           
          else{
              printf("R$ %.2lf", custo1);
           }

    }

 return 0;
}
