#include <stdio.h>
// questão 39
int main()
{
    int a = 1, b = 1, c, i;
    
    printf ("%d, %d, ", a, b);
    
    for (i=3; i<=10; i++){
        c = a +b;
        a =  b;
        b = c;
        printf ("%d, ", c);
       
    }
    
    return 0;
}
