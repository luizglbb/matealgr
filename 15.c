#include <stdio.h>

int main() {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    if (valor < 0) {
        valor = valor * -1; // Inverte o sinal
    }

    printf("O valor final eh: %d\n", valor);

    return 0;
}
