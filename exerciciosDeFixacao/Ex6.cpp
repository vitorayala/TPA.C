/*
Fun��o: calcula o pre�o de uam presta��o atrasada
Autor:Vitor Carvalho Ayala
Data de cria��o: 29/09/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, num3, preco;
	printf("insira o valor do produto: ");
	scanf("%f", &num1);
	printf("insira a taxa cobrada por cada dia atrasado: ");
	scanf("%f", &num2);
	printf("insira quantos dias atrasou: ");
	scanf("%f", &num3);
	preco = num1 + (num1 * (num2 / 100) * num3);
	printf("O pre�o da presta��o �: %.2f" ,preco, "reais");
	return 0;
}
