#include <stdio.h>

int main() {
    int a, b, c;
    int temp;

    printf("Digite o primeiro numero (distinto): ");
    scanf("%d", &a);
    printf("Digite o segundo numero (distinto): ");
    scanf("%d", &b);
    printf("Digite o terceiro numero (distinto): ");
    scanf("%d", &c);
    
    // Ordenação com trocas
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Os numeros em ordem crescente sao: %d, %d, %d\n", a, b, c);

    return 0;
}
