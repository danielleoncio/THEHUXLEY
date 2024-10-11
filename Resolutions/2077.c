#include <stdio.h>

int ehtriangular(int j, int x){

    int y,z;
      y = x + 1;
      z = x + 2;

        if( x*y*z < j ){
          x++;
          return ehtriangular(j, x);
        }

        if (x*y*z == j){
          return x;
        }

        if (x*y*z != j){
          return 0;
        }

 return 0;
}


int main(){

   int num, ret;

   scanf("%d", &num);
   ret = ehtriangular(num, 1);

   if(ret != 0){
    printf("%d * %d * %d = %d\nVerdadeiro", ret, ret+1, ret+2, num);
   }

   else{
    printf("Falso");
   }

 return 0;
}