#include <stdio.h>

int bigger(int array[], int z, int i, int big){
    if (i == z) {
        return big;
    }
    if(array[i] > big){
        big = array[i];
    }
    return bigger(array, z, ++i, big);
}


void ler(int seq[], int z, int i){
    if(i == z){
        return;
    }
    else{
      int j;
      scanf("%d", &j);
        if(j == 0 ){
            return;
        }
      seq[i] = j;
    }
    ler(seq, z, ++i);
}


int main(){
    int seq[100] = {0};

    ler(seq, 100, 0);
   
    printf("%d\n", bigger(seq, 100, 0, seq[0]));

    return 0;
}