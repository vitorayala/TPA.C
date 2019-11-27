/*
Função: calcula o preço do salário do funcionário
Autor:Vitor Carvalho Ayala
Data de criação: 29/09/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, preco;
	printf("insira o valor do produto: ");
	scanf("%f", &num1);
	printf("insira o percentual de aumento do salário: ");
	scanf("%f", &num2);
	preco = ((num1 * num2) / 100) + num1;
	printf("O preço do salário novo é: %.2f" ,preco, "reais");
	return 0;
}
