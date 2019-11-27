/*
Função: calcula a área de um triângulo
Autor:Vitor Carvalho Ayala
Data de criação: 29/09/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, area;
	printf("insira a altura de um triângulo: ");
	scanf("%f", &num1);
	printf("insira a base de um triângulo: ");
	scanf("%f", &num2);
	area = (num1 * num2) / 2;
	printf("A área do triângulo é: %.2f" ,area);
	return 0;
}
