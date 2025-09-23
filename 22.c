#include <stdio.h>

int main() {
    int operacao;
    float valor1, valor2, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("\nEscolha a operacao:\n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Divisao\n");
    printf("4. Multiplicacao\n");
    printf("Digite o numero da operacao desejada: ");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
            resultado = valor1 + valor2;
            printf("Resultado: %.2f + %.2f = %.2f\n", valor1, valor2, resultado);
            break;
        case 2:
            resultado = valor1 - valor2;
            printf("Resultado: %.2f - %.2f = %.2f\n", valor1, valor2, resultado);
            break;
        case 3:
            if (valor2 != 0) {
                resultado = valor1 / valor2;
                printf("Resultado: %.2f / %.2f = %.2f\n", valor1, valor2, resultado);
            } else {
                printf("Erro: Nao e possivel dividir por zero.\n");
            }
            break;
        case 4:
            resultado = valor1 * valor2;
            printf("Resultado: %.2f * %.2f = %.2f\n", valor1, valor2, resultado);
            break;
        default:
            printf("Operacao invalida!\n");
            break;
    }

    return 0;
}
