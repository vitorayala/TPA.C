/*
Fun��o: mostra qual de 3 n�meros � maior
Autor: Vitor Carvalho Ayala
Data de cria��o: 01/10/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, num3; 
	printf("insira o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("insira o segundo n�mero: ");
	scanf("%f", &num2);
	printf("insira o terceiro n�mero: ");
	scanf("%f", &num3);
	if(num1>num2 and num1>num3){
		printf("o maior n�mero �: %.2f" ,num1);
		return 0;
	}
	if(num2>num1 and num2>num3){
		printf("o maior n�mero �: %.2f" ,num2);
		return 0;
	}
	if(num3>num1 and num3>num2){
		printf("o maior n�mero �: %.2f" ,num3);
		return 0;
	}
	else{
	 printf("os n�meros s�o iguais");
	}
	return 0;
}
