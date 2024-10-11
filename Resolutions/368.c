
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
  double salary, newsalary;

    scanf("%lf", &salary);

  if(salary > 500.00){

        newsalary = salary * 1.10;
        printf("%.2lf", newsalary);

    }
    else if(500.00 > salary && salary > 300.00){

        newsalary = salary * 1.07;
        printf("%.2lf", newsalary);

    }

    else
       {
        newsalary = salary * 1.05;
        printf("%.2lf", newsalary);
    }

 return 0;
}