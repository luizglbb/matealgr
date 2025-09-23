int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Os numeros sao iguais.\n");
    } else {
        printf("Os numeros sao diferentes.\n");
        if (num1 > num2) {
            printf("O primeiro numero (%d) eh o maior.\n", num1);
        } else {
            printf("O segundo numero (%d) eh o maior.\n", num2);
        }
    }

    return 0;
}
