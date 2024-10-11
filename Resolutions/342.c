#include <stdio.h>


int ehdivtres(int x){
    if(x % 3 == 0){
       return 1;
    }
 return 0;
}


void allmult(int x, int y, int aux){
       
    if(x > y && aux != 0){
     printf("%d\n", aux);
     return ;
    }

    else if(x > y && aux == 0){
      printf("O numero nao possui divisores multiplos de 3!\n");
      return ;
    }

    if (x <= y){
        if(y % x == 0){
            if( ehdivtres(x) == 1){
                 aux++;
                 x++;
                 allmult(x, y, aux);
                 return ;
            }
            else{
               x++;
               allmult(x, y, aux);
               return ;
            }
        }
       else{
          x++;
          allmult(x, y, aux);
          return ;
       }
    }

}


int main(){
  int x;
 
    scanf("%d", &x);
    allmult(1, x, 0);

  return 0;
}