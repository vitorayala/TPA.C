/*
Fun��o: exibe o mes conforme o n�mero
Autor: Vitor Carvalho Ayala
Data de cria��o: 09/10/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int mes = 0;
	printf("Digite o n�mero do m�s para ver seu nome: ");
	scanf("%i", &mes);
	switch(mes){
		case 1:
		printf("	Janeiro");
		break;
		
		case 2:
		printf("	Fevereiro");
		break;
		
		case 3:
		printf("	Mar�o");
		break;
		
		case 4:
		printf("	Abril");
		break;
		
		case 5:
		printf("	Maio");
		break;
		
		case 6:
		printf("	Junho");
		break;
		
		case 7:
		printf("	Julho");
		break;
		
		case 8:
		printf("	Agosto");
		break;
		
		case 9:
		printf("	Setembro");
		break;
		
		case 10:
		printf("	Outubro");
		break;
		
		case 11:
		printf("	Novembro");
		break;
		
		case 12:
		printf("	Dezemebro");
		break;
		
		default:
		printf("	Valor inserido inv�lido");
	}
	return 0;
}
