#include <stdio.h>

// Questão 28
int main() {
    int i, n;

    for (i = 1; i <= 5; i++) {
        printf("\nEscreva o %dº número: ", i);
        scanf("%d", &n);

        if (n >= 100 && n <= 200) {
            printf("Você digitou um número na faixa entre 100 e 200.\n");
        } else {
            printf("Você digitou um número fora da faixa de 100 a 200.\n");
        }
    }

    return 0;
}