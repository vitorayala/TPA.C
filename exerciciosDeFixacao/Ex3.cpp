/*
Função: calcula a área de um circulo
Autor:Vitor Carvalho Ayala
Data de criação: 29/09/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, pi=3.14, area;
	printf("insira o raio de um circulo: ");
	scanf("%f", &num1);
	area = 2 * pi * num1;
	printf("a área do circulo é: %.2f" ,area);
	return 0;
}
