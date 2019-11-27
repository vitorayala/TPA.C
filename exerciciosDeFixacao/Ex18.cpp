/*
Função: informa o dia da semana de acordo com o número digitado e fecha o programa caso não digite um número netre 1 à 7
Autor: Vitor Carvalho Ayala
Data de criação: 09/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int dia;
	
	printf("insira o número: ");
	scanf("%i", &dia);
	
		while(dia == 1){
		printf("\n Hoje é Domingo");
		break;
		}
	
		while(dia == 2){
		printf("\n Hoje é Segunda-Feira");
		break;
		}
	
		while(dia == 3){
		printf("\n Hoje é Terça-Feira");
		break;
		}
	
		while(dia == 4){
		printf("\n Hoje é Quarta-Feira");
		break;
		}
	
		while(dia == 5){
		printf("\n Hoje é Quinta-Feira");
		break;
		}
	
		while(dia == 6){
		printf("\n Hoje é Sexta-Feira");
		break;
		}
	
		while(dia == 7){
		printf("\n Hoje é Sabádo");
		break;
		}
		while(dia != 1 and dia != 2 and dia != 3 and dia != 4 and dia != 5 and dia != 6 and dia != 7){
			printf("\n Esse dia da semana não existe");
			break;
		}
	
	return 0;
}
