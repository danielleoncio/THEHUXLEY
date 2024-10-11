#include <stdio.h>

int main() {
  int a, b, c;
  char possible;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a - b ==0 || a - c == 0 || b - c == 0 || a + b - c == 0 || a + c - b == 0 || b + c - a == 0){
       possible = 'S';
    }

    else {
          possible = 'N';
    }  
        printf("%c", possible);

  return 0;
}