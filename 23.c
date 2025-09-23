#include <stdio.h>
#include <math.h> // Para a função sqrt()

int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Digite os coeficientes da equacao (a, b, c):\n");
    printf("Valor de a: ");
    scanf("%f", &a);
    printf("Valor de b: ");
    scanf("%f", &b);
    printf("Valor de c: ");
    scanf("%f", &c);
    
    // Calcula o discriminante (delta)
    delta = b * b - 4 * a * c;
    
    // Analisa as três situações do discriminante
    if (delta < 0) {
        printf("\nNao ha solucao real, pois o delta eh negativo.\n");
    } else if (delta == 0) {
        printf("\nHá duas solucoes iguais.\n");
        x1 = -b / (2 * a);
        printf("x1 = x2 = %.2f\n", x1);
    } else { // delta > 0
        printf("\nHa duas solucoes reais e diferentes.\n");
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}
