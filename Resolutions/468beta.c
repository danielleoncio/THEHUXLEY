#include <stdio.h>
#define MAX 10000


int ler(double array[][2], int z, int i, int cntg){
    if(i == z){
        return cntg;
    }
    if(scanf("%lf", &array[i][0]) != EOF){

         scanf("%lf", &array[i][1]);
        if(array[i][1] <= (0.80*array[i][0])){
             cntg++;
        }
        return ler(array, z, ++i, cntg);
       
    }

    return cntg;

}



int main(){
   double antes[MAX][2];

    printf("%d\n", ler(antes, MAX, 0, 0));

    return 0;
}