/*
Fun��o: calcula a m�dia das notas de um aluno
Autor:Vitor Carvalho Ayala
Data de cria��o: 30/09/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, num3, num4, total;
	printf("insira a 1� nota do aluno: ");
	scanf("%f", &num1);
	printf("insira a 2� nota do aluno: ");
	scanf("%f", &num2);
	printf("insira a 3� nota do aluno: ");
	scanf("%f", &num3);
	printf("insira a 4� nota do aluno: ");
	scanf("%f", &num4);
	total = (num1 + num2 + num3 + num4) / 4;
	printf("a nota final do aluno �: %.2f" ,total);
	return 0;
}
