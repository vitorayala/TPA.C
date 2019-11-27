/*
Função: calcula o cubo da soma de três números
Autor:Vitor Carvalho Ayala
Data de criação: 29/09/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, num3, soma, cubo;
	printf("insira um número: ");
	scanf("%f", &num1);
	printf("insira mais um número: ");
	scanf("%f", &num2);
	printf("insira mais outo número: ");
	scanf("%f", &num3);
	soma = num1 + num2 + num3 ;
	cubo = soma * soma * soma;
	printf("O cubo dos número é: %.2f" ,cubo);
	return 0;
}
