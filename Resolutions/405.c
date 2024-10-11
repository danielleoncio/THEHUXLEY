#include <stdio.h>


int ehpar(int x){

    if(x % 2 == 0){
     return 1;
    }

    else{
     return 0;    
    }
}


int allpar(int x, int soma){
   int comp;
   int resto;
   int quo ;
     quo = x/10;
     resto = x % 10;
   
        if (resto != 0 && quo == 0) {
            comp = ehpar(resto);
           if (comp == 1) {
             soma++;
               return soma;
            }
          return soma;
        }

        if (resto == 0 && quo < 10){
         comp = ehpar(resto);
              if (comp == 1) {
                  soma++;
              }
         comp = ehpar(quo);
              if (comp == 1) {
                soma ++;
                return soma;
              }
          return soma;
        }

        if(resto != 0 && (quo > 0 && quo < 10) ){
  
           comp = ehpar(quo);
              if (comp == 1) {
                soma++;
              }
           comp = ehpar(resto);
              if (comp == 1) {
                soma++;
              }
          return soma;
        }

        if (quo >= 10){
          comp = ehpar(resto);
            if(comp == 1){
                soma++;
            }
        }
 return allpar(quo, soma);
}


int main(){

  int x, ret;

    scanf("%d", &x);

    ret = allpar(x , 0);

    printf("%d", ret);

  return 0;
}