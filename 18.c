#include <stdio.h>

int main() {
    int num1, num2, num3, maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    maior = num1; // Assume que o primeiro número é o maior

    if (num2 > maior) {
        maior = num2; // Se o segundo for maior, ele se torna o maior
    }

    if (num3 > maior) {
        maior = num3; // Se o terceiro for maior, ele se torna o maior
    }

    printf("O maior numero digitado eh: %d\n", maior);

    return 0;
}
