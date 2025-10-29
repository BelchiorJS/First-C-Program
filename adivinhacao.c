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
    printf("Seu chute foi %d", chute);
}