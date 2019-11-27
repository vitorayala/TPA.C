/*
Função: mostra três números em ordem crescente
Autor: Vitor Carvalho Ayala
Data de criação: 01/10/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num1, num2, num3; 
	printf("insira o primeiro número: ");
	scanf("%f", &num1);
	printf("insira o segundo número: ");
	scanf("%f", &num2);
	printf("insira o terceiro número: ");
	scanf("%f", &num3);
	if(num1<num2 and num1<num3){
	 printf("a ordem é: %.2f" ,num1);
	 printf(", %.2f" ,num2);
	 printf(", %.2f" ,num3);
	 return 0;
	 }
	if(num1<num3 and num3<num2){
	 printf("a ordem é: %.2f" ,num1);
	 printf(", %.2f" ,num3);
	 printf(", %.2f" ,num2);
	 return 0;
	 }
	if(num2<num1 and num1<num3){
	 printf("a ordem é: %.2f" ,num2);
	 printf(", %.2f" ,num1);
	 printf(", %.2f" ,num3);
     return 0;	
	 }
	if(num2<num3 and num3<num1){
	 printf("a ordem é: %.2f" ,num2);
	 printf(", %.2f" ,num3);
	 printf(", %.2f" ,num1);
	 return 0;
	 }
	if(num3<num1 and num1<num2){
	 printf("a ordem é: %.2f" ,num3);
	 printf(", %.2f" ,num1);
	 printf(", %.2f" ,num2);
	 return 0;
	 }
	if(num3<num2 and num2<num1){
	 printf("a ordem é: %.2f" ,num3);
	 printf(", %.2f" ,num2);
	 printf(", %.2f" ,num1);
	 return 0;
     }
	else{
	 printf("todos os números são iguais");
	 return 0;
     }
}
