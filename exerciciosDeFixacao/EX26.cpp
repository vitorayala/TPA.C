/*
Fun��o: calcular fatorial do n�mero digitado pelo usu�rio 
Autor: Vitor Carvalho Ayala
Data de cria��o: 16/10/2019
Data de altera��o: --/--/----
*/

#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int m = 0, res = 0, v = 0, c = 0, cc = 0;
	
	printf("digite um n�mero: ");
	scanf("%i", &m);
	cc = m - 2;
	res = m;
	while(cc>=1){
		cc = cc - 1;
		c =  c + 1;
		v = ((m - c) * res);
		res = v;
	}
	printf(" o fatorial de %i � %i", m, res);
	return 0;
}
