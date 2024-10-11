#include <stdio.h>

int ehpar(int x){

    if(x % 2 == 0){
     return 1;
    }
    else{
     return 0;    
    }
}

int eng(int x, int y, int aux){

    int nac = x;
    int resto = x % 5;
    int comp;

    comp = ehpar(aux);

    if (aux < y && comp == 1){
       nac += 3;
       aux++;
        return eng(nac , y, aux);
    }
    if(aux < y && comp == 0){
       nac += resto;
       aux++;
        return eng(nac, y, aux);
    }
    if (aux == y){
        return nac;
    }

  return nac; 
}

int main(){

   int N, T, seq;

    scanf("%d %d", &N, &T);
    seq = eng(N, T, 0);
    printf("%d\n", seq);

  return 0;
}