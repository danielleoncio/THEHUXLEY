#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
  int idade;

  scanf("%d", &idade);

       if (idade >= 18 && idade <= 65) {
            printf("eleitor obrigatorio");      
       }

       else if (idade > 65){
            printf("eleitor facultativo");
       }

       else if (idade <= 18 && idade >= 16){
            printf("eleitor facultativo");
       }

       else{
           printf("nao eleitor");
       }
       
 return 0;
}

