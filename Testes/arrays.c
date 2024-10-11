#include <stdio.h>
#include <string.h>


int quantosinoarray(double nota,double notas[], int z, int i, int cntg){//cntg start 0
  if(i == z){
    return cntg;
  }
  if(notas[i] == nota){
   cntg++;
  }
  return quantosinoarray(nota, notas, z, ++i, cntg);

}

double qualtopdoarray(double notas[], int z, int i, double top, int cntg){
  if(i == z){
    return top;
  }
  if (quantosinoarray(notas[i], notas, z, 0, 0) > cntg){
    top = notas[i];
    cntg = quantosinoarray(notas[i], notas, z, 0, 0);
  }
  return qualtopdoarray(notas, z, ++i, top, cntg);
}

int main(){
 double notas[10] = {4, 5, 6, 8, 8, 8, 3, 3, 10, 10};

  printf("%.1lf", qualtopdoarray(notas, 10, 0, 0, 0)); 

    return 0;
}