/*
Fun��o: calcular o fatorial de um n�mero digitado pelo usu�rio 
Autor: Vitor Carvalho Ayala
Data de cria��o: 16/10/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int m = 0, r = 0;
	printf("digite um n�mero: ");
	scanf("%i", &m);
	printf("\nTabuda de %i\n",m);
	for(int p = 0; p<=10; p++){
		r = m * p;
		printf("%i X %i = %i\n", m, p, r);
	}
	return 0;
}
