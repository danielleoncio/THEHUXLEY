#include <stdio.h>
#include <string.h>

#define MAX 9999

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
  if (quantosinoarray(notas[i], notas, z, 0, 0) > cntg)
  {
    top = notas[i];
    cntg = quantosinoarray(notas[i], notas, z, 0, 0);
  }
  return qualtopdoarray(notas, z, ++i, top, cntg);
}




double corrigir(char gabarito[], char  resposta[], int z, int i, double cntg){
    if(i == z){
      return cntg;
    }
    if (gabarito[i] == resposta[i] && gabarito[i] != '\0'){
      cntg++;
    }
   return corrigir(gabarito, resposta, z, ++i, cntg);
}


void rodar(char gabarito[], int alunos, double notas[], int i, double aprovados){
  int x;
  scanf("%d", &x);
  getchar();
    if (x == 9999){
        printf("%.1lf%%\n", 100*(aprovados/alunos));
        printf("%.1lf\n", qualtopdoarray(notas, alunos, 0, 0, 0));
      return;
    }
  else{
    char resposta[11];
    fgets(resposta, 11, stdin);
    resposta[strcspn(resposta, "\n")] = '\0';

    alunos += 1;

    notas[i] = corrigir(gabarito, resposta, 11, 0, 0);

    if (notas[i] >= 6.0){
      aprovados += 1;
    }
    
    printf("%d %.1lf\n", x, notas[i]);
    return rodar(gabarito, alunos, notas, ++i, aprovados);
  }
}


int main(){
   char gabarito[11];
   double notas[MAX];
   
   // Lê o gabarito
    fgets(gabarito, sizeof(gabarito), stdin);

   // Remove o \n da string
    gabarito[strcspn(gabarito, "\n")] = '\0';

   //printa string
   //printf("%s\n", gabarito);
   
   //Lê a resposta
    //fgets(resposta, sizeof(resposta), stdin);

   //remove o \n da resposta
   //resposta[strcspn(resposta, "\n")] = '\0';


   //if(strcmp(gabarito, resposta) == 0){
  
   rodar(gabarito, 0, notas, 0, 0);

  return 0;
}