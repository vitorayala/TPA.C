/*
Fun��o: calcula a �rea de um retangulo
Autor:Vitor Carvalho Ayala
Data de cria��o: 29/09/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1 = 0, num2 = 0, area = 0;
	printf("insira a altura de um ret�ngulo: ");
	scanf("%f", &num1);
	printf("insira a base de um ret�ngulo: ");
	scanf("%f", &num2);
	area = num1 * num2;
	printf("A �rea do quadrado �: %.2f" ,area);
	return 0;
}
