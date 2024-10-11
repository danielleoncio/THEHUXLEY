#include <stdio.h>

double smaller(double height[], int z, int i, double small){
    if (i == z) {
        return small;
    }
    if (i == 0 || height[i] < small) {
        small = height[i];
    }
    return smaller(height, z, i + 1, small);
}

double bigger(double height[], int z, int i, double big){
    if (i == z) {
        return big;
    }
    if (i == 0 || height[i] > big) {
        big = height[i];
    }
    return bigger(height, z, i + 1, big);
}


void read(double height[], int z, int i){
    if (i == z) {
        return;
    }
    scanf("%lf", &height[i]);
    read(height, z, i + 1);
}


int onde(double x, double height[], int z, int i){
    if(i == z){
        return -1;
    }
    if (x == height[i]){
        return i;
    }
  return onde(x, height, z, ++i);
}

void reog(double height[], double order[], int z, int i,int q, int s, int b){
    if (i == z){
        return;
    }
    if((i != s && i != b) && order[q] == 0 ){
        order[q] = height[i]; 
    }
    reog(height, order, z, ++i, q, s, b);
}


void reog2(double height[], double order[], int z, int i,int q, int s, int b, int c){
    if (i == z){
        return;
    }
    if((i != s && i != b && i!= c) && order[q] == 0 ){
        order[q] = height[i]; 
    }
    reog2(height, order, z, ++i, q, s, b, c);
}



int main(){
    double height[4];
    double order[4] = {0};
    int ps,pb, pc;

    read(height, 4, 0);
    order[0] = smaller(height, 4, 0, height[0]);
    order[2] = bigger(height, 4, 0, height[0]); 
    
    ps = onde(order[0], height, 4, 0);
    pb = onde(order[2], height, 4, 0);
    
    reog(height, order, 4, 0, 1, ps, pb);
    pc = onde(order[1], height, 4, 0);

    reog2(height, order, 4, 0, 3, ps, pb, pc);

    printf("%.2lf\n", order[0]);

    if(order[1] > order[3]){
        printf("%.2lf\n", order[1]);
    } else{
        printf("%.2lf\n", order[3]);
    }
    
    printf("%.2lf\n", order[2]);
    
    if(order[1] < order[3]){
        printf("%.2lf\n", order[1]);
    } else{
        printf("%.2lf\n", order[3]);
    }
    
    return 0;
}
