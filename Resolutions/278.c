#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int A,B,C,D,AB,CD,R;

    scanf("%d %d %d %d",&A,&B,&C,&D);

    AB=A*B;
    CD=C*D;
    R=AB-CD;
    
    printf("DIFERENCA = %d",R);

 return 0;
}