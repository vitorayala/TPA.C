/*
Fun��o: informa o dia da semana de acordo com o n�mero digitado e fecha o programa caso n�o digite um n�mero netre 1 � 7
Autor: Vitor Carvalho Ayala
Data de cria��o: 09/10/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int dia;
	
	printf("insira o n�mero: ");
	scanf("%i", &dia);
	
		while(dia == 1){
		printf("\n Hoje � Domingo");
		break;
		}
	
		while(dia == 2){
		printf("\n Hoje � Segunda-Feira");
		break;
		}
	
		while(dia == 3){
		printf("\n Hoje � Ter�a-Feira");
		break;
		}
	
		while(dia == 4){
		printf("\n Hoje � Quarta-Feira");
		break;
		}
	
		while(dia == 5){
		printf("\n Hoje � Quinta-Feira");
		break;
		}
	
		while(dia == 6){
		printf("\n Hoje � Sexta-Feira");
		break;
		}
	
		while(dia == 7){
		printf("\n Hoje � Sab�do");
		break;
		}
		while(dia != 1 and dia != 2 and dia != 3 and dia != 4 and dia != 5 and dia != 6 and dia != 7){
			printf("\n Esse dia da semana n�o existe");
			break;
		}
	
	return 0;
}
