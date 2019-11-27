/*
Função: mostra qual de dois números é maior
Autor: Vitor Carvalho Ayala
Data de criação: 01/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2; 
	printf("insira o primeiro número: ");
	scanf("%f", &num1);
	printf("insira o segundo número: ");
	scanf("%f", &num2);
	if(num1>num2){
		printf("o maior número é: %.2f" ,num1);
	}
	if(num2>num1){
		printf("o maior número é: %.2f" ,num2);
	}
	else{
		 printf("os números são iguais");
	}
	return 0;
}
