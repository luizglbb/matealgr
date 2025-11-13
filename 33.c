
#include <stdio.h>
//Questão 33
int main()
{
    int i, contador = 0, soma = 0;
    float media;
    
    for (i=14; i<73; i+=2){
        soma +=i;
        contador++;
    }
    media = soma / contador;
    printf ("A média dos numeros pares entre 13 e 73 é: %.2f", media);
    
   return 0; 
}


