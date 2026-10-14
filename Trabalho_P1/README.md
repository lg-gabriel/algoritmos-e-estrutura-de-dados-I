# Sistema de Registro de Jogadores

## Descrição

Este projeto é um sistema simples de cadastro e gerenciamento de jogadores, desenvolvido em linguagem C. O programa funciona por meio de um menu interativo no terminal e permite cadastrar, listar, buscar, remover e alterar informações dos jogadores.

## Funcionalidades

O sistema oferece as seguintes opções:

1. **Adicionar um jogador:** registra a idade, a quantidade de gols e o número da camisa.
2. **Mostrar jogadores cadastrados:** exibe as informações de todos os jogadores registrados.
3. **Buscar um jogador:** procura jogadores pelo número da camisa.
4. **Remover um jogador:** exclui um jogador a partir do número da camisa e reorganiza os dados restantes nos vetores.
5. **Alterar informações de um jogador:** permite atualizar a idade, a quantidade de gols e o número da camisa.
0. **Sair:** encerra o programa.

## Tecnologias e conceitos utilizados

- Linguagem C.
- Biblioteca padrão `stdio.h` para entrada e saída de dados.
- Vetores para armazenar as informações dos jogadores.
- Estruturas condicionais (`if`, `else` e `switch`).
- Laços de repetição (`do while` e `for`).
- Busca sequencial para localizar jogadores.
- Deslocamento de elementos nos vetores para remover um cadastro.

## Como os dados são armazenados

O programa utiliza três vetores de inteiros, cada um com capacidade para 100 posições:

- `idade[100]`: armazena a idade de cada jogador.
- `gols[100]`: armazena a quantidade de gols de cada jogador.
- `camisa[100]`: armazena o número da camisa de cada jogador.

As informações de um mesmo jogador ficam na mesma posição dos três vetores. Por exemplo, os dados em `idade[0]`, `gols[0]` e `camisa[0]` correspondem ao primeiro jogador cadastrado.

A variável `quantidade` registra quantos jogadores estão cadastrados no momento.

**Observação:** os dados são armazenados apenas durante a execução do programa. Ao encerrar o sistema, os cadastros não são salvos em um arquivo.

## Como compilar e executar

É necessário ter um compilador C, como o GCC, instalado no computador.

1. Salve o código em um arquivo chamado `registro_jogadores.c`.
2. Abra o terminal na pasta onde o arquivo foi salvo.
3. Compile o programa com o comando:

   ```bash
   gcc registro_jogadores.c -o registro_jogadores
   ```

4. Execute o programa:

   - **Windows:**
     ```bash
     registro_jogadores.exe
     ```
   - **Linux:**
     ```bash
     ./registro_jogadores
     ```

## Limitações atuais

- O sistema permite cadastrar até 100 jogadores.
- O programa não salva os dados após ser encerrado.
- A entrada de dados espera valores inteiros.
- O código não valida se já existe outro jogador com o mesmo número de camisa.

## Objetivo do projeto

Praticar conceitos fundamentais de programação em C, especialmente o uso de vetores, estruturas condicionais, laços de repetição, busca, remoção e atualização de dados.

---
Projeto desenvolvido para fins educacionais na disciplina de **Algoritmo e Estrutura de Dados 1**.
