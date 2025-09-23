#include <stdio.h>

int main() {
    // Declaração das variáveis
    float centimetros;
    float polegadas;

    // Solicita a entrada do valor em centímetros
    printf("Digite o valor em centimetros: ");
    scanf("%f", &centimetros);

    // Converte centímetros para polegadas
    // 1 polegada = 2.54 cm, então polegadas = cm / 2.54
    polegadas = centimetros / 2.54;

    // Exibe o resultado da conversão
    printf("%.2f centimetros equivalem a %.2f polegadas.\n", centimetros, polegadas);

    return 0; // Indica que o programa terminou com sucesso
}
