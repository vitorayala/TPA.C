/*
Fun��o: calcula a �rea de um tri�ngulo
Autor:Vitor Carvalho Ayala
Data de cria��o: 29/09/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, area;
	printf("insira a altura de um tri�ngulo: ");
	scanf("%f", &num1);
	printf("insira a base de um tri�ngulo: ");
	scanf("%f", &num2);
	area = (num1 * num2) / 2;
	printf("A �rea do tri�ngulo �: %.2f" ,area);
	return 0;
}
