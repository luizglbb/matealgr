
#include <stdio.h>
#include <math.h>
//Questão 40
int main()
{
    double expo, base, result;
    
    printf ("Digite a sua base e o seu expoente respectivamente");
    scanf ("%lf %lf", &base, &expo);
    
    result = pow(base, expo);
    
    printf ("O resultado é: %.2lf", result);
    
   return 0; 
}


