#include <stdio.h>
// questão 43
int main()
{
    double massai, massaf;
    int tempo = 0;
    
    printf ("Digite a massa inicial em gramas: ");
    scanf ("%lf", &massai);
    
    massaf = massai;
    
    while (massaf>=0.5){
        massaf = massaf/2;
        tempo = tempo + 50;
        
    }
    printf ("\nA massa final: %.2lf, em %d tempo", massaf, tempo);
    
  
       
    
    
    return 0;

}