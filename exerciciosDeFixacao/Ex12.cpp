/*
Fun��o: mostra qual de dois n�meros � maior
Autor: Vitor Carvalho Ayala
Data de cria��o: 01/10/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2; 
	printf("insira o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("insira o segundo n�mero: ");
	scanf("%f", &num2);
	if(num1>num2){
		printf("o maior n�mero �: %.2f" ,num1);
	}
	if(num2>num1){
		printf("o maior n�mero �: %.2f" ,num2);
	}
	else{
		 printf("os n�meros s�o iguais");
	}
	return 0;
}
