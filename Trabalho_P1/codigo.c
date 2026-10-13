
#include <stdio.h>

int main() {
    int idade[100];
    int gols[100];
    int camisa[100];
    int quantidade = 0;
    int opcao;

    do {
        printf("\n===== REGISTRO DE JOGADORES =====\n");
        printf("1 - Adicionar um jogador\n");
        printf("2 - Mostrar jogadores cadastrados\n");
        printf("3 - Buscar um jogador\n");
        printf("4 - Remover um jogador\n");
        printf("5 - Alterar informacoes de um jogador\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (quantidade < 100) {
                    printf("Digite a idade do jogador: ");
                    scanf("%d", &idade[quantidade]);

                    printf("Digite a quantidade de gols: ");
                    scanf("%d", &gols[quantidade]);

                    printf("Digite o numero da camisa: ");
                    scanf("%d", &camisa[quantidade]);

                    quantidade++;

                    printf("Jogador cadastrado com sucesso!\n");
                } else {
                    printf("Limite de jogadores atingido!\n");
                }
                break;

            case 2:
                if (quantidade == 0) {
                    printf("Nenhum jogador cadastrado!\n");
                } else {
                    for (int i = 0; i < quantidade; i++) {
                        printf("\nJogador %d\n", i + 1);
                        printf("Idade: %d\n", idade[i]);
                        printf("Quantidade de gols: %d\n", gols[i]);
                        printf("Numero da camisa: %d\n", camisa[i]);
                    }
                }
                break;

            case 3:

                break;

            case 4:

                break;

            case 5:
                if (quantidade == 0) {
                    printf("Nenhum jogador cadastrado!\n");
                } else {
                    int numero;

                    printf("Digite o numero do jogador que deseja alterar (1 a %d): ", quantidade);
                    scanf("%d", &numero);

                    if (numero >= 1 && numero <= quantidade) {
                        printf("Digite a nova idade: ");
                        scanf("%d", &idade[numero - 1]);

                        printf("Digite a nova quantidade de gols: ");
                        scanf("%d", &gols[numero - 1]);

                        printf("Digite o novo numero da camisa: ");
                        scanf("%d", &camisa[numero - 1]);

                        printf("Informacoes alteradas com sucesso!\n");
                    } else {
                        printf("Numero de jogador invalido!\n");
                    }
                }
                break;

            case 0:
                printf("Encerrando o sistema...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
