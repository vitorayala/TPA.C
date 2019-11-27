/*
Função: apresenta o nome e o preço de um lanche apartir do seu codigo
Autor: Vitor Carvalho Ayala
Data de criação: 09/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0;
	printf("Digite 1 para informações do cachorro quente\n"
	"Digite 2 para informações do x-salada\n"
	"Digite 3 para informações do x-burguer\n"
	"Digite 4 para informações do x-tudo\n");
	scanf("%i", &num);
	switch(num){
	case 1:
	printf("Seu pedido foi um cachorro quente preço = 3,50");
	break;
	
	case 2:
	printf("Seu pedido foi x-salada preço = 5,00");
	break;
	
	case 3:
	printf("Seu pedido foi um x-burguer preço = 8,90");
	break;
	
	case 4:
	printf("Seu pedido foi um x-tudo preço = 12,70");
	break;
	
	default:
		printf("Código inválido");
	}
		return 0;	
}

