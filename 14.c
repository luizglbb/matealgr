#include <stdio.h>

int main() {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    if (valor % 2 == 0) {
        printf("O numero %d e par.\n", valor);
    } else {
        printf("O numero %d e impar.\n", valor);
    }

    return 0;
}
