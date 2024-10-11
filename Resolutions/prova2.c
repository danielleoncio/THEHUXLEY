#include <stdio.h>

int fibonacci(int x, int y, int num){
    int r = x + y;

    if(num == x){
        return 1;
    }
    else if(num == y){
        return 1;
    }
    else if (num == r){
        return 1;
    }
    else if(num < r){
        return 0;
    }

   return fibonacci(y,r,num);

}


int ehprimo(int x, int y){
    
    if (x < 2) {
        return 0;
    } 
    if (x == 2){
        return 1;
    }
    if ( x % y == 0 ){
        return 0;
    }
    if (y == 2 ){
        return 1;
    }
        y -= 1;

 return  ehprimo(x, y);
}

void ler(int aim, int ekul){
  int x, reta,reto;

   scanf("%d", &x);

  if (x <= -1){
     if(aim > ekul){
        printf("Aim conquistou o pote de ração!");
        return ;
     }
     else if(ekul > aim){
         printf("Ekul conquistou o pote de ração!");
         return ;
     }
     else if(ekul == aim){
         printf("A ração se perdeu durante o duelo");
         return ;
     }


    return ;
  }

  reta = ehprimo(x, x -1);
  reto = fibonacci(0,1,x);

  if(reta == 1){
    aim++;
  }
  if(reto == 1){
    ekul++;
  }

  ler(aim,ekul);
}

int main(){
   ler(0,0);

return 0;
}