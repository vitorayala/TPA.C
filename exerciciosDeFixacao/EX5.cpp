/*
Fun��o: calcula o pre�o de um terreno
Autor:Vitor Carvalho Ayala
Data de cria��o: 29/09/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, num3, area, preco;
	printf("insira a base do terreno: ");
	scanf("%f", &num1);
	printf("insira a altura de um terreno: ");
	scanf("%f", &num2);
	printf("insira o pre�o do metro quadrado do terreno: ");
	scanf("%f", &num3);
	area = num1 * num2;
	preco = area * num3;
	printf("o pre�o do terreno �: %.2f" ,preco);
	printf(" reais")
	return 0;
}
