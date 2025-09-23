#include <stdio.h>

int main() {
    int valor, cedulas;

    printf("Digite o valor inteiro a ser sacado: R$ ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido. Digite um valor positivo.\n");
        return 1;
    }
    
    printf("\nQuantidade de cedulas:\n");

    // Cédulas de 100
    cedulas = valor / 100;
    if (cedulas > 0) {
        printf("%d cedula(s) de R$ 100\n", cedulas);
        valor = valor % 100; // Ou valor %= 100;
    }

    // Cédulas de 50
    cedulas = valor / 50;
    if (cedulas > 0) {
        printf("%d cedula(s) de R$ 50\n", cedulas);
        valor %= 50;
    }

    // Cédulas de 20
    cedulas = valor / 20;
    if (cedulas > 0) {
        printf("%d cedula(s) de R$ 20\n", cedulas);
        valor %= 20;
    }

    // Cédulas de 10
    cedulas = valor / 10;
    if (cedulas > 0) {
        printf("%d cedula(s) de R$ 10\n", cedulas);
        valor %= 10;
    }

    // Cédulas de 5
    cedulas = valor / 5;
    if (cedulas > 0) {
        printf("%d cedula(s) de R$ 5\n", cedulas);
        valor %= 5;
    }
    
    // Cédulas de 2
    cedulas = valor / 2;
    if (cedulas > 0) {
        printf("%d cedula(s) de R$ 2\n", cedulas);
        valor %= 2;
    }

    // Cédulas de 1
    cedulas = valor / 1;
    if (cedulas > 0) {
        printf("%d cedula(s) de R$ 1\n", cedulas);
    }

    return 0;
}
