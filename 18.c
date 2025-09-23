#include <stdio.h>

int main() {
    int num_macas;
    float valor_total, preco_unitario;

    printf("Digite o numero de macas compradas: ");
    scanf("%d", &num_macas);

    // Condição para determinar o preço unitário
    if (num_macas >= 12) {
        preco_unitario = 0.25;
    } else {
        preco_unitario = 0.30;
    }

    // Calcula o valor total
    valor_total = num_macas * preco_unitario;

    printf("O valor total da compra eh: R$ %.2f\n", valor_total);

    return 0;
}
