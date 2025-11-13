
#include <stdio.h>
#include <math.h>
//Questão 52
int main()
{ 
   
    int v [10] = {10, 20, 30, 40, 50, 25, 60, 90, 55, 7};
    int  i;
    float soma=0;
    
    for (i=0; i<10; i++){
        soma += v[i];
    }
    
    printf ("A soma das 10 posições: %.2f", soma);
   
    

return 0;
}


