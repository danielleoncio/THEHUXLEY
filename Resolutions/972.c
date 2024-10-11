#include <stdio.h>


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
        ehprimo(x, y);

}


void ler(){
    
  int x, ret;

   scanf("%d", &x);

    if (x <= -1){
       return ;
    }

   ret = ehprimo(x, x -1);
   printf("%d\n", ret);
   ler();
  
}



int main(){

   ler();

 return 0;
}