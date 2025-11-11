#include <stdio.h>

int main(){

    int numerosecreto = 42;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    // Imprime uma mensagem de boas-vindas
    printf("****************************************\n");
    printf("Bem-vindo ao jogo de adivinhacao!\n");
    printf("****************************************\n");

   while(1) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual e o seu chute?");

        scanf("%d", &chute); // Scanf lê o input do teclado
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou) {
            printf("Parabens! Voce acertou o numero secreto!\n");

            break;
        }

        else {

            
            if(maior) {
                printf("Seu chute foi maior que o numero secreto!\n");
            } else {
                printf("Seu chute foi menor que o numero secreto!\n");
            }
        };

        tentativas++; // Incrementa o número de tentativas

        double pontosperdidos = (chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }

    printf("Fim de jogo\n");
    printf("Voce acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos %f!\n", pontos);

}

