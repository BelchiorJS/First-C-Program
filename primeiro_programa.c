#include <stdio.h>

int main(){
    printf("Olá, esse é a calculadora de multiplicação!\n");
    printf("Vamos começar digitando o primeiro número para multiplicar:\n");

    int numero1;
    int numero2;

    scanf("%d", &numero1);
    printf("Agora digite o segundo número para multiplicar:\n");
    scanf("%d", &numero2);
    
    int resultado = numero1 * numero2;
    printf("O resultado é: %d", resultado);
}