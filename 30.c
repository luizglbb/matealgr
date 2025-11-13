/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//Questão 30
int main()
{
        int i, idade, maiores =0;
        
        for (i=1; i <=10; i++){
            printf("Qual a sua idade? ");
            scanf ("%d", &idade);
            if (idade <= 18){
                maiores++;
            }
        }
        printf ("Voce tem %d maiores de idade", maiores);
    
    
}

