/*
Função: le exibe o nome de 5 pessoas
Autor: Vitor Carvalho Ayala
Data de criação: 16/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	char nome;
	for(int c = 0; c < 6; c++){
		printf("insira o nome da %i pessoa: ", c+1);
		scanf("%s", &nome);
		printf("bom dia %s", nome);
	}
	return 0;
}
