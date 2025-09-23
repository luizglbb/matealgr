#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor > 0) {
        printf("O valor e positivo.\n");
    } else if (valor < 0) {
        printf("O valor e negativo.\n");
    } else { // valor == 0
        printf("O valor e zero.\n");
    }

    return 0;
