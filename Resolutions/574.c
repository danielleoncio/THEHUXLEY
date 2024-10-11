#include <stdio.h>



void calcularai(double array[], double array2[] ){
    double aux;
    array2[0] = array[0];
    printf("%.2lf\n", array2[0]);

    array2[1] = array[2]*array[0];
    printf("%.2lf\n", array2[1]);


    array2[2] = array[3]*array[0];
        printf("%.2lf\n", array2[2]);

    array2[3] = array2[1] + array2[2];
        printf("%.2lf\n", array2[3]);

    if(array[2] >= 2500.00){
        array2[4] = 0.60*array2[1]; 
    }else{
        array2[4] = 0.60*array2[3];
    }
        printf("%.2lf\n", array2[4]);
    

     array2[5] = (0.01*array[1])*array2[3];
        printf("%.2lf\n", array2[5]);


    array2[6] = array2[4] + array2[5];
        printf("%.2lf\n", array2[6]);


    aux = 1 - (array[1]* 0.01);
    array2[7] = ((array2[3] + array2[6])/aux);
        printf("%.2lf\n", array2[7]);


    if ( array[2] >= 2500.00){
        printf("Impostos calculados sem o frete\n");
    }else{
        printf("Impostos calculados com o frete\n");
    }



}


void ler(double array[], int z, int i){
    if(i == z){
        return;
    }
    scanf("%lf", &array[i]);

   return ler(array, z, ++i);
}


int main(){
    double entrada[4];
    double saida[8];

    ler(entrada, 4, 0);
    calcularai(entrada, saida);

    return 0;
}