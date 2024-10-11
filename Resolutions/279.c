#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

  int id,h;
  double valorh,s;

    scanf("%d %d %lf",&id,&h,&valorh);

    s = h * valorh;
    printf("NUMBER = %d\nSALARY = R$ %.2lf",id,s);
    

 return 0;
}