/*
Fun��o: calcular e mostrar o quociente e o resto de uma divis�o
Autor: Vitor Carvalho Ayala
Data de cria��o: 30/09/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num1, num2;
	int quoc, resto;
	printf("insira o primeiro n�mero: ");
	scanf("%i", &num1);
	printf("insira o segundo n�mero: ");
	scanf("%i", &num2);
	quoc = num1 / num2;
	resto = num1 - (quoc * num2);
	printf("O quociente �: %i" ,quoc);
	printf(" E o resto �: %i" ,resto);
	return 0;
}
