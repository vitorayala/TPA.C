/*
Fun��o: somar 50 a um n�mero se ele for maior que 50,
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
	if(num1>0){
		printf("%f.2" ,num1);
		printf(" � positivo");
	}
	else{
		printf("%f.2" ,num1, " � negativo");
		printf(" � negativo");
	}
	return 0;
}
