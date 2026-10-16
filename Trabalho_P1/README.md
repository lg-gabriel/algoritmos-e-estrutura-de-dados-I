# Registro de Jogadores em C

## Sobre o projeto

Este projeto consiste em um sistema de registro de jogadores de futebol desenvolvido na linguagem C. O programa permite cadastrar, visualizar, buscar, remover e alterar informações dos jogadores por meio de um menu interativo no terminal.

O sistema utiliza vetores para armazenar os dados dos jogadores, praticando conceitos fundamentais de programação, como estruturas de repetição, estruturas condicionais, comandos de seleção e manipulação de vetores.

## Funcionalidades

O sistema possui as seguintes funcionalidades:

1. **Adicionar um jogador:** cadastra um jogador informando o número da camisa, a idade e a quantidade de gols. O sistema impede o cadastro de jogadores com números de camisa duplicados.
2. **Mostrar jogadores cadastrados:** exibe as informações de todos os jogadores registrados.
3. **Buscar um jogador:** localiza um jogador por meio do número da camisa.
4. **Remover um jogador:** exclui um jogador do registro a partir do número da camisa informado.
5. **Alterar informações de um jogador:** permite atualizar o número da camisa, a idade e a quantidade de gols de um jogador cadastrado.
6. **Sair:** encerra a execução do programa.

## Tecnologias utilizadas

- Linguagem de programação C.
- Biblioteca padrão `stdio.h`.
- Compilador de C, como GCC.
- Terminal para interação com o usuário.

## Conceitos de programação aplicados

- Vetores para armazenamento de dados.
- Estruturas condicionais (`if`, `else`).
- Estrutura de repetição `do-while`.
- Laços de repetição `for`.
- Estrutura de seleção `switch-case`.
- Busca sequencial em vetores.
- Remoção de elementos por deslocamento.
- Atualização de dados armazenados.
- Controle da quantidade de jogadores cadastrados.

## Estrutura dos dados

O programa utiliza três vetores de inteiros, cada um com capacidade para armazenar até 100 valores:

| Vetor | Informação armazenada |
|---|---|
| `idade` | Idade dos jogadores |
| `gols` | Quantidade de gols dos jogadores |
| `camisa` | Número da camisa dos jogadores |

Os dados de um mesmo jogador ficam armazenados na mesma posição dos três vetores. A variável `quantidade` controla o número de jogadores cadastrados.

O número da camisa funciona como identificador para as operações de busca, remoção e alteração.

## Como executar

### 1. Pré-requisitos

É necessário ter um compilador de C instalado, como o GCC.

### 2. Compilar o programa

No terminal, acesse a pasta onde está salvo o arquivo do código-fonte e execute:

```bash
gcc jogadores.c -o jogadores
```

Neste exemplo, o arquivo de código-fonte se chama `jogadores.c`.

### 3. Executar o programa

No Windows:

```bash
jogadores.exe
```

No Linux:

```bash
./jogadores
```

Após a execução, o menu será exibido no terminal. Digite o número correspondente à operação desejada.

## Limitações

- O sistema permite cadastrar até 100 jogadores.
- Os dados são armazenados em vetores durante a execução do programa.
- Os dados não são salvos em arquivos ou bancos de dados; portanto, são perdidos quando o programa é encerrado.
- O programa utiliza números inteiros para representar as informações cadastradas.

## Objetivo acadêmico

O projeto tem como objetivo praticar os fundamentos da linguagem C e desenvolver a lógica de programação por meio da implementação de operações de cadastro, consulta, atualização e remoção de dados (CRUD).

---

**Projeto desenvolvido para a disciplina Algoritmo e Estrutura de Dados 1.**
