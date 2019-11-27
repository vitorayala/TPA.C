/*
Função: somar 50 a um número se ele for maior que 50,
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
	if(num1>0){
		printf("%f.2" ,num1);
		printf(" é positivo");
	}
	else{
		printf("%f.2" ,num1, " é negativo");
		printf(" é negativo");
	}
	return 0;
}
