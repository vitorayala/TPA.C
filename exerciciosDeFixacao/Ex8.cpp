/*
Função: calcula a média das notas de um aluno
Autor:Vitor Carvalho Ayala
Data de criação: 30/09/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, num3, num4, total;
	printf("insira a 1ª nota do aluno: ");
	scanf("%f", &num1);
	printf("insira a 2ª nota do aluno: ");
	scanf("%f", &num2);
	printf("insira a 3ª nota do aluno: ");
	scanf("%f", &num3);
	printf("insira a 4ª nota do aluno: ");
	scanf("%f", &num4);
	total = (num1 + num2 + num3 + num4) / 4;
	printf("a nota final do aluno é: %.2f" ,total);
	return 0;
}
