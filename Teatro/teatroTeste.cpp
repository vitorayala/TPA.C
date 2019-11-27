#include <iostream>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int i = 0, j = 0, op = 0, espc = 0, cont = 0, ing = 0, esco = 0,;
	char ass = ' ', tab[20][25], pro = ' ';
	
	printf("deseja iniciar o programa?... ");
	scanf("%s", pro);
	
		
		if(pro == "SIM"){
		
		printf("1. Escolha o tamanho do Teatro e o valor do ingresso/n");
		printf("2. Abrir um espetáculo/n");
		printf("3. Vender ou reservar um lugar/n");
		printf("4. Verificar mapa do teatro/n");
		printf("5. Verificar parciais/n");
		printf("6. Encerrar o espetáculo/n");
		
		printf("O que deseja fazer?...");
		scanf("%i", &esco);
		
		case(1){
			
			break;
		}
		
		case(2){
			
			break;
		}
	
		case(3){
			
			break;
		}
		
		case(4){
			
			break;
		}
		
		case(5){
			
			break;
		}
		
		case(6){
			
			break;
		}
		printf("\n");
		system("pause");
		
		}
		else if(pro == "NÃO"){
			
		printf("\n");
		system("pause");
		
		}
		
		else if(pro != "NÃO", or pro != "SIM"){
			printf("Digite 'SIM' ou 'NÃO' ")
		}
	}
	
