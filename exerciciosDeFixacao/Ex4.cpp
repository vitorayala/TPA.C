/*
Fun��o: calcula o cubo da soma de tr�s n�meros
Autor:Vitor Carvalho Ayala
Data de cria��o: 29/09/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, num3, soma, cubo;
	printf("insira um n�mero: ");
	scanf("%f", &num1);
	printf("insira mais um n�mero: ");
	scanf("%f", &num2);
	printf("insira mais outo n�mero: ");
	scanf("%f", &num3);
	soma = num1 + num2 + num3 ;
	cubo = soma * soma * soma;
	printf("O cubo dos n�mero �: %.2f" ,cubo);
	return 0;
}
