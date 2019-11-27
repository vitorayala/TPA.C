/*
Função: mostra todos os numeros pares entre os dois informados pelo usuario
Autor: Vitor Carvalho Ayala
Data de criação: 16/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0, num2 = 0;
	printf("insira o primeiro numero: ");
		scanf("%i", &num);
	printf("insira o segundo numero: ");
		scanf("%i", &num2);
	if(num < num2){
		while(num < num2){
			if(num % 2 == 0){
				printf("%i, ", num);
				num = num + 1;
			}
			else if(num % 2 != 0){
				num = num + 1;
			}
		}
	}
	else if(num2 < num){
		while(num2 < num){
			if(num2 % 2 == 0){
				printf("%i, ", num2);
				num2 = num2 + 1;
			}
			else if(num2 % 2 != 0){
				num2 = num2 + 1;
			}
		}	
	}
	return 0;
}
