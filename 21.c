#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &lado1);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &lado2);
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &lado3);

    // Verifica a propriedade do triângulo
    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) {
        printf("Os valores podem formar um triangulo.\n");
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Tipo de triangulo: Equilatero\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Tipo de triangulo: Isosceles\n");
        } else {
            printf("Tipo de triangulo: Escaleno\n");
        }
    } else {
        printf("Os valores nao podem formar um triangulo.\n");
    }

    return 0;
}
