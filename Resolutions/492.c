#include <stdio.h>

void capsulas(int z, int aux){
   char tam;
   int q;

   if(aux > 7){
     printf("%d\n", z);
     printf("%d\n" , (z*2)/7 );
     return ;
   }

    if(aux <= 7){
      scanf(" %d %c", &q, &tam);
        if(tam == 'p' || tam == 'P' ){
            z = z + (10 * q);
        }
        else if(tam == 'g' || tam == 'G'){
            z = z + (16 * q);
        }
      aux++;
      capsulas(z , aux);
      return ;
    }
  
}


int main(){

   capsulas(0,1);
   
  return 0;
}