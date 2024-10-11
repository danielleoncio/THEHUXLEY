#include <stdio.h>


int mdc(int x, int y){
   int resto;
   if(x > y) {
    resto = x % y;
      if (x % y == 0){
       return y;
      }
      else{
       return mdc(y,resto);
      }
   }
   else {
    resto = y % x;
      if (y % x == 0){
       return x;
      }
      else{
       return mdc(x,resto);
      }
   }
}

int rep(int v, int aux){
    int x, y, aswer;
    if (aux < v)
    {
      
      scanf("%d %d", &x, &y);
      aswer = mdc(x,y);
      printf("MDC(%d,%d) = %d\n", x, y, aswer);
      return rep(v,aux +1 );
    }
    else {
      return 0;
    }

}

int main(){
  int time;
  scanf("%d", &time);
  rep(time, 0);


 return 0;
}


