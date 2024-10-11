#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     
  int a, b, c;

     double soma, media;
     
      scanf("%d %d %d", &a, &b, &c);

        soma = a + b + c;
        media = soma/3;

     if (media >= 70.0 && media <= 100.0){
        printf("A media do aluno foi %.2lf e ele foi APROVADO", media);
     }

     else if (media < 70.0 && media >= 40.0){
        printf("A media do aluno foi %.2lf e ele foi FINAL", media);
     }

     else if (media > 0.0 && media < 40.0){
        printf("A media do aluno foi %.2lf e ele foi REPROVADO", media);
     }

     else{
        printf("Media invalida");
     }
     
 return 0;
}