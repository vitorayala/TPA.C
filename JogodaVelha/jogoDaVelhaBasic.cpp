/*
Função: calcula a área de um retangulo
Autor:Vitor Carvalho Ayala & Adrian Wilmer Jaquier
Data de criação: 20/11/2019
Data de alteração: --/--/----
*/

#include <iostream>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int i = 0, j = 0, ganhou = 0, p = 0, in = 0;
	char jog1 = ' ', jog2 = ' ', nom1[30], nom2[30], tab[3][3];
	
	printf("Vamos começar, boa sorte e bom jogo! \n");
	printf("Informe o nome do jogador 1: \n");
	gets(nom1);
	printf("%s ganhou",nom1);
//________jogador 1____________		
	printf("Informe o nome do jogador 2: \n");
	gets(nom2);
//________jogador 2____________		
	printf("Jogador 1 escolha seu caracter de jogo o ou x: ");
	fflush(stdin);
	scanf("%c", &jog1);
	if(jog1 == 'x'){
		jog2 = 'o';
	}
	else if(jog1 == 'o'){
		jog2 = 'x';
	}
	else{
		printf("Jogador 1 escolha seu caracter de jogo o ou x: \n");
		scanf("%c", &jog1);
	}
	//printf("Se deseja continuar jogando, digite (1); Se deseja deixar o jogo, digite (2)");
	//scanf("%i", &op);
	//printf("%c", jog1);
//		repetição de jogadas
	
	//while(op == 1){

//		jogo separado
		for (i = 0; i < 3; i++){
        	for (j = 0; j < 3; j++){
          		tab[i][j] = ' ';
          	}
        }
        while(in < 9){
        	if(in%2 == 0){
				printf("jogador 1 sua vez!");
				printf("informe a posição que quer marcar em linha: ");
				scanf("%i", &i);
				printf("informe a posição que quer marcar em coluna: ");
				scanf("%i", &j);
				if(tab[i-1][j-1] == ' '){
          			tab[i-1][j-1] = jog1;
				}
			}
			else if(in%2 == 1){
		        printf("jogador 2 sua vez!");
				printf("informe a posição que quer marcar em linha: ");
				scanf("%i", &i);
				printf("informe a posição que quer marcar em coluna: ");
				scanf("%i", &j);
				if(tab[i-1][j-1] == ' '){
	          		tab[i-1][j-1] = jog2;
	          	}
			}
			printf("\n\n	*1   *2   *3\n");
			
			printf("*1  %c  | %c  | %c  " ,tab[0][0],tab[0][1],tab[0][2], "\n");
			printf("\n+----------------+");
			printf("\n*2  %c  | %c  | %c  " ,tab[1][0],tab[1][1],tab[1][2], "\n");
			printf("\n+----------------+");
			printf("\n*3   %c | %c  | %c  \n" ,tab[2][0],tab[2][1],tab[2][2], "\n");
				
//					JOGADOR 1 VENCEU

		if(tab[0][0]==jog1 and tab[1][0]==jog1 and tab[2][0]==jog1){
			printf("é igual\n");
		
		}
			printf("Teste: %c - %c \n",jog1,tab[0][0]);
	        if(tab[0][0]==jog1 and tab[1][1]==jog1 and tab[2][2]==jog1){
	          	printf("%s ganhou!", nom1);
	          	break;
	          	//pon1 = pon1 + 1	;
	        }else if(tab[0][0]==jog1 and tab[0][1]==jog1 and tab[0][2]==jog1){
          		printf("%s ganhou!", nom1);
          	
          		//pon1 = pon1 + 1;
          	}else if(tab[1][0]==jog1 and tab[1][1]==jog1 and tab[1][2]==jog1){
          		printf("%s ganhou!", nom1);
          		break;
          		//pon1 = pon1 + 1;
          	}else if(tab[2][0]==jog1 and tab[2][1]==jog1 and tab[2][2]==jog1){
          		printf("%s ganhou!", nom1);
          		break;
          		//pon1 = pon1 + 1;
          	}else if(tab[0][0]==jog1 and tab[1][0]==jog1 and tab[2][0]==jog1){
          		printf("%s ganhou!", nom1);
          		break;
          		//pon1 = pon1 + 1	;
          	}else if(tab[0][1]==jog1 and tab[1][1]==jog1 and tab[2][1]==jog1){
          		printf("%s ganhou!", nom1);
          		break;
          		//pon1 = pon1 + 1	;
          	}else if(tab[0][2]==jog1 and tab[1][2]==jog1 and tab[2][2]==jog1){
          		printf("%s ganhou!", nom1);
          		break;
          		//pon1 = pon1 + 1;
          	}else if(tab[0][1]==jog1 and tab[1][1]==jog1 and tab[2][1]==jog1){
          		printf("%s ganhou!", nom1);
          		break;
          		//pon1 = pon1 + 1	;
          	}else if(tab[0][2]==jog1 and tab[1][1]==jog1 and tab[2][0]==jog1){
          		printf("%s ganhou!", nom1);
          		break;
          	}
	//
	//					JOGADOR 2 VENCEU
	//
			if(tab[0][0]==jog2 and tab[1][1]==jog2 and tab[2][2]==jog2){
          		printf("%s ganhou!", nom2);
          		break;
          		//pon2 = pon2 + 1	;
          	}else if(tab[0][0]==jog2 and tab[0][1]==jog2 and tab[0][2]==jog2){
          		printf("%s ganhou!", nom2);
          		break;
          		//pon2 = pon2 + 1;
          	}else if(tab[1][0]==jog2 and tab[1][1]==jog2 and tab[1][2]==jog2){
          		printf("%s ganhou!", nom2);
          		break;
          		//pon2 = pon2 + 1;
          	}else if(tab[2][0]==jog2 and tab[2][1]==jog2 and tab[2][2]==jog2){
          		printf("%s ganhou!", nom2);
          		break;
          		//pon2 = pon2 + 1;
          	}else if(tab[0][0]==jog2 and tab[1][0]==jog2 and tab[2][0]==jog2){
          		printf("%s ganhou!", nom2);
          		break;
          		//pon2 = pon2 + 1	;
         	}else if(tab[0][1]==jog2 and tab[1][1]==jog2 and tab[2][1]==jog2){
          		printf("%s ganhou!", nom2);
          		break;
          		//pon2 = pon2 + 1	;
         	}else if(tab[0][2]==jog2 and tab[1][2]==jog2 and tab[2][2]==jog2){
          		printf("%s ganhou!", nom2);
          		break;
          		//pon2 = pon2 + 1;
        	}else if(tab[0][1]==jog2 and tab[1][1]==jog2 and tab[2][1]==jog2){
          		printf("%s ganhou!", nom2);
          		break;
          		//pon2 = pon2 + 1	;
          	}else if(tab[0][2]==jog2 and tab[1][1]==jog2 and tab[2][0]==jog2){
          		printf("%s ganhou!", nom2);
          		break;
          		//pon2 = pon2 + 1	;
          	}
         	//else if(p == 9){
          	//	printf("O jogo empatou!\n");
          	//}
				
			in = in + 1;
          }
        //op = op +1;
	//}
//				pontuações				 
	printf("\nParabéns!\n");
	//printf("%S fez %i pontos!\n", nom1, pon1);
	//printf("%s fez %i pontos!\n", nom1, pon2);
}


