/*
Fun��o: calcula o pre�o do sal�rio do funcion�rio
Autor:Vitor Carvalho Ayala
Data de cria��o: 29/09/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, preco;
	printf("insira o valor do produto: ");
	scanf("%f", &num1);
	printf("insira o percentual de aumento do sal�rio: ");
	scanf("%f", &num2);
	preco = ((num1 * num2) / 100) + num1;
	printf("O pre�o do sal�rio novo �: %.2f" ,preco, "reais");
	return 0;
}
