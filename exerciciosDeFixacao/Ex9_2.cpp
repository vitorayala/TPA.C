/*
Fun��o: somar 50 a um n�mero se ele for maior que 100
Autor: Vitor Carvalho Ayala
Data de cria��o: 01/10/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1; 
	printf("insira um n�mero: ");
	scanf("%f", &num1);
	if(num1>100){
		num1 = num1 * num1 * num1;
		printf("o cubo do n�mero �: %.2f" ,num1);
		return 0;
	}
	else{
		printf("o n�mero informado n�o � maior que 100");
	}
	return 0;
}
