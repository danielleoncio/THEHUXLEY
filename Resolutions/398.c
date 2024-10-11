#include <stdio.h>

int quantosmultiplos(int x, int y, int i, int cntg){//cntg start 0
    if(i == 50){
        return cntg;
    }
    if((i % x == 0) && (i % y == 0)){
        cntg++;
    }
  return quantosmultiplos(x, y, i + 1, cntg);
}



int main(){
    int a, b, c;
    scanf("%d", &a );
    scanf("%d", &b );
    c = quantosmultiplos(a, b, 1, 0);
    printf("%d\n", c);

  return 0;
}