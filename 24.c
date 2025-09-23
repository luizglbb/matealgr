#include <stdio.h>
#include <ctype.h> // Para a função toupper()

int main() {
    char classe;
    float consumo, tarifa, valor_fornecimento, icms, valor_pagar;

    printf("Digite a classe consumidora (A, B ou C): ");
    scanf(" %c", &classe);
    classe = toupper(classe); // Converte para maiúscula para evitar erros de digitação

    printf("Digite o consumo em KW/h: ");
    scanf("%f", &consumo);

    // Atribui a tarifa com base na classe consumidora
    switch (classe) {
        case 'A':
            tarifa = 0.50;
            break;
        case 'B':
            tarifa = 0.80;
            break;
        case 'C':
            tarifa = 1.00;
            break;
        default:
            printf("\nClasse consumidora invalida.\n");
            return 1;
    }

    // Calcula o valor do fornecimento
    valor_fornecimento = consumo * tarifa;

    // Calcula o ICMS (30% do valor do fornecimento)
    icms = 0.30 * valor_fornecimento;

    // Calcula o valor a pagar
    valor_pagar = valor_fornecimento + icms;

    // Exibe o relatório
    printf("\n--- Conta de Energia ---\n");
    printf("Classe Consumidora: %c\n", classe);
    printf("Consumo (KW/h): %.2f\n", consumo);
    printf("Tarifa: R$ %.2f\n", tarifa);
    printf("Valor do Fornecimento: R$ %.2f\n", valor_fornecimento);
    printf("ICMS (30%%): R$ %.2f\n", icms);
    printf("------------------------\n");
    printf("Valor a Pagar: R$ %.2f\n", valor_pagar);
    
    return 0;
}
