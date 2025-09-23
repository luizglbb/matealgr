#include <stdio.h>

int main() {
    float media1, media2, soma_das_medias, media_das_medias;
    
    // Números fixos para o primeiro cálculo
    int num1_a = 7, num1_b = 8, num1_c = 9;
    
    // Números fixos para o segundo cálculo
    int num2_a = 4, num2_b = 5, num2_c = 6;
    
    // Calcula a média dos números 7, 8 e 9
    media1 = (float)(num1_a + num1_b + num1_c) / 3;
    
    // Calcula a média dos números 4, 5 e 6
    media2 = (float)(num2_a + num2_b + num2_c) / 3;
    
    // Calcula a soma das duas médias
    soma_das_medias = media1 + media2;
    
    // Calcula a média das médias
    media_das_medias = soma_das_medias / 2;
    
    // Mostra os resultados
    printf("Media dos numeros 7, 8 e 9: %.2f\n", media1);
    printf("Media dos numeros 4, 5 e 6: %.2f\n", media2);
    printf("Soma das duas medias: %.2f\n", soma_das_medias);
    printf("Media das medias: %.2f\n", media_das_medias);

    return 0;
}
