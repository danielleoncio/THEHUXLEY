#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    
  int x, y;
  bool r;
    
    scanf("%d %d", &x, &y);
    
    if(x > y){
        r = true;
        printf("%d\n", r);
    }

        else {
            r = false;
            printf("%d\n", r);
        }
        
    
    
    if(x == y){
        r = true;
        printf("%d\n", r);
    }
        else {
            r = false;
            printf("%d\n", r);
        }
    

    if(x < y){
        r = true;
        printf("%d\n", r);
    }
        else{
            r = false;
            printf("%d\n", r);
        }
    
    
    if(x != y){
        r = true;
        printf("%d\n", r);
    }
        else{
            r = false;
            printf("%d\n", r);
        }
    

    if(x >= y){
        r = true;
        printf("%d\n", r);
    }
        else{
            r = false;
            printf("%d\n", r);
        }
    
    
    if(x <= y){
        r = true;
        printf("%d\n", r);
    }
        else{
            r = false;
            printf("%d\n", r);
        }

    
 return 0;
}