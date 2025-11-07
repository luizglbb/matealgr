#include <stdio.h>

int main(){
    
    float vetor0[10],vetor[10]={1,3.5,5,47,69,9.4,17,8,9,9.7}, somar;
    int i;
    
    for (i=0;i<10;i++){
        //printf("Digite o valor para o vetor0[%i]", i);
        //scanf("%f", &vetor0[i]);
        //somar += vetor0[i];
        somar += vetor[i];
    }
    
    printf("somar = %.2f", somar);
    
    return 0;
}
