#include <iostream>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int i = 0, j = 0, op = 0, espc = 0, cont = 0, esco = 0, k = 1, l = 1, loop = 0;
	int  lugar = 0, cancel = 0, a = 0, tab2[20][25], x = 0, y = 0, cont3 = 0, total = 0, z = 0, min = 0, block = 0;
	char ass = ' ', tab[20][25], pro = ' ', ingcon[40], conf = 0, rest;
	float  ing = 0, din = 0;
	
		while(loop == 0){
			
			printf("\n====================================================\n");
			printf("1. Abrir um espetáculo/Reset\n");
			printf("2. Escolha o tamanho do Teatro e o valor do ingresso\n");
			printf("3. Reservar um lugar\n");
			printf("4. Vender um lugar\n");
			printf("5. Verificar mapa do teatro\n");
			printf("6. Verificar parciais\n");
			printf("7. Encerrar o espetáculo \n");
			printf("8. Sair\n");
			printf("====================================================\n");
			
			printf("O que deseja fazer?... ");
			scanf("%i", &esco);
			
			printf("\n\n");
			
			switch(esco){
			
				case 1:
				
				 if(block == 0){
				 	
						z = 0;
						
					 for (i = 0; i < k; i++){
	        		 	for (j = 0; j < l; j++){
	          				 tab[i][j] = 'D';
	          		 	}
	   				}
	   				
	   				 printf("\n O espetáculo foi aberto!");
					
					 block = 1;
					
				 }
				
				 else if(block == 2){
				 	
						z = 0;
						
					 for (i = 0; i < k; i++){
	        		 	for (j = 0; j < l; j++){
	          				 tab[i][j] = 'D';
	          		 	}
	   				}
	   				
	   				 printf("\n Reset feito com sucesso!");
					
					block = 1;
					
				 }
					
					 printf("\n\n");
				
					 break;
					
					
				
				case 2:
					
					if(block == 0){
						
						printf("\nVocê não abriu o espetáculo!");
					
					}
					
					else if(block == 1){
						
					 printf("Qual o tamanho do teatro \n");
					 printf("Linha: ");
					 scanf("%i", &k);
					 printf("Coluna: ");
					 scanf("%i", &l);
						
					 for (i = 0; i < k; i++){
		        		 for (j = 0; j < l; j++){
		          			 tab[i][j] = 'D';
		          		 }
		   			 }
		   				
		   			 total = k * l;
		   			
		   			 printf("\nQuanto custa o ingresso?:  ");
					 scanf("%f", &ing);
					
					 printf("\n O ingresso custa R$%.2f ", ing);
						
						block = 2;
						
					}
					
					else if(block == 2){
						 
						printf("\nVocê não pode inserir esses valores de novo, caso queira muda-los deve fazer um reset");
						 
					}
					
					printf("\n\n");
					
					break;
				
				case 3:
					
					 if(block == 0){
					 	
					 	printf("\nVocê não abriu o espetáculo, nem determinou seu tamnho e valor do seu ingresso!");
					 	
					 }
					 
					 else if(block == 1){
					 	
					 	printf("\nVocê não determinou seu tamnho e valor do seu ingresso!");
					 	
					 }
					 
					 else if(block == 2){
					 	
						 a = 0;
				
						 printf(" *NÃO PODEMOS RESERVAR LUGARES PARA MEIAS* \n\n");
						
						 printf("\n========================");
						 printf("\n 1. Voltar");
						 printf("\n 2. Reservar");
						 printf("\n 3. Cancelar uma reserva");
						 printf("\n========================\n");
						
						 printf("O que deseja fazer?... ");
						 scanf("%i", &cancel);
						
						 if(cancel == 1){
							
							printf("\n Voltando...");
							
							printf("\n\n");
							
							break;
						 }
						
						 else if(cancel == 2){
							
							while(a < 1){
								
								printf("\nDecida qual poltrona você quer reservar!\n");
								printf("informe a linha da poltrona: ");
								scanf("%i", &i);
								printf("informe a coluna da sua poltrona: ");
								scanf("%i", &j);
								
								if(tab[i-1][j-1] == 'D'){
									
			          				 tab[i-1][j-1] = 'R';
			          				
			          				 printf("\nReserva realizada com sucesso!\n");
			          				
			          				 a = 2;
			          				
			          				 din = din + (ing * 60 / 100);
			          			
			          				
			          			}
			          			
			          			else if(tab[i-1][j-1] != 'D'){
			          			
								  printf("\nNão podemos reservar essa poltrona, ela está ocupada\n");
								  	
								  }	
								  
							}
							
						 }
						
						 else if(cancel == 3){
							
							while(a < 1){
								
								printf("\nDecida qual poltrona você quer cancelar!\n");
								printf("informe a linha da poltrona: ");
								scanf("%i", &i);
								printf("informe a coluna da sua poltrona: ");
								scanf("%i", &j);
								
								if(tab[i-1][j-1] == 'R'){
									
			          				tab[i-1][j-1] = 'D';
			          				
			          				printf("\nReserva cancelada com sucesso!\n");
			          				
			          				a = 2;
			          				
			          				din = din - (ing * 60 / 100);
			          				
			          		    }
			          			
			          			else if(tab[i-1][j-1] == 'D'){
			          			
								  	printf("\nNão podemos cancelar, essa poltrona não está reservada\n");
								  	
								}	
								  
								else if(tab[i-1][j-1] == 'c'){
			          			
								  	printf("\nNão podemos cancelar, essa poltrona já foi comprada\n");
								  	
								  }	
								  
							}
							
						 }
						 
					 }
					 
					 printf("\n\n");
					
					  break;
					
			
				case 4:
					
					if(block == 0){
					 	
					 	printf("\nVocê não abriu o espetáculo, nem determinou seu tamnho e valor do seu ingresso!");
					 	
					 }
					 
					 else if(block == 1){
					 	
					 	printf("\nVocê não determinou seu tamnho e valor do seu ingresso!");
					 	
					 }
					
					else if (block == 2){
							
						a = 0;
						
							printf("\n======================");
							printf("\n 1. Voltar");
							printf("\n 2. Vender uma meia");
							printf("\n 3. Vender uma inteira");
							printf("\n======================\n");
							
							printf("O que deseja fazer?... ");
							scanf("%i", &lugar);
							
							
						    if(lugar == 1){
							
								printf("\n Voltando...");
								
								printf("\n\n");
								
								break;
							
						    }
							
							if(lugar == 3){
								
								while(a < 1){
									
								 	printf("\nDecida qual poltrona você quer!\n");
								 	printf("informe a linha do assento: ");
								 	scanf("%i", &i);
								 	printf("informe a coluna do seu assento: ");
								 	scanf("%i", &j);
										
								 	if(tab[i-1][j-1] == 'D'){
										
					          			 tab[i-1][j-1] = 'C';
					          			
					          			 printf("\nPoltrona vendida com sucesso!\n");
					          			
					          			 a = 2;
					          			
					          			 din = din + ing;
					          			
					          			 cont3 ++;
					          			
					          		}
										  
					          		else if(tab[i-1][j-1] == 'R'){
					          			
										 printf("\nPoltrona vendida com sucesso!\n");
										 
										 a = 2;
					          			
					          			 din = din + (ing  * 40 / 100);
					          			
					          			 cont3 ++;
										 
										  }
										  
									else if(tab[i-1][j-1] == 'C'){
					          			
										  printf("\nNão podemos vender essa poltrona, ela está ocupada\n");
										  	
									}		
								
								}
								
							}
							
							else if(lugar == 2){
								
								while(a < 1){
									
									printf("\nDecida qual poltrona você quer!\n");
									printf("informe a linha do assento: ");
									scanf("%i", &i);
									printf("informe a coluna do seu assento: ");
									scanf("%i", &j);
										
								    if(tab[i-1][j-1] == 'D'){
										
					          			tab[i-1][j-1] = 'M';
					          			
					          			printf("\nPoltrona comprada com sucesso!\n");
					          			
					          			a = 2;
					          			
					          			din = din + ing / 2;
					          			
					          			cont3 ++;
					          			
					          		}
										  
					               else if(tab[i-1][j-1] == 'R'){
					          			
										 printf("\nNão vendemos poltronas reservadas para meias\n");
										
										  }
										  
									else if(tab[i-1][j-1] == 'C'){
					          			
										 printf("\nNão podemos vender essa poltrona, ela está ocupada\n");
										  	
									}		
								
								}
								
							}
						
					}
			
		          	printf("\n\n");
					
					break;
				
				
				case 5:
					
					if(block == 0){
					 	
					 	printf("\nVocê não abriu o espetáculo, nem determinou seu tamnho e valor do seu ingresso!");
					 	
					 }
					 
					 else if(block == 1){
					 	
					 	printf("\nVocê não determinou seu tamnho e valor do seu ingresso!");
					 	
					 }
					
					else if (block == 2){
						for (i = 0; i < k; i++){
		        			for (j = 0; j < l; j++){
				        		cont = cont + 1;
				          		printf(" %c|", tab[i][j]);
				          		printf("");
				          			if(cont == l){
					          			printf("\n");
					          			cont = 0;
								  	}
				          	}
			          	}
	          			
					}
	          	
	          		printf("\n\n");
					
					break;
				
				
				case 6: 
						
					if(block == 0){
					 	
					 	printf("\nVocê não abriu o espetáculo, nem determinou seu tamnho e valor do seu ingresso!");
					 	
					 }
					 
					 else if(block == 1){
					 	
					 	printf("\nVocê não determinou seu tamnho e valor do seu ingresso!");
					 	
					 }
					
					else if (block == 2){
						
						min = l * k;
						
						min = min * 60;
					
						min = min /100;
				
						if(cont3 >= min){
							
							printf("\nÓtimo, vocÊ já atingiu 60% dos lugares necessário para abrir um espetáculo");
							
							printf("%i lugares foram vendidos de %i \n", cont3, total);
							
							z = 1;
							
						}
						
						else {
							
							rest = min - cont3;
							
							printf("\nNão é pssível terminar o espetáculo");
							printf("\nFaltam %i lugar(es)", rest);
							
						}
						
					}
					
					printf("\n\n");
					
					break;
				
				
				case 7:
						
					if(block == 0){
					 	
					 	printf("\nVocê não abriu o espetáculo, nem determinou seu tamnho e valor do seu ingresso!");
					 	
					 }
					 
					 else if(block == 1){
					 	
					 	printf("\nVocê não determinou seu tamnho e valor do seu ingresso!");
					 	
					 }
					
					else if (block == 2){
					
						if(z == 1){
						
							z = 0; 
						
							printf("\nPrabéns!");
						
							printf("\nVocê arrecadou R$%f.2", din);
						
							printf("\n\n");
						
							break;
						
						}
						
						else {
							
								rest = min - cont3;
							
							printf("\nNão é pssível terminar o espetáculo");
							printf("\nFaltam %i lugar(es)", rest);
							
							printf("\n\n");
						
							break;
							
						}
					
					}
					
				case 8:
					
					loop = 2;
					
					printf("\nO programa está sendo encerrado");
					
					printf("\n\n");
					
					break;
			
		}
			
		}
			
			printf("\n");
			system("pause");
		
	}
	
