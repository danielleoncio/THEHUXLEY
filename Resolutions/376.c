#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     
  int livros, alunos;
  double par;

    scanf("%d %d", &livros, &alunos);

     par = (double)livros / alunos;

       if (par >= 1.0 / 8) {
          printf("A");
       }

       else if (par <= 1.0 / 9 && par >= 1.0/12){
          printf("B");
       }
    
       else if (par <= 1.0 / 13 && par >= 1.0 / 18){
         printf("C");
       }
    
    else {
        printf("D");
    }

 return 0;
}