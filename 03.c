#include <stdio.h>

int main() {

    int x, y, quociente, resto;

   
    printf("Digite o primeiro numero inteiro (x): ");
    scanf("%d", &x);
    
    printf("Digite o segundo numero inteiro (y): ");
    scanf("%d", &y);

    
    if (y != 0) {
      
        quociente = x / y;
        
      
        resto = x % y;

       
        printf("O quociente da divisao de %d por %d eh: %d\n", x, y, quociente);
        printf("O resto da divisao de %d por %d eh: %d\n", x, y, resto);
    } else {
      
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
