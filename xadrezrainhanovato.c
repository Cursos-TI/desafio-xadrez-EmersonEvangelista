#include <stdio.h>

int main() {

    //Devemos mover a rainha 8 casas para esquerda.

    int movimento = 1;

    //Enaquanto a variavél "movimento" for igual ou menor que 8, o while continua executando."
    
    do{
         printf(" A Rainha se movimenta para casa %d a esquerda!\n", movimento);
         movimento++;         
    }
    
    while (movimento <= 8 );

    return 0;
}
