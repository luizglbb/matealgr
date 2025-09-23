#include <stdio.h>

int main() {
    float valor_compra, valor_pago;
    int troco_total_centavos;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor_compra);

    printf("Digite o valor pago pelo cliente: R$ ");
    scanf("%f", &valor_pago);

    if (valor_pago < valor_compra) {
        printf("O valor pago e insuficiente. A compra nao pode ser efetuada.\n");
        return 1;
    }

    troco_total_centavos = (int)((valor_pago - valor_compra) * 100 + 0.5); // +0.5 para arredondamento correto

    printf("\nTroco total: R$ %.2f\n", (float)troco_total_centavos / 100);
    printf("Detalhes do troco:\n");

    int notas[] = {10000, 5000, 2000, 1000, 500, 200}; // Valores em centavos
    int moedas[] = {100, 50, 25, 10, 5, 1};

    printf("--- Cedulas ---\n");
    for (int i = 0; i < 6; i++) {
        int quantidade = troco_total_centavos / notas[i];
        if (quantidade > 0) {
            printf("%d cedula(s) de R$ %.2f\n", quantidade, (float)notas[i] / 100);
            troco_total_centavos %= notas[i];
        }
    }
    
    printf("\n--- Moedas ---\n");
    for (int i = 0; i < 6; i++) {
        int quantidade = troco_total_centavos / moedas[i];
        if (quantidade > 0) {
            printf("%d moeda(s) de R$ %.2f\n", quantidade, (float)moedas[i] / 100);
            troco_total_centavos %= moedas[i];
        }
    }

    return 0;
}
