/*
Função: mostra o cubo de um número se ele for maior que 5 e menor que 20,
Autor: Vitor Carvalho Ayala
Data de criação: 01/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1; 
	printf("insira um número: ");
	scanf("%f", &num1);
	if(num1>5 and num1<20){
		num1 = num1 * num1 * num1;
		printf("o cubo do número é: %.2f" ,num1);
	}
	else{
		printf("o número informado não é maior que 5 nem menor que 20");
	}
	return 0;
}
