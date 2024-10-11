#include <stdio.h>

int percorrerarray(int num, int array[], int z, int i, int j){
    if (i == z){
        return 0;
    }
    if(array[i] == num && i != j){
        return 1;
    }
    return percorrerarray(num , array, z, ++i, j);
}


int somar(int stic[], int z, int i, int somados[]){
    if (i == z){
        return 0;
    }
    if(percorrerarray(stic[i], somados, z, 0, i) != 1){
       somados[i] = stic[i];
       return stic[i] + somar(stic, z, i + 1, somados);
    }
    return somar(stic, z, ++i, somados);
}


int sticjoao(int series[], int z, int i, int figj[], int cntg){
   if(i == z){
        return cntg;
   }
   if (series[i] % 2 == 0){
        figj[cntg] = series[i];
        cntg++;
   }
  return sticjoao(series, z, ++i, figj, cntg);
}


int sticmaria(int series[], int z, int i, int figm[],int cntg){
   if(i == z){
        return cntg;
   }
   if (series[i] % 2 == 1){
        figm[cntg] = series[i];
        cntg++;
   }
  return sticmaria(series, z, ++i, figm, cntg);
}


void ler(int series[], int z, int i){
   if(i == z){
    return;
   }
   scanf("%d", &series[i]);
   ler(series, z, ++i);
} 

int main(){
   int n, somam, somaj;
   int qntm, qntj;
   scanf("%d", &n);

   int series[n];
   int figm[n]; 
   int figj[n];

   ler(series, n, 0);

   qntj = sticjoao(series, n, 0, figj, 0);
   qntm = sticmaria(series, n, 0, figm, 0);

   int somadosj[qntj];
   int somadosm[qntm];

   printf("%d\n", qntj);
   printf("%d\n", qntm);
   
   somam = somar(figm, qntm, 0, somadosm);
   somaj = somar(figj, qntj, 0, somadosj);
  
   if (somam > somaj){
      printf("%d\n", somam);
   }
   else{
      printf("%d\n", somaj);
   }
   
   

    return 0;
}