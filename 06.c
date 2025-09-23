#include <stdio.h>

// A constante M_PI é definida na biblioteca math.h. 
// Para usá-la, você precisará compilar com a flag -lm (ex: gcc seu_codigo.c -lm).
// Se não quiser usar a biblioteca math.h, pode definir o valor de PI manualmente.
#define PI 3.14159

int main() {
    // Declaração das variáveis
    float raio, area;

    // Solicita o raio do círculo ao usuário
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    // Calcula a área do círculo usando a fórmula: Area = PI * raio^2
    area = PI * (raio * raio);
    // Ou, de forma mais compacta: area = PI * raio * raio;

    // Exibe o resultado com duas casas decimais para maior precisão
    printf("A area do circulo com raio %.2f eh: %.2f\n", raio, area);

    return 0; // Indica que o programa terminou com sucesso
}
