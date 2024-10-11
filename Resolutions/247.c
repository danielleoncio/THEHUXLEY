#include <stdio.h>
#include <string.h>

void printar(char string[], int z){
    if (z == -1){
        return;
    }
    printf("%c", string[z]);
  
    printar(string, z-1);

}


int main(){
   char string[256];

   fgets(string, 256, stdin);
   string[strcspn(string, "\n")] = '\0';

   int tam = strlen(string);
   
   printar(string, tam-1);

    return 0;
}