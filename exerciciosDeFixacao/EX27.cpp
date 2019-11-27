/*
Função: soma todos os numeros impares entre dois valores informados
Autor: Vitor Carvalho Ayala
Data de criação: 16/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0, num2 = 0, res = 0;
	printf("insira o primeiro numero: ");
		scanf("%i", &num);
	printf("insira o segundo numero: ");
		scanf("%i", &num2);
	if(num < num2){
		while(num <= num2){
			if(num % 2 != 0){
				res = res + num;
				num = num + 1;
			}
			else{
				num = num + 1;
			}
		}	
	printf("%i", res);
	}
	
	if(num2 <= num){
		while(num2 <= num){
			if(num2 % 2 != 0){
				res = res + num2;
				num2 = num2 + 1;
			}
			else{
				num2 = num2 + 1;
			}
		}
	printf("%i", res);
	}
	return 0;
}
