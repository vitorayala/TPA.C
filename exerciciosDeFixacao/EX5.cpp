/*
Função: calcula o preço de um terreno
Autor:Vitor Carvalho Ayala
Data de criação: 29/09/2019
Data de alteração: --/--/----
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
	printf("insira o preço do metro quadrado do terreno: ");
	scanf("%f", &num3);
	area = num1 * num2;
	preco = area * num3;
	printf("o preço do terreno é: %.2f" ,preco);
	printf(" reais")
	return 0;
}
