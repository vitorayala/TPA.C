/*
Função: informa o quadrado de um numero informado pelo usuario e
 encerre o programa caso ele digite 0
Autor: Vitor Carvalho Ayala
Data de criação: 09/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 1, quadrado = 0;
	while(num != 0){
		printf("Digite o numero que voce deseja calcular: ");
		scanf("%i", &num);
		quadrado = num * num;
		printf("quadrado: %i\n", quadrado);
	}
	return 0;
}
