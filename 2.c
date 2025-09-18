#include <stdio.h>
#include <locale.h>
int main (){
setlocale(LC_ALL,"");
int numero;
printf("Digite um número inteiro: ");
scanf("%i", &numero);

if(numero == 0){
	printf("O número é zero");
}
else
	if(numero<0){
		printf("O número é negativo");
}
else{
	printf("O número é positivo");
}
return 0;
}