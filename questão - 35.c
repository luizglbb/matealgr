
#include <stdio.h>
//Questão 35
int main()
{
    int h=0, n, i;
    
    printf ("Digite um valor para N: ");
    scanf ("%d", &n);
    
    for (i = 1; i <= n; i++){
        h = h + i;
        
    }
    printf ("O valor de H é: %d\n", h);
    
   return 0; 
}


