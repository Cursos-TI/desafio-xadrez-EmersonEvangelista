#include <stdio.h>

int main() {

    //Devemos mover a torre 5 casas para direita.

    int movimento = 1;

    //Enaquanto a variavél "movimento for menor que 5, o while continua executando."

    while (movimento <= 5 ){

        printf("casa %d para direita!\n", movimento);

        movimento++;  
    }

    return 0;
}
