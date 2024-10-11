#include <stdio.h>

int main() {
    
  double salario, pa, aumento, novosalario;
    
   scanf("%lf", &salario);
    
    if(salario <= 280.0){
        pa = 20;
        aumento = 0.20 * salario;
        novosalario = salario + aumento;
    }
    
    else if(280.0 < salario && salario <= 700.0){
        pa = 15;
        aumento = 0.15 * salario;
        novosalario = salario + aumento;
    }
    
    else if(700 < salario && salario < 1500.0){
        pa = 10;
        aumento = 0.10 * salario;
        novosalario = salario + aumento;
    }
    
    else{
        pa = 5;
        aumento = 0.05 * salario;
        novosalario = salario + aumento;
    }
    
    printf("%.2lf\n%.0lf\n%.2lf\n%.2lf", salario, pa, aumento, novosalario);

  return 0;
}