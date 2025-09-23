#include <stdio.h>

int main() {
    // Declaração das variáveis
    float salario_fixo, total_vendas, salario_final, comissao;

    // Solicita o salário fixo e o total de vendas ao usuário
    printf("Digite o valor do salario fixo: R$ ");
    scanf("%f", &salario_fixo);

    printf("Digite o total de vendas efetuadas no mes: R$ ");
    scanf("%f", &total_vendas);

    // Calcula a comissão (15% sobre o total de vendas)
    // A fórmula é (total_vendas * 15) / 100 ou total_vendas * 0.15
    comissao = total_vendas * 0.15;

    // Calcula o salário final (salário fixo + comissão)
    salario_final = salario_fixo + comissao;

    // Exibe os resultados
    printf("\n--- Relatorio de Salario ---\n");
    printf("Salario Fixo: R$ %.2f\n", salario_fixo);
    printf("Comissao (15%% sobre as vendas): R$ %.2f\n", comissao);
    printf("Salario Final do mes: R$ %.2f\n", salario_final);
    printf("----------------------------\n");

    return 0; // Indica que o programa terminou com sucesso
}
