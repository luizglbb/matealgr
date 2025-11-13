
#include <stdio.h>
#include <math.h>
//Questão 44
int main()
{
   
    float n, result=0, media;
    int i=0;
    
     while (1){
        printf ("Escreva um número inteiro: ");
        scanf ("%f", &n);
        if (n < 0) {
            break;
        }
     result += n;
    i++;
    }
    if (i > 0){
        media = result / i;
        printf ("A média dos números inteiros positivos:%.2f ", media);
    } 
}


