#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int chute;
    double pontos = 1000;  
    int tentativas = 1;
    int acertou = 0;

    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();

    int numerosecreto = numeroGrande % 100;

    printf("\n\n");
    printf("            /                                                \\              \n");             
    printf("           |    _________________________________________     |              \n");
    printf("           |   |                                         |    |              \n");
    printf("           |   |  C:\\> Seja bem-vindo                    |    |              \n");
    printf("           |   |  C:\\> Ao jogo de advinhacao!            |    |              \n");
    printf("           |   |  C:\\>                                   |    |              \n");
    printf("           |   |  C:\\> Made by Guilherme Belchior        |    |              \n");
    printf("           |   |                                         |    |              \n");
    printf("           |   |                                         |    |              \n");
    printf("           |   |                                         |    |              \n");
    printf("           |   |                                         |    |              \n");
    printf("           |   |                                         |    |              \n");
    printf("           |   |                                         |    |              \n");
    printf("           |   |                                         |    |              \n");
    printf("           |   |                                         |    |              \n");
    printf("           |   |_________________________________________|    |              \n");
    printf("           |                                                  |              \n");
    printf("            \\_________________________________________________/             \n");
    printf("                   \\___________________________________/                    \n");
    printf("                ___________________________________________                  \n");
    printf("             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_               \n");
    printf("          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_            \n");
    printf("       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_         \n");
    printf("    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_      \n");
    printf(" _-'.-.-.-.-.-. .---.-. .-------------------------. .-.---. .---.-.-.-.`-_   \n");
    printf(":-------------------------------------------------------------------------:  \n");
    printf("`---._.-------------------------------------------------------------._.---'  \n");
    printf("\n\n");


    int nivel;
    printf("Escolha o nivel de dificuldade:\n");
    printf("(1) Facil (2) Medio (3) Dificil\n"); 

    scanf("%d", &nivel);

    switch(nivel) {
        case 1:
            tentativas = 20;
            break;
        case 2:
            tentativas = 15;
            break;
        default:
            tentativas = 6;
            break;
    }
    

    for(int i = 1; i <= tentativas; i++) {

        printf("Tentativa %d\n", i);
        printf("Qual e o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou) {
            break;
        }
        else if (maior) {
            printf("Seu chute foi maior que o numero secreto\n");
        }
        else {
            printf("Seu chute foi menor que o numero secreto\n");
        }

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos -= pontosperdidos;
    }

    printf("Fim de jogo!\n");

    if (acertou) {
        printf("Parabens! Voce ganhou!\n");      
        printf("Total de pontos: %.1f\n", pontos);
    }
    else {
        printf("Voce perdeu! Tente novamente!\n");
        printf("O numero secreto era %d\n", numerosecreto);
    }


    printf("\nPressione ENTER para sair...");
    getchar(); 
    getchar(); 
    return 0;
}
