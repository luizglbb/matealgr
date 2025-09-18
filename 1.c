#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"");
char nome[10];
int ano_nasc;
printf("qual o seu nome?");
//scanf("%s", &nome);
fgets(nome ,10, stdin);
fflush(stdin);
printf ("olá %s.", nome);
printf("\ndigite o ano de seu nascimento: ");
scanf("%i",&ano_nasc);
if(2025-ano_nasc>=18){
printf("%s é maior de idade", nome);
}
else{
printf("%s é menor de idade", nome);
}

float n1=7.5, n2=6, m;
printf("\nDigite sua primeira nota: ");
	scanf("%f", &n1);
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
m=(n1+n2)/2;
if (m>=7){
	printf("\nAprovado.");
} 
	else
		if((m>=4)&&(m<7)){
		printf("\nNa final.");
	}
	else {
		printf("\nReprovado.");
	}
	
	return 0;
}