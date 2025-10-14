#include <stdio.h>

    //Bloco de funções direcionadas para o movmento individual de cada peça do Xadres.

    void moverBispo (int casas){
        if (casas > 0){
            printf("O Bispo se move para direita e para cima.\n");
            moverBispo(casas -1);
        }
    }

     void movertorre (int casas){
        if (casas > 0){
            printf("A Torre se move para direita.\n");
            movertorre(casas -1);
        }
    }

    void moverRainha (int casas){
        if (casas > 0){
            printf("A Rainha se move para esquerda.\n");
            moverRainha(casas -1);
        }
    }

    void movercavalo1 (int casa1){
        if (casa1 > 0){
            printf("O Cavalo se move para cima.\n");
        
            movercavalo1(casa1 -1);
        }
    }
        
        void movercavalo2 (int casa2){
        if (casa2 > 0){
            printf("O Cavalo se move para direita.\n");
        
            movercavalo2(casa2 -1);
            
        }    
    }
    
    int main(){

        //Bloco de chamadas das funções criadas.
        
        moverBispo(5);
        movertorre (5);
        moverRainha (8);
        movercavalo1(2);
        movercavalo2(1);

        return 0;


    }


