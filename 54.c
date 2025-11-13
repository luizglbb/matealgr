//questão 54
#include <stdio.h>

int main(){
    int v[10] = {10, 25, 35, 44, 58, 7, 18, 30, 9, 99}, i;
    float s=0, media;
    int acima = 0;
    
    
    for (i=0; i<10; i++){
        s += v[i];
    }
   media = s / 10;
   
   for (i=0;i<10;i++){
       if (v[i]> media){
           acima++;
       }
   }
   
   
   printf ("%.2f", media);
   printf ("\nacima da media %d", acima);


    return 0;
}
