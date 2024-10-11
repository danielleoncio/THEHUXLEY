#include <stdio.h>


void calcularai(double array[][3], int i, int cntg){
    double d;
    if(cntg == 3){
        return;
    }
    if(cntg == 0){
    if(array[i][1] <= 45.0){
        array[i][2] = array[i][1];
    }
    else if(array[i][1] <= 100.00){
        if(array[i][0] == 0.0){
            d = 1 - (25/2);
            array[i][2] = array[i][1]*d;
            if(array[i][2] < 45.0){
                array[i][2] = 45.00;
            }
        }
        if(array[i][0] == 1.0){
            array[i][2] = array[i][1]*0.9;
            if(array[i][2] < 45.0){
                array[i][2] = 45.00;
            }
        }
        if(array[i][0] == 2.0){
            array[i][2] = array[i][1]*0.91;
            if(array[i][2] < 45.0){
                array[i][2] = 45.00;
            }
        }
        if(array[i][0] == 3.0){
            d = 1 - (15/2);
            array[i][2] = array[i][1]*d;
            if(array[i][2] < 45.0){
                array[i][2] = 45.00;
            }
        }
        if(array[i][0] == 4.0){
            array[i][2] = array[i][1]*0.94;
            if(array[i][2] < 45.0){
                array[i][2] = 45.00;
            }
        }
        if(array[i][0] == 5.0){
            array[i][2] = array[i][1]*0.95;
            if(array[i][2] < 45.0){
                array[i][2] = 45.00;
            }
        }
    }
    else{
        if(array[i][0] == 0.0){
            array[i][2] = (array[i][1]*0.75);
        }
        if(array[i][0] == 1.0){
            array[i][2] = (array[i][1]*0.80);
        }
        if(array[i][0] == 2.0){
            array[i][2] = (array[i][1]*0.82);
        }
        if(array[i][0] == 3.0){
            array[i][2] = (array[i][1]*0.85);
        }
        if(array[i][0] == 4.0){
            array[i][2] = (array[i][1]*0.88);

        }
        if(array[i][0] == 5.0){
            array[i][2] = (array[i][1]*0.90);
        }
    }
    }
    else{
        if(array[i][2] <= 45.0){
            array[i][2] = array[i][2];
        }
        else if(array[i][2] <= 100.00){
         if(array[i][0] == 0.0){
            d = 1 - (25/2);
            array[i][2] = array[i][2]*d;
            if(array[i][2] < 45.0){
                array[i][2] = 45.00;
            }
        }
        else if(array[i][0] == 1.0){
            array[i][2] = array[i][2]*0.9;
            if(array[i][2] < 45.0){
                array[i][2] = 45.00;
            }
        }
        else if(array[i][0] == 2.0){
            array[i][2] = array[i][2]*0.91;
            if(array[i][2] < 45.0){
                array[i][2] = 45.00;
            }
        }
        else if(array[i][0] == 3.0){
            d = 1 - (15/2);
            array[i][2] = array[i][2]*d;
            if(array[i][2] < 45.0){
                array[i][2] = 45.00;
            }
        }
        else if(array[i][0] == 4.0){
            array[i][2] = array[i][2]*0.94;
            if(array[i][2] < 45.0){
                array[i][2] = 45.00;
            }
        }
        else if(array[i][0] == 5.0){
            array[i][2] = array[i][2]*0.95;
            if(array[i][2] < 45.0){
                array[i][2] = 45.00;
            }
        }
    }
    else{
        if(array[i][0] == 0.0){
            array[i][2] = (array[i][2]*0.75);
        }
        if(array[i][0] == 1.0){
            array[i][2] = (array[i][2]*0.80);
        }
        if(array[i][0] == 2.0){
            array[i][2] = (array[i][2]*0.82);
        }
        if(array[i][0] == 3.0){
            array[i][2] = (array[i][2]*0.85);
        }
        if(array[i][0] == 4.0){
            array[i][2] = (array[i][2]*0.88);

        }
        if(array[i][0] == 5.0){
            array[i][2] = (array[i][2]*0.90);
        }
    }
    }



    return calcularai(array, i, ++cntg);
}



void ler(double array[][3], int z, int i){
    if(i == z){
        return ;
    }
    scanf("%lf", &array[i][0]);
    scanf("%lf", &array[i][1]);
    calcularai(array, i, 0);
    printf("Jogo[%d] = R$%.2lf\n", i, array[i][2]);
    ler(array, z, ++i);
    
}


int main(){
  int z;
  scanf("%d", &z);

   double jogos[z][3];
   ler(jogos, z, 0);


    return 0;
}