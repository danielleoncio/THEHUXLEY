#include <stdio.h>

int main() {
    
 double salario, comprometido, limite, margem;
    
   scanf("%lf %lf", &salario, &comprometido);
   limite = 0.30 * salario;
    
    if(comprometido >= limite){
        margem = 0.00;
    }

    else{ 
        margem = limite - comprometido;
    }
    
    printf("%.2lf", margem);

 return 0;
}