#include <stdio.h>

int main() {
  int cumpridos, passados;
  double feitura, cpp;
    
    scanf("%d %d", &passados, &cumpridos);
    
    cpp = (double)cumpridos / (double)passados; 
    feitura = cpp * 100;
    
    printf("%.2lf%% ", feitura);
    
    if(feitura < 20.00){
           printf("4.40%% Pessimo");
    }
    
    else if(20.00 <= feitura && feitura < 40.00){
           printf("31.65%% Ruim");
    }
    
    else if(40.00 <= feitura && feitura < 60.00){
           printf("56.82%% Bom");
    }
    
    else if(60.00 <= feitura && feitura < 80.00){
           printf("80.00%% Muito Bom");
    }
    
    else {
           printf("94.00%% Excelente");
    }
    
 return 0;
}