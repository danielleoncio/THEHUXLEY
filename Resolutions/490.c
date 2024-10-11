#include <stdio.h>


double add(double embqnt[], double embcust[], int z, int i){
    if(z == i){
        return 0;
    }

    return (embqnt[i]*embcust[i]) + add(embqnt, embcust, 3, ++i);
}


void read(double embqnt[], double embcust[], int z, int i){
    if(z == i){
        return; 
    }
    scanf("%lf", &embqnt[i]);
    scanf("%lf", &embcust[i]);
   read(embqnt, embcust, 3, ++i);
}


int main(){
   double treecust;
   double embqnt[3];
   double embcust[3];
   double totalcust;

   scanf("%lf", &treecust);
   read(embqnt, embcust, 3, 0);
  
  totalcust = add(embqnt, embcust, 3, 0) + treecust;
  printf("%.2lf\n", totalcust);
  printf("%.2lf\n", totalcust/21);
}