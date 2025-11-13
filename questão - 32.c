
#include <stdio.h>
//Questão 32
int main()
{
    int i, maior, numero;
    
    printf ("digite um número inteiro: ");
    scanf ("%d", &numero);
    maior = numero;
    
    
    for (i=2; i<=20; i++){
        printf ("Escreva um número inteiro: ");
        scanf  ("%d", &numero);
       
        if (numero > maior){
            maior = numero;
        
        }
    }
    
    printf ("O maior número inteiro foi: %d", maior);
   
   return 0; 
}


