#include <stdio.h>

int main(){

    //Devemos mover o bispo 5 casas na diagonal.

    for (int i = 1, j = 1; i <= 5 && j <= 5; i++, j++){

        printf(" O Bispo faz um movimento para casa %d a direita e um movimento para cima na casa %d!\n", i,j);

    }

}