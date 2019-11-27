#include <iostream>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int i = 0, j = 0, op = 0, espc = 0, cont = 0;
	char ass = ' ', tab[20][25];
	
	printf("o nosso teatro tem 500 lugares, de 20x25 \n");
	
	printf("o ingressso custa R$ 10,00 \n");
	
	printf("deseja começar um teatro? Se sim digite 1:  \n");
	scanf("%i", &espc);
	
	if(espc = 1){
	
	printf("deseja escolher lugar para reserva?\n");
	
	printf("se deseja pagar inteira digite 1, se deseja pagar meia digite 2: \n");
	scanf("%i", &op);
	
		while (op== 1) {
		
			for (i = 0; i < 20; i++){
        	for (j = 0; j < 25; j++){
          		tab[i][j] = 'D';
          		}
   			}
   		
   			for (i = 0; i < 20; i++){
        		for (j = 0; j < 25; j++){
        		cont = cont + 1;
          		printf(" %c|", tab[0][0]);
          		printf("");
          			if(cont == 25){
          			printf("\n");
          			cont = 0;
				  	}
          		}
   			}
   			
   			for(i = 0; i <= 1; i++){
        		
				printf("Decida qual poltrona você quer!\n");
				printf("informe a linha do assento: ");
				scanf("%i", &i);
				printf("informe a coluna do seu assento: ");
				scanf("%i", &j);
				if(tab[i-1][j-1] == 'D'){
          			tab[i-1][j-1] = 'C';
          		}
          		
          	}
          		
          		for (i = 0; i < 20; i++){
        			for (j = 0; j < 25; j++){
        			cont = cont + 1;
          			printf(" %c|", tab[i][j]);
          			printf("");
          				if(cont == 25){
          				printf("\n");
          				cont = 0;
				  		}
				  	}
				  }
   		
			break; }
	}
		printf("\n");
		system("pause");
}
	
