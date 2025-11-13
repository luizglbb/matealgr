
#include <stdio.h>
#include <math.h>
//Questão 45
int main()
{
   
    int i, n, result;
    
    printf ("Voce quer a tabuada de qual número? ");
    scanf ("%d", &n);
    
    for (i = 1; i<=10; i++){
        result = i * n;
        printf ("%d x %d = %d\n", i, n, result);
    }
    
    
   return 0; 
}


