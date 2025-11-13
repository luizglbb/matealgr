
#include <stdio.h>
//Questão 34
int main()
{
    int i, contador, dentro=0, fora=0;
    
    for (i=1; i<=5; i++){
        printf ("Escreva um número: ");
        scanf("%d", &contador);
        if (contador >= 10 && contador <=50){
            dentro++;
        }else{ 
            fora++;
        }
    }
        printf ("Essa foi a quantidade entre 50 e 100:%d\n", dentro);
        printf("Quantidade de números fora desse intervalo: %d\n", fora);
   return 0; 
}


