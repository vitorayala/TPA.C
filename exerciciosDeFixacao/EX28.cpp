/*
Fun��o: calcular a tabuada de 7
Autor: Vitor Carvalho Ayala
Data de cria��o: 16/10/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int m = 0;
	printf("\nTabuda de 7\n");
	for(int p = 0; p<=10; p++){
		m = 7 * p;
		printf("7 X %i = %i\n", p, m);
	}
	return 0;
}
