#include <stdio.h>


void ler(int n, double num, int aux){
  char op;
  double adscm;

     if(aux == n){
        printf("Valor final: %.2lf\n", num);
        return;
    }
     else{
       scanf(" %c %lf", &op, &adscm);

       if(op == 'A'){
        num += adscm;
       }
       else if(op == 'D'){
        num = num/adscm;
       }
       else if(op == 'S'){
        num -= adscm;
       }
       else if(op == 'C'){
        num = adscm;
       }
       else if(op == 'M'){
        num = num*adscm;
       }
    }
       aux++;
       ler(n, num, aux);
}



int main(){
   int n;
   double num;

   scanf("%d %lf", &n, &num);
   ler(n, num, 0);


 return 0;
}