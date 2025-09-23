#include <stdio.h>

int main() {
    // Declaração das variáveis
    float numero1, numero2;
    float soma, produto, quociente;

    // Solicita os dois números ao usuário
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    // a) Calcula a soma
    soma = numero1 + numero2;

    // b) Calcula o produto
    produto = numero1 * numero2;

    // c) Calcula o quociente, verificando se o divisor não é zero
    if (numero2 != 0) {
        quociente = numero1 / numero2;

        // Mostra os resultados
        printf("\nResultados:\n");
        printf("A soma entre %.2f e %.2f eh: %.2f\n", numero1, numero2, soma);
        printf("O produto entre %.2f e %.2f eh: %.2f\n", numero1, numero2, produto);
        printf("O quociente da divisao de %.2f por %.2f eh: %.2f\n", numero1, numero2, quociente);
    } else {
        // Mensagem de erro se o divisor for zero
        printf("\nResultados:\n");
        printf("A soma entre %.2f e %.2f eh: %.2f\n", numero1, numero2, soma);
        printf("O produto entre %.2f e %.2f eh: %.2f\n", numero1, numero2, produto);
        printf("Nao e possivel calcular o quociente, pois o segundo numero eh zero.\n");
    }

    return 0; // Indica que o programa terminou com sucesso
