/*
Fun��o: apresenta o nome e o pre�o de um lanche apartir do seu codigo
Autor: Vitor Carvalho Ayala
Data de cria��o: 09/10/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0;
	printf("Digite 1 para informa��es do cachorro quente\n"
	"Digite 2 para informa��es do x-salada\n"
	"Digite 3 para informa��es do x-burguer\n"
	"Digite 4 para informa��es do x-tudo\n");
	scanf("%i", &num);
	switch(num){
	case 1:
	printf("Seu pedido foi um cachorro quente pre�o = 3,50");
	break;
	
	case 2:
	printf("Seu pedido foi x-salada pre�o = 5,00");
	break;
	
	case 3:
	printf("Seu pedido foi um x-burguer pre�o = 8,90");
	break;
	
	case 4:
	printf("Seu pedido foi um x-tudo pre�o = 12,70");
	break;
	
	default:
		printf("C�digo inv�lido");
	}
		return 0;	
}

