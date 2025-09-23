#include <stdio.h>

int main() {
    int A, B, temp;

    // Ler os valores de A e B
    printf("Digite o valor para A: ");
    scanf("%d", &A);
    printf("Digite o valor para B: ");
    scanf("%d", &B);

    // Exibe os valores antes da troca
    printf("\nValores antes da troca: A = %d, B = %d\n", A, B);

    // Efetua a troca usando uma variável temporária
    temp = A;
    A = B;
    B = temp;

    // Exibe os valores após a troca
    printf("Valores apos a troca: A = %d, B = %d\n", A, B);

    return 0;
}
