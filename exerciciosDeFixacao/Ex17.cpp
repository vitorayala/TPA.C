/*
Fun��o: informa se o n�mero digitado pelo usu�rio � par ou impar
Autor: Vitor Carvalho Ayala
Data de cria��o: 09/10/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num, quo, res;
	
	printf("insira o n�mero: ");
	scanf("%i", &num);
	quo = num / 2;
	res = num - quo * 2;
	if(res == 0){
		printf("o n�mero %i � par", num);
	}
	else{
	 printf("o n�mero %i � impar", num);
	}
	return 0;
}
