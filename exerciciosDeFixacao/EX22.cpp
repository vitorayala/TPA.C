/*
Fun��o: faz opera��es com numeros reais
Autor: Vitor Carvalho Ayala
Data de cria��o: 09/10/2019
Data de altera��o: --/--/----
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
	printf("Qual opera��o voce deseja fazer agora:\n"
	"Digite 1 para adi��o\n"
	"Digite 2 para subtra��o\n"
	"Digite 3 para multiplica��o\n"
	"Digite 4 para divis�o\n");
	scanf("%i", &opr);
	
	switch(opr){
		case 1:
			num1 = num1 + num2;
			printf("O resultado da soma � %.2f", num1);
			break;
		case 2:
			num1 = num1 - num2;
			printf("O resultado da subtra��o � %.2f", num1);
			break;
		case 3:
			num1 = num1 * num2;
			printf("O resultado da multiplica��o � %.2f", num1);
			break;
		case 4:
			num1 = num1 / num2;
			printf("O resultado da divis�o � %.2f", num1);
			break;
	}
	return 0;
}
