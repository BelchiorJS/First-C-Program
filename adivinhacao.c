#include <stdio.h>

int main(){

    // Imprime uma mensagem de boas-vindas
    printf("****************************************\n");
    printf("Bem-vindo ao jogo de adivinhacao!\n");
    printf("****************************************\n");
    
    int numerosecreto = 42;

    int chute;
    
    printf("Qual é o seu chute?");
    scanf("%d", &chute); // Scanf lê o input do teclado
    printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numerosecreto);

    if (acertou) {
        printf("Parabéns! Você acertou o número secreto!\n");
    }

    else {

        int maior = chute > numerosecreto;
        if(maior) {
            printf("Seu chute foi maior que o número secreto!\n");
        }

        int menor = chute < numerosecreto;
        if(menor) {
            printf("Seu chute foi menor que o número secreto!\n");
        }
    };
}