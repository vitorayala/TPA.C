/*
Função: calcular e mostrar o quociente e o resto de uma divisão
Autor: Vitor Carvalho Ayala
Data de criação: 30/09/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num1, num2;
	int quoc, resto;
	printf("insira o primeiro número: ");
	scanf("%i", &num1);
	printf("insira o segundo número: ");
	scanf("%i", &num2);
	quoc = num1 / num2;
	resto = num1 - (quoc * num2);
	printf("O quociente é: %i" ,quoc);
	printf(" E o resto é: %i" ,resto);
	return 0;
}
