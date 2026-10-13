#include <stdio.h>
#include <stdbool.h>

// Código feito em dupla por Lucas Gabriel e Thiago de Jesus 

int main() {
    int nascimento, anoAtual, idade;
    bool podeVotar, podeDirigir, podeArmas, podePresidente, podeAposentar;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - nascimento;

    podeVotar = idade >= 16;
    podeDirigir = idade >= 18;
    podeArmas = idade >= 25;
    podePresidente = idade >= 35;
    podeAposentar = idade >= 65;

    printf("\nIdade: %d anos\n", idade);

    if (podeAposentar) {
        printf("Você pode se aposentar, se candidatar a presidência do Brasil, ter porte legal de armas, dirigir e votar.\n");
        
    } else if (podePresidente) {
        printf("Você pode se candidatar a presidência do Brasil, ter porte legal de armas, dirigir e votar.\n");
        
    } else if (podeArmas) {
        printf("Você pode ter porte legal de armas, dirigir e votar.\n");
        
    } else if (podeDirigir) {
        printf("Você pode dirigir e votar.\n");
        
    } else if (podeVotar) {
        printf("Você pode votar.\n");
    
    } else {
        printf("Você ainda não pode votar.\n");
    }
    return 0;
}