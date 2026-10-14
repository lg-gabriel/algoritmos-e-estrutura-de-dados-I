#include <stdio.h>

int main() {
    int idade[100];
    int gols[100];
    int camisa[100];
    int quantidade = 0;
    int opcao;

    do {
        printf("\n========================================\n");
        printf("        REGISTRO DE JOGADORES        \n");
        printf("========================================\n");
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
        printf("\n---------------------------------------\n");
                        
                        printf("\nJogador %d\n", i + 1);
                        printf("Idade: %d\n", idade[i]);
                        printf("Quantidade de gols: %d\n", gols[i]);
                        printf("Numero da camisa: %d\n", camisa[i]);
                    }
                }
                break;

            case 3:
                if (quantidade == 0) {
                    printf("Nenhum jogador cadastrado!\n");
                } else {
                    int numero;
                    int encontrado = 0;

                    printf("Digite o numero da camisa do jogador: ");
                    scanf("%d", &numero);

                    for (int i = 0; i < quantidade; i++) {
                        if (camisa[i] == numero) {
                        printf("\n-------------------------------------\n");
                
                        printf("\nJogador encontrado!\n");
                        printf("Idade: %d\n", idade[i]);
                        printf("Quantidade de gols: %d\n", gols[i]);
                        printf("Numero da camisa: %d\n", camisa[i]);

                        encontrado = 1;
                        }
                    }

                if (encontrado == 0) {
                    printf("Jogador nao encontrado!\n");
                    }
                }
                break;

            case 4:
                if (quantidade == 0) {
                    printf("Nenhum jogador cadastrado!\n");
                } else {
                    int posicao = -1;
                    int desejado;

                    printf("Digite o numero da camisa do jogador que deseja remover: \n");
                    scanf("%d", &desejado);
                    
                    for (int i = 0; i < quantidade; i++) {
                        if (camisa[i] == desejado) {
                            posicao = i;
                            break;
                        }
                    }

                    if (posicao == -1) {
                        printf("Jogador nao encontrado!");
                    } else {
                        for (int i = posicao; i < quantidade - 1; i++) {
                            idade[i] = idade[i+1];
                            gols[i] = gols[i+1];
                            camisa[i] = camisa[i+1];
                        }
                
                    quantidade--;

                    printf("Jogador removido com sucesso!\n");
                    }
                }
                break;

            case 5:
                if (quantidade == 0) {
                    printf("Nenhum jogador cadastrado!\n");
                } else {
                    int numero;
                    int encontrado = 0;

                    printf("\nNumeros de camisas cadastradas:\n");

                    for (int i = 0; i < quantidade; i++) {
                        printf("%d\n", camisa[i]);
                    }

                    printf("\nDigite o numero da camisa do jogador que deseja alterar: ");
                    scanf("%d", &numero);

                    for (int i = 0; i < quantidade; i++) {
                        if (camisa[i] == numero) {
                            printf("\nJogador encontrado!\n");
                            printf("Idade atual: %d\n", idade[i]);
                            printf("Quantidade de gols atual: %d\n", gols[i]);
                            printf("Numero da camisa atual: %d\n", camisa[i]);

                            printf("\nDigite a nova idade: ");
                            scanf("%d", &idade[i]);

                            printf("Digite a nova quantidade de gols: ");
                            scanf("%d", &gols[i]);

                            printf("Digite o novo numero da camisa: ");
                            scanf("%d", &camisa[i]);

                            printf("Informacoes alteradas com sucesso!\n");

                            encontrado = 1;
                            break;
                        }
                    }

                    if (encontrado == 0) {
                        printf("Jogador nao encontrado!\n");
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