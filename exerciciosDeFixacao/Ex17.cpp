/*
Função: informa se o número digitado pelo usuário é par ou impar
Autor: Vitor Carvalho Ayala
Data de criação: 09/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num, quo, res;
	
	printf("insira o número: ");
	scanf("%i", &num);
	quo = num / 2;
	res = num - quo * 2;
	if(res == 0){
		printf("o número %i é par", num);
	}
	else{
	 printf("o número %i é impar", num);
	}
	return 0;
}
