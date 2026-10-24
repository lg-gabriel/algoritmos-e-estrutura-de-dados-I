#include <stdio.h>

int main()
{
    int vetor[10] = {-1,10,11,12,13,14};

    for (int i = 0; i<10; i++) {
        if (vetor[i] == -1) {
            printf("A posição %d está vazio.\n",i);
        } else {
            printf("O valor da posição %d é %d.\n",i,vetor[i]);
        }    
    }
    return 0;
}