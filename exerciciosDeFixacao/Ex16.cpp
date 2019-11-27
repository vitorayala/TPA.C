/*
Função: lê o nome de um aluno e diz se ele foi aprovado ou não
Autor: Vitor Carvalho Ayala
Data de criação: 01/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1;
	char nome; 
	
	printf("insira o nome do aluno: ");
	scanf("%s", &nome);
	printf("insira a nota do aluno: ");
	scanf("%f", &num1);
	if(num1==7 or num1>7){
		printf("%s foi aprovado", nom);
		return 0;
	}
	else{
	 printf("%s foi reprovado", nom);
	}
	return 0;
}
