#include <stdio.h>

int main(){

int movimento = 1;

//Devemos mover o bispo 5 casas na diagonal.

for(movimento = 1; movimento <= 8; movimento++){

    printf("O Bispo faz um movimento para casa %d a direita e um movimento para cima na casa %d!\n", movimento, movimento);

}

}