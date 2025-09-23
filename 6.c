#include <stdio.h>

// Definindo a constante PI. Você também pode usar a constante M_PI da biblioteca math.h.
#define PI 3.14159265359

int main() {
    // Declaração das variáveis
    float raio, altura, area, volume;

    // Solicita os valores do raio e da altura ao usuário
    printf("Digite o valor do raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite o valor da altura do cilindro: ");
    scanf("%f", &altura);

    // Calcula a área da superfície do cilindro
    // Fórmula: A = 2 * PI * r * (h + r)
    area = 2 * PI * raio * (altura + raio);

    // Calcula o volume do cilindro
    // Fórmula: V = PI * r^2 * h
    volume = PI * raio * raio * altura;

    // Exibe os resultados
    printf("\nA area da superficie do cilindro eh: %.2f\n", area);
    printf("O volume do cilindro eh: %.2f\n", volume);

    return 0; // Indica que o programa terminou com sucesso
}
