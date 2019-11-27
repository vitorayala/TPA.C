/*
Função: faz operações com numeros reais
Autor: Vitor Carvalho Ayala
Data de criação: 09/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1 = 0, num2 = 0;
	int opr = 0;
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &num1);
	printf("Insira o segundo valor: ");
	scanf("%f", &num2);
	printf("Qual operação voce deseja fazer agora:\n"
	"Digite 1 para adição\n"
	"Digite 2 para subtração\n"
	"Digite 3 para multiplicação\n"
	"Digite 4 para divisão\n");
	scanf("%i", &opr);
	
	switch(opr){
		case 1:
			num1 = num1 + num2;
			printf("O resultado da soma é %.2f", num1);
			break;
		case 2:
			num1 = num1 - num2;
			printf("O resultado da subtração é %.2f", num1);
			break;
		case 3:
			num1 = num1 * num2;
			printf("O resultado da multiplicação é %.2f", num1);
			break;
		case 4:
			num1 = num1 / num2;
			printf("O resultado da divisão é %.2f", num1);
			break;
	}
	return 0;
}
