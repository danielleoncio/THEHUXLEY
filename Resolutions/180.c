#include <stdio.h>



void read(int array[][2], int z, int i, int C, int p, int aux){
    if(i == z){
        if(aux == 0){
            printf("N");
        }
        else{
            printf("S");
        }
        return;
    }
    scanf("%d" , &array[i][0]);
    getchar();
    scanf("%d" , &array[i][1]);
    p -= array[i][0];
    p += array[i][1]; 
    if(p > C){
        aux++;
    }
    read(array, z, ++i, C, p, aux);
}



int main(){
    int N,C;

    scanf("%d %d", &N, &C);

    int elevator[N][2];

    read(elevator, N, 0, C, 0, 0);

    return 0;
}