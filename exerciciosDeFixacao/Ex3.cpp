/*
Fun��o: calcula a �rea de um circulo
Autor:Vitor Carvalho Ayala
Data de cria��o: 29/09/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, pi=3.14, area;
	printf("insira o raio de um circulo: ");
	scanf("%f", &num1);
	area = 2 * pi * num1;
	printf("a �rea do circulo �: %.2f" ,area);
	return 0;
}
