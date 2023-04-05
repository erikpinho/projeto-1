#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
	int opcao;
	int pergunta, pergunta2, pergunta3, pergunta4, pergunta5;
	int i;
	int caixas, caixas2, caixas3, caixas4, caixas5,caixas6,caixas7,caixas8,caixas10, caixas11,caixas12,caixas13,caixas14,caixas15,caixas16,caixas17,caixas18,caixas19,caixas20;
	
	printf("Menu: \n");
	printf("\n1. pergunta e reposta \n");
	printf("\n2. cobra na caixa\n");
	printf("\n3. gosmas wars\n");
	printf("\n0. sair\n\n");
	
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			printf("\npergunta 1 :Normalmente, quantos litros de sangue uma pessoa tem? Em media, quantos sao retirados numa doaçao de sangue?\n");
			printf("\n1.Tem entre 2 e 4 litros. Sao retirados 450 millilitros\n");
			printf("\n2.Tem entre 4 a 6 litros. Sao retirados 450 mililitros\n");
			printf("\n3.Tem 10 litros. Sao retirados 2 litros\n");
			printf("\n4.Tem 7 litros. Sao retirados 1,5 litros\n");
			printf("\nresposta: ");
			scanf("%d" , &pergunta);
			
			switch(pergunta)
			{
				case 1:
					printf("\nresposta errada. alternativa correta 2\n");
				break;
				
				case 2:
			printf("\npergunta 2 :De quem e a famosa frase Penso, logo existo?\n");
			printf("\n5.Platao\n");
			printf("\n6.Galileu Galilei\n");
			printf("\n7.Descartes\n");
			printf("\n8.Socrates\n");
			printf("\nresposta: ");
			scanf("%d", &pergunta2);
			
			switch(pergunta2);
					{
						case 5:
							printf("\npergunta 3: Quail o menor e o maior pais do mundo?");
					printf("\n9.vaticano e russia\n");
					printf("\n10.nauru e china\n");
					printf("\n11.monaco e canada\n");
					printf("\n12.malta e estados unidos\n");
					printf("\nresposta: ");
					scanf("%d", &pergunta3);
					switch(pergunta3)
					{
						case 9:
							printf("\npergunta 4: onde foi inventado o chuveiro eletrico\n");
					printf("\n13.franca\n");
					printf("\n14.inglaterra\n");
					printf("\n15.brasil\n");
					printf("\n16.italia\n");
					printf("\nresposta: ");
					scanf("%d", &pergunta4);
					switch(pergunta4)
					{
						case 13:
							printf("\nresposta errada. alternativa certa 15.\n");
							break;
							
						case 14:
							printf("resposta errada. alternativa correta 15.");
						break;
						
						case 15:
					printf("pergunta 5:Qual o nome do presidente do Brasil que ficou conhecido como Jango?");
					printf("\n17.janio quadros\n");
					printf("\n18.jacinto anjos\n");
					printf("\n19.getulio vargas\n");
					printf("\n20.joao goulart\n");
					printf("\nresposta: ");
					scanf("%d", &pergunta5);
					switch(pergunta5)
							{
							case 17:
							printf("\nresposta errada. alternativa correta 20.\n");
							break;
							
							case 18:
							("\nresposta errada. alternativa correta 20.\n");
							break;
							
							case 19:
								printf("\nresposta errada. alternativa correta 20.\n");
								break;
								
							case 20:
								printf("resposta certa. parabens por vencer o jogo");
								break;
							}
						case 16:
							printf("\nresposta errada. alternativa correta 15.\n");
							break;
					}
						
						case 10:
						printf("\nresposta errada. alternativa correta 9.\n");
						break;
						
						case 11:
						printf("\nresposta errada. alternativa correta 9.\n");
						break;
						
						case 12:
							printf("\nresposta errada. alternativa correta 9\n");
					}
					
					case 6:
						printf("\n resposta errada. alternativa certa 1.\n");
						break;
					
					case 7:
						printf("\nresposta errada. alternativa certa 1.\n");
						break;
						
					case 8:
						printf("\nresposata errada. alternativa certa 1.\n");
						break;
					}			
				
			}
			break;
			
		case 2:
			printf("\nbem vindo a combra na caixa\n");
			srand(time(NULL));
			for(i = 0; i < 1 ; i++)
			{
				printf("\njogador %d comeca\n", rand() %2);
			}
			printf("escolha entre as caixas 1,2,3,4,5: ");
			scanf("%d", &caixas);
			
			switch(caixas)
			{
				case 1:
					printf("\na caixa nao tinha nada\n");
					printf("\nproximo jogador escolha entre as caixas 6,7,8,9: ");
					scanf("%d", &caixas2);
					
				switch(caixas2)
				{
					case 6:
					printf("\na caixa nao tinha nada\n");
					printf("\nproximo jogador escolha entre as caixas 10,11,12: ");
					scanf("%d", &caixas3);
					switch(caixas3);
					{
				case 10:
					printf("\na caixa nao tinha nada\n");
					printf("\nproximo jogador escolha entre as caixas 11 e 12: ");
					scanf("%d", & caixas4);
					switch(caixas4)
					{
				case 11:
					printf("\na caixa continha uma cobra. voce perdeu\n");
					break;
					
				case 12:
					printf("\na caixa continha um botao. voce venceu\n");
					break;
					}
				
				case 11:
					printf("\na caixa continha uma cobra. voce perdeu.\n");
					break;
					
				case 12:
					printf("\na caixa continha um botao. voce venceu.\n\n");
					break;
					}
					
				case 7:
					printf("\na caixa nao tinha nada\n");
					printf("\nproximo jogador escolha entre as caixas 13,14,15: ");
					scanf("%d", &caixas5);
					switch(caixas5);
					{
						case 13:
							printf("\na caixa nao tinha nada");
							printf("\nproximo jogador escolha entre as caixas 16,17: ");
							scanf("%d", & caixas6);
							switch(caixas6)
							{
								case 16:
									printf("\na caixa continha uma cobra. voce perdeu\n");
									break;
									
								case 17:
									printf("\na caixa continha um botao. voce venceu\n");
									break;
							}
							
						case 14:
							printf("\na caixa continha uma cobra. voce perdeu.\n");
							break;
							
						case 15:
							printf("\na caixa continha um botao. voce venceu.\n");
					}
					
				case 8:
					printf("\na caixa continha uma cobra. voce perdeu\n");
					break;
					
				case 9:
					printf("\na caixa continha um botao. voce venceu\n");
					break;
				}
				
				case 2:
					printf("\n a caixa nao continha nada\n");
				printf("\nproximo jogador escolha entre as caixas 6,7,8,9: ");
					scanf("%d", &caixas2);
					
				switch(caixas2)
				{
					case 6:
					printf("\na caixa nao tinha nada\n");
					printf("\nproximo jogador escolha entre as caixas 10,11,12: ");
					scanf("%d", &caixas3);
					switch(caixas3);
					{
				case 10:
					printf("\na caixa nao tinha nada\n");
					printf("\nproximo jogador escolha entre as caixas 11 e 12: ");
					scanf("%d", & caixas4);
					switch(caixas4)
					{
				case 11:
					printf("\na caixa continha uma cobra. voce perdeu\n");
					break;
					
				case 12:
					printf("\na caixa continha um botao. voce venceu\n");
					break;
					}
				
				case 11:
					printf("\na caixa continha uma cobra. voce perdeu.\n");
					break;
					
				case 12:
					printf("\na caixa continha um botao. voce venceu.\n\n");
					break;
					}
					
				case 7:
					printf("\na caixa nao tinha nada\n");
					printf("\nproximo jogador escolha entre as caixas 13,14,15: ");
					scanf("%d", &caixas5);
					switch(caixas5);
					{
						case 13:
							printf("\na caixa nao tinha nada");
							printf("\nproximo jogador escolha entre as caixas 16,17: ");
							scanf("%d", & caixas6);
							switch(caixas6)
							{
								case 16:
									printf("\na caixa continha uma cobra. voce perdeu\n");
									break;
									
								case 17:
									printf("\na caixa continha um botao. voce venceu\n");
									break;
							}
							
						case 14:
							printf("\na caixa continha uma cobra. voce perdeu.\n");
							break;
							
						case 15:
							printf("\na caixa continha um botao. voce venceu.\n");
					}
					
				case 8:
					printf("\na caixa continha uma cobra. voce perdeu\n");
					break;
					
				case 9:
					printf("\na caixa continha um botao. voce venceu\n");
					break;
				}
					
				case 3:
					printf("\na caixa nao continha nada\n");
					printf("\nproximo jogador escolha entre as caixas 6,7,8,9: ");
					scanf("%d", &caixas2);
					
				switch(caixas2)
				{
					case 6:
					printf("\na caixa nao tinha nada\n");
					printf("\nproximo jogador escolha entre as caixas 10,11,12: ");
					scanf("%d", &caixas3);
					switch(caixas3);
					{
				case 10:
					printf("\na caixa nao tinha nada\n");
					printf("\nproximo jogador escolha entre as caixas 11 e 12: ");
					scanf("%d", & caixas4);
					switch(caixas4)
					{
				case 11:
					printf("\na caixa continha uma cobra. voce perdeu\n");
					break;
					
				case 12:
					printf("\na caixa continha um botao. voce venceu\n");
					break;
					}
				
				case 11:
					printf("\na caixa continha uma cobra. voce perdeu.\n");
					break;
					
				case 12:
					printf("\na caixa continha um botao. voce venceu.\n\n");
					break;
					}
					
				case 7:
					printf("\na caixa nao tinha nada\n");
					printf("\nproximo jogador escolha entre as caixas 13,14,15: ");
					scanf("%d", &caixas4);
					switch(caixas4);
					{
						case 13:
							printf("\na caixa nao tinha nada");
							printf("\nproximo jogador escolha entre as caixas 16,17: ");
							scanf("%d", & caixas5);
							switch(caixas5)
							{
								case 16:
									printf("\na caixa continha uma cobra. voce perdeu\n");
									break;
									
								case 17:
									printf("\na caixa continha um botao. voce venceu\n");
									break;
							}
							
						case 14:
							printf("\na caixa continha uma cobra. voce perdeu.\n");
							break;
							
						case 15:
							printf("\na caixa continha um botao. voce venceu.\n");
					}
					
				case 8:
					printf("\na caixa continha uma cobra. voce perdeu\n");
					break;
					
				case 9:
					printf("\na caixa continha um botao. voce venceu\n");
					break;
				}
					
				case 4:
					printf("\na caixa continha uma cobra. voce perdeu\n");
					break;
					
				case 5:
					printf("\na caixa continha um botao. voce venceu\n");
					break;
			}
		
		case 0:
			printf("\naperte qualquer botao para sair\n");
			break;
	}
}
