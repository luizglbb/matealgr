#include <stdio.h>
/* o include do STANDART IN/OUT possui funçõe de entrada e saída de dados */
// valor constante (não muda)
int main() {
int B, produto;
const int A = 10;
    printf("digite um valor inteiro: ");
    scanf("%d", &B);
    /*para receber valores do teclado tem 2 parametros ->
    1: "%tipo" indica o tipo de dado
    2: &variavel indica a variavel*/
    produto = A * B;
    printf("o valor do produto de %d por %d resulta em %d", A, B, produto);
    return 0;
}
