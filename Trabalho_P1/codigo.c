#include <stdio.h>

int main() {
    int vetor[100];
    int quantidade = 0;
    int opcao;

    do {
        printf("\n===== REGISTRO DE JOGADORES =====\n");
        printf("1 - Adicionar um jogador\n");
        printf("2 - Mostrar jogadores cadastrados\n");
        printf("3 - Remover um jogador\n");
        printf("4 - Alterar informações de um jogador\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                
                break;

            case 2:
                
                break;

            case 3:
                
                break;

            case 4:
                
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}