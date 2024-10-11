#include <stdio.h>

int main() {

  int pontos;
  double maxima, veiculo, multa;
    
    scanf("%lf %lf", &maxima, &veiculo);
    
  double razao = veiculo / maxima;
    
    if (razao <= 1.0) {
        pontos = 0;
        multa = 0.00; } 
        else if (razao <= 1.20) {
        pontos = 4;
        multa = 85.13;
    } 

    else if (razao <= 1.50) {
        pontos = 5;
        multa = 127.69;
    } 

    else {
        pontos = 7;
        multa = 574.62;
    }

    printf("%.2lf\n%d", multa, pontos);

 return 0;
}