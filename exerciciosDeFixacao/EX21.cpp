/*
Função: mostra a quantidade de dias do mes
Autor: Vitor Carvalho Ayala
Data de criação: 09/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int mes = 0;
	printf("Digite o numero do mês para ver quantos dias ele tem: ");
	//gets(mes);
	scanf("%i", &mes);
	switch(mes){
		case 1:
			printf("31 dias");
		break;
		
		case 2:
			printf("28 dias");
		break;
		
		case 3:
			printf("30 dias");
		break;
		
		case 4:
			printf("31 dias");
		break;
		
		case 5:
			printf("30 dias");
		break;
		
		case 6:
			printf("31 dias");
		break;
		
		case 7:
			printf("30 dias");
		break;
		
		case 8:
			printf("31 dias");
		break;
		
		case 9:
			printf("30 dias");
		break;
		
		case 10:
			printf("31 dias");
		break;
		
		case 11:
			printf("30 dias");
		break;
		
		case 12:
			printf("31 dias");
		break;
		
		default:
			printf("mes invalido");
	}
	return 0;
}
