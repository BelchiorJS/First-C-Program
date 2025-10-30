#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configura a localidade para português do Brasil

    int numerosecreto = 42;
    int chute;
    
    // Imprime uma mensagem de boas-vindas
    printf("****************************************\n");
    printf("Bem-vindo ao jogo de adivinhacao!\n");
    printf("****************************************\n");
    
    // Loop que irá permitir 3 tentativas de chute
    for(int i = 1; i <=3; i++) {

        printf("Tentativa %d de 3\n", i);
        printf("Qual é o seu chute?");

        scanf("%d", &chute); // Scanf lê o input do teclado
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numerosecreto);

        if (acertou) {
            printf("Parabéns! Você acertou o número secreto!\n");

            break;
        }

        else {

            int maior = chute > numerosecreto;

            if(maior) {
                printf("Seu chute foi maior que o número secreto!\n");
            } else {
                printf("Seu chute foi menor que o número secreto!\n");
            }
        };
    }
    printf("Fim de jogo");
}