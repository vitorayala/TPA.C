/*
Função: calcula a área de um retangulo
Autor:Vitor Carvalho Ayala
Data de criação: 29/09/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1 = 0, num2 = 0, area = 0;
	printf("insira a altura de um retângulo: ");
	scanf("%f", &num1);
	printf("insira a base de um retângulo: ");
	scanf("%f", &num2);
	area = num1 * num2;
	printf("A área do quadrado é: %.2f" ,area);
	return 0;
}
