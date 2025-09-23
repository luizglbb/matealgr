#include <stdio.h>
int main()
{
    int B, produto;
    const int A = 10;
    int antecessor, sucessor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &B);
    antecessor = B - 1;
    sucessor = B + 1;
    printf("O antecessor de %d é %d e o sucessor é %d", B, antecessor, sucessor);

    return 0;
}
