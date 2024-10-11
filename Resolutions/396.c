#include <stdio.h>
#define MAX 10000

int ler(int array[], int z, int i){
    if(i == z){
        return i;
    }
    int j;
    scanf("%d", &j);
    if(j == 999){
        return i;
    }
    array[i] = j;
    return ler(array, z, ++i);
}


int qntsmultas(int carros[], int z, int i, int cntg){//cntg starts 0
    if(i == z){
        return cntg;
    }
    if(carros[i] > 2){
        cntg += (carros[i]-2);
    }
    return qntsmultas(carros, z, ++i, cntg);
}


int qntscasas(int carros[], int z, int i, int cntg){//cntg starts 0
    if(i == z){
        return cntg;
    }
    if(carros[i] > 2){
        cntg += 1;
    }
    return qntscasas(carros, z, ++i, cntg);
}



int main(){
    int carros[MAX];
    int tam, mul, casas;
    double custo;

    tam = ler(carros, MAX, 0);
    mul = qntsmultas(carros, tam, 0, 0);
    custo = mul*12.89;
    casas = qntscasas(carros, tam, 0, 0);

    printf("%.2lf\n", custo);
    printf("%d\n", casas);


    return 0;
}