#include <stdio.h>

int main() {
    float preco_fabrica, impostos, revendedor, preco_final;

    printf("Digite o preco de fabrica do automovel: R$ ");
    scanf("%f", &preco_fabrica);

    // Calcula os impostos (45% do preço de fábrica)
    impostos = preco_fabrica * 0.45;

    // Calcula a porcentagem do revendedor (28% do preço de fábrica)
    revendedor = preco_fabrica * 0.28;

    // Calcula o preço final
    preco_final = preco_fabrica + impostos + revendedor;

    // Mostra os resultados
    printf("\n--- Detalhes do Preco do Automovel ---\n");
    printf("Preco de fabrica: R$ %.2f\n", preco_fabrica);
    printf("Valor dos impostos (45%%): R$ %.2f\n", impostos);
    printf("Valor do revendedor (28%%): R$ %.2f\n", revendedor);
    printf("Preco final do carro: R$ %.2f\n", preco_final);
    
    return 0;
}
