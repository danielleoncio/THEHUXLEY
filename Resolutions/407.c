#include <stdio.h>
#define MAX 10000


int qntsseq(int x, int aux){//aux starts 1
    int y;
    if(x == 1){
        return aux;
    }
    if(x % 2 == 0){
        y = x/2;
        aux++;
    }
    if(x % 2 == 1){
        y = (3*x) + 1;
        aux++;
    }
    return qntsseq(y, aux);
}


int maiordoin(int x, int y, int aux){
    if(x == y){
        return aux;
    }

    int a;
    a = qntsseq(x, 1);

    if (a > aux){
        aux = a;
    }
    return maiordoin(++x, y, aux);
}

void ler(int par[][2], int z, int i){
    if(i == z){
       return;
    }
    if(scanf("%d", &par[i][0]) != EOF){
        getchar();
        scanf("%d", &par[i][1]);

        printf("%d ", par[i][0]);
        printf("%d ", par[i][1]);

           if(par[i][0] > par[i][1]){
                printf("%d\n", maiordoin(par[i][1], par[i][0], qntsseq(par[i][1], 1)));
           } else{
                printf("%d\n", maiordoin(par[i][0], par[i][1], qntsseq(par[i][0], 1)));

           }
        return ler(par, z, ++i);
    }
   

}




int main(){
  int par[MAX][2];

    ler(par, MAX, 0);



    return 0;
}
