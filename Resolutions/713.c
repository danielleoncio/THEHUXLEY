#include <stdio.h>

void ehmultiplo(int x, int y, int z, int q){
    
    if (y < z){
       if (y % x == 0){
          printf("%d\n", y);
          q++;
          y++;
          ehmultiplo(x, y,z,q);
        }
        else {
          y++;
          ehmultiplo(x, y, z, q);
        }
    }
    
    else if (y == z){
        if(y % x != 0 && q == 0){
            printf("INEXISTENTE");
            return ;
        }
        if (y % x == 0){
          printf("%d\n", y);
          q++;
          y++;
           return ;
        }
    }

 return;
}


int main(){
    int n, b, c;

    scanf("%d %d %d", &n , &b, &c);
    ehmultiplo(n, b, c, 0);

  return 0;
}