/*
Função: le e exibe o nome de 50 pessoas
Autor: Vitor Carvalho Ayala
Data de criação: 09/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	char nome[30];
	int i=0;
	while(i < 50){
		printf("Insira o nome da %i pessoa: ", i+1);
		scanf("%s", nome);
		printf("Bom dia %s\n", nome);
		i++;
	}
	return 0;
}
