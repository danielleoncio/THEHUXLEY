#include <stdio.h>

void rep(int aux, int mp, int ml, int top, int topp){
   int p, l;

    if(aux > 7){
      printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", mp);
      printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", ml);
        if(top == 1){
         printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
        }
        else if(top == 2){
          printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
        }
        else if(top == 3){
          printf("DIA QUE MAIS PRODUZIU: TERCA\n");
        }
        else if(top == 4){
          printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
        }
        else if(top == 5){
          printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
        }
        else if(top == 6){
          printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
        }
        else if(top == 7){
          printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }

    return; 
   }

   else if(aux <= 7){
     scanf("%d %d", &p, &l);
        if(p >= 5){
            mp++;
        }
        if(l >= 100){
            ml++;
        }
        if(l >= topp){
            topp = l;
            top = aux;
        }
    
      aux++;
      rep(aux, mp, ml, top, topp);
   }
  return ;
}


int main(){
  
 rep(1,0,0,0,0);

 return 0;
}