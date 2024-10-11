#include <stdio.h>

int main() {
    
  double a, b, c;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a != b && b != c && c != a){
        printf("escaleno");
    }
    
    else if (a == b && b == c){
        
        printf("equilatero");
    }
    
    else{
        printf("isosceles");
    }
    

 return 0;
}