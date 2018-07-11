#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "termip.h"
#include "obscurecerse.h"

int main() {
	int sitX,a,x,controle=0,numero_de_save,op_selecionado,s1,s2,s3,retorna=0,slotnovojogo=0, slotcarregajogo=0;
	jogador jog;
	jogador *pjog;
	FILE *save1, *save2, *save3;
	
	pjog = &jog;
	
	srand (time(NULL));
	
	
	save1 = fopen ("save1.txt","r");
	save2 = fopen ("save2.txt", "r");
	save3 = fopen ("save3.txt", "r");
	
	if (save1!=NULL)
		fscanf(save1,"%d",&s1);
	else
		s1=0;

	if (save2!=NULL)
		fscanf(save2,"%d",&s2);
	else
		s2=0;

	if (save3!=NULL)
		fscanf(save3,"%d",&s3);
	else s3=0;
	
	if ((s1 != 0 && (save1!=NULL)) || (s2 != 0 && (save2!=NULL)) || (s3 != 0 && (save3!=NULL))) numero_de_save = 1;
	else numero_de_save = 0;
	
	
	
	set_fg_rgb(255, 255, 255); //cor das letras
	set_bg_rgb(0, 0, 0);//cor do fundo
	

	

	while(1){
		clear();// limpa tela
		logo();//mostra o logo
		printf("Selecione a opão desejada\n");
		printf( "1  NOVO JOGO\n\n");

		if(numero_de_save == 1) printf( "2  CARREGAR JOGO\n\n");
		printf( "9 SAIR DO JOGO\n");
	
		scanf("%d",&op_selecionado);
		
		if(op_selecionado!=1 && op_selecionado!=2 && op_selecionado!=9){
			clear();
			printf("Opção invalida!\n\nAperte enter para prosseguir\n");
			a=getchar();
			continue;
		}else if(op_selecionado==1){
			while(1){
				clear();
				logo();
				printf ("NOVO JOGO\n\n");
				
				printf("Selecione o slot desejado\n");


				if(s1 != 0){
					jog=carregar(1);
					
					printf("1 %s RAÇA: ",jog.nome);
					switch (jog.raca){
						case 1:
							printf ("Humano");
							break;
						case 2:
							printf ("Orc");
							break;
						case 3:
							printf ("Elfo");
							break;
						case 4:
							printf ("Anão");
							break;
					}

					printf(" CLASSE: ");
					switch (jog.classe){
						case 1:
							printf ("Guerreiro");
							break;
						case 2:
							printf ("Arqueiro");
							break;
						case 3:
							printf ("Ladino");
							break;
						case 4:
							printf ("Mago");
							break;
					}
					printf(" HP:%d/%d MP:%d/%d XP:%d/%d \n\n", jog.hp, jog.hpmaximo, jog.mp,jog.mpmaximo, jog.xp, jog.xpmaximo); 
				}
				
				else printf("1 SLOT VAZIO\n\n");

				if(s2 != 0){
					jog=carregar(2);
					printf("2 %s RAÇA: ",jog.nome);
					switch (jog.raca){
						case 1:
							printf ("Humano");
							break;
						case 2:
							printf ("Orc");
							break;
						case 3:
							printf ("Elfo");
							break;
						case 4:
							printf ("Anão");
							break;
					}

					printf(" CLASSE: ");
					switch (jog.classe){
						case 1:
							printf ("Guerreiro");
							break;
						case 2:
							printf ("Arqueiro");
							break;
						case 3:
							printf ("Ladino");
							break;
						case 4:
							printf ("Mago");
							break;
					}
					printf(" HP:%d/%d MP:%d/%d XP:%d/%d \n\n", jog.hp, jog.hpmaximo, jog.mp,jog.mpmaximo, jog.xp, jog.xpmaximo); 

				}
				else printf("2 SLOT VAZIO\n\n");

				if(s3 != 0){
					jog=carregar(3);
					printf("3 %s RAÇA: ",jog.nome);
					switch (jog.raca){
						case 1:
							printf ("Humano");
							break;
						case 2:
							printf ("Orc");
							break;
						case 3:
							printf ("Elfo");
							break;
						case 4:
							printf ("Anão");
							break;
					}

					printf(" CLASSE: ");
					switch (jog.classe){
						case 1:
							printf ("Guerreiro");
							break;
						case 2:
							printf ("Arqueiro");
							break;
						case 3:
							printf ("Ladino");
							break;
						case 4:
							printf ("Mago");
							break;
					}
					printf(" HP:%d/%d MP:%d/%d XP:%d/%d \n\n", jog.hp, jog.hpmaximo, jog.mp,jog.mpmaximo, jog.xp, jog.xpmaximo); 
				}
				
				else printf("3 SLOT VAZIO\n\n");
				
				printf ("\n4 SAIR DO JOGO\n");
				
				scanf ("%d",&x);
				
				if (x==1){
					if (s1!=0){
						while(1){
							clear();
							logo();
							printf ("Este slot já tem um jogo salvo, deseja sobreescrevê-lo?\n\n");
							printf ("1 Sim\n");
							printf ("2 Não\n\n");
							
							scanf ("%d",&x);
							
							if (x==1){
								slotnovojogo=1;
								break;
							}
							else if (x==2){
								retorna = 1;
								break;
							}else{
								clear();
								logo();
								printf ("Opção inválida!\n\nAperte enter para prosseguir\n");
								a=getchar();
								continue;
							}
						}
						if (slotnovojogo==1) break;
					}else slotnovojogo=1;
					
				}else if (x==2){
					if (s2!=0){
						while(1){
							clear();
							logo();
							printf ("Este slot já tem um jogo salvo, deseja sobreescrevê-lo?\n\n");
							printf ("1 Sim\n");
							printf ("2 Não\n\n");
							
							scanf ("%d",&x);
							
							if (x==1){
								slotnovojogo=2;
								break;
							}
							else if (x==2){
								retorna = 1;
								break;
							}else{
								clear();
								logo();
								printf ("Opção inválida!\n\nAperte enter para prosseguir\n");
								a=getchar();
								continue;
							}
						}
						if (slotnovojogo==2) break;
					}else slotnovojogo=2;
					
				}else if (x==3){
					if (s3!=0){
						while(1){
							clear();
							logo();
							printf ("Este slot já tem um jogo salvo, deseja sobreescrevê-lo?\n\n");
							printf ("1 Sim\n");
							printf ("2 Não\n\n");
							
							scanf ("%d",&x);
							
							if (x==1){
								slotnovojogo=3;
								break;
							}
							else if (x==2){
								retorna = 1;
								break;
							}else{
								clear();
								logo();
								printf ("Opção inválida!\n\nAperte enter para prosseguir\n");
								a=getchar();
								continue;
							}
						}
						if (slotnovojogo==3) break;
					}else slotnovojogo=3;
					
				}else if (x==4){
					while(1){
						clear();
						logo();
						printf ("Tem certeza de que deseja sair do jogo?\n\n");
						printf ("1 Sim\n");
						printf ("2 Não\n");
						scanf ("%d",&a);
						
						if (a==1) return 0;
						else if (a==2){
							controle = 1;
							break;
						}else{
							clear();
							printf ("Opção inválida!\n\nAperte enter para prosseguir\n");
							a=getchar();
							continue;
						}
						if (controle == 1){
							controle=0;
							break;
						}
					}
				}else{
					clear();
					logo();
					printf ("Opção inválida!\n\nAperte enter para prosseguir\n");
					a=getchar();
					continue;
				}
				
				break;
			}
			
			if (slotnovojogo==1) novojogo (&jog,1);
			else if (slotnovojogo==2) novojogo (&jog,2);
			else if (slotnovojogo==3) novojogo (&jog,3);
			
		}else if(op_selecionado==2){
			while(1){
				clear();
				logo();
				printf ("CARREGAR JOGO\n\n");
				
				printf("Selecione o slot desejado\n");

				if(s1 != 0){
					jog=carregar(1);

					printf("1 %s RAÇA: ",jog.nome);
					switch (jog.raca){
						case 1:
							printf ("Humano");
							break;
						case 2:
							printf ("Orc");
							break;
						case 3:
							printf ("Elfo");
							break;
						case 4:
							printf ("Anão");
							break;
					}

					printf(" CLASSE: ");
					switch (jog.classe){
						case 1:
							printf ("Guerreiro");
							break;
						case 2:
							printf ("Arqueiro");
							break;
						case 3:
							printf ("Ladino");
							break;
						case 4:
							printf ("Mago");
							break;
					}


					printf (" HP:%d/%d MP:%d/%d XP:%d/%d \n\n", jog.hp, jog.hpmaximo, jog.mp,jog.mpmaximo, jog.xp, jog.xpmaximo);
				}
				else printf("1 SLOT VAZIO\n\n");

				if(s2 != 0){
					jog=carregar(2);
					printf("2 %s RAÇA: ",jog.nome);
					switch (jog.raca){
						case 1:
							printf ("Humano");
							break;
						case 2:
							printf ("Orc");
							break;
						case 3:
							printf ("Elfo");
							break;
						case 4:
							printf ("Anão");
							break;
					}

					printf(" CLASSE: ");
					switch (jog.classe){
						case 1:
							printf ("Guerreiro");
							break;
						case 2:
							printf ("Arqueiro");
							break;
						case 3:
							printf ("Ladino");
							break;
						case 4:
							printf ("Mago");
							break;
					}
					printf(" HP:%d/%d MP:%d/%d XP:%d/%d \n\n", jog.hp, jog.hpmaximo, jog.mp,jog.mpmaximo, jog.xp, jog.xpmaximo); 
				}
				
				else printf("2 SLOT VAZIO\n\n");

				if(s3 != 0){
					jog=carregar(3);
					printf("3 %s RAÇA: ",jog.nome);
					switch (jog.raca){
						case 1:
							printf ("Humano");
							break;
						case 2:
							printf ("Orc");
							break;
						case 3:
							printf ("Elfo");
							break;
						case 4:
							printf ("Anão");
							break;
					}

					printf(" CLASSE: ");
					switch (jog.classe){
						case 1:
							printf ("Guerreiro");
							break;
						case 2:
							printf ("Arqueiro");
							break;
						case 3:
							printf ("Ladino");
							break;
						case 4:
							printf ("Mago");
							break;
					}
					printf(" HP:%d/%d MP:%d/%d XP:%d/%d \n\n", jog.hp, jog.hpmaximo, jog.mp,jog.mpmaximo, jog.xp, jog.xpmaximo); 
				}
				
				else printf("3 SLOT VAZIO\n\n");
				
				printf ("\n4 SAIR DO JOGO\n");
				
				scanf ("%d",&x);
				
				if (x==1){
					if (s1==0){
						while(1){
							clear();
							logo();
							printf ("Este slot está vazio, escolha outro!\n\n");
							controle = 1;
							break;
						}
						if (controle == 1){
							controle =0;
							continue;
						}
						
					}else slotcarregajogo=1;
					
				}else if (x==2){
					if (s2==0){
						while(1){
							clear();
							logo();
							printf ("Este slot está vazio, escolha outro!\n\n");
							controle = 1;
							break;
						}
						if (controle == 1){
							controle =0;
							continue;
						}
						
					}else slotcarregajogo=2;
					
				}else if (x==3){
					if (s3==0){
						while(1){
							clear();
							logo();
							printf ("Este slot está vazio, escolha outro!\n\n");
							controle = 1;
							break;
						}
						if (controle == 1){
							controle =0;
							continue;
						}
						
					}else slotcarregajogo=3;
					
				}else if (x==4){
					while(1){
						clear();
						logo();
						printf ("Tem certeza de que deseja sair do jogo?\n\n");
						printf ("1 Sim\n");
						printf ("2 Não\n");
						scanf ("%d",&a);
						
						if (a==1) return 0;
						else if (a==2){
							controle = 1;
							break;
						}else{
							clear();
							printf ("Opção inválida!\n\nAperte enter para prosseguir\n");
							a=getchar();
							continue;
						}
						if (controle == 1){
							controle=0;
							break;
						}
					}
				}else{
					clear();
					logo();
					printf ("Opção inválida!\n\nAperte enter para prosseguir\n");
					a=getchar();
					continue;
				}
				
				break;
			}
			
			if (slotcarregajogo==1) jog = carregar (1);
			else if (slotcarregajogo==2) jog = carregar (2);
			else if (slotcarregajogo==3) jog = carregar (3);
			
			
		}else{
			while(1){
				clear();
				logo();
				printf ("Tem certeza de que deseja sair do jogo?\n\n");
				printf ("1 Sim\n");
				printf ("2 Não\n");
				scanf ("%d",&a);
				
				if (a==1) return 0;
				else if (a==2){
					controle = 1;
					break;
				}else{
					clear();
					logo();
					printf ("Opção inválida!\n\nAperte enter para prosseguir\n");
					a=getchar();
					scanf ("%d",&a);
					continue;
				}
			}
			if (controle == 1){
				controle=0;
			continue;
			}
		}
		break;

	}


	if (save1)
		fclose (save1);
	if (save2)
		fclose (save2);
	if (save3)
		fclose (save3);
							printf("aqui\n");	
	while (1){
		salvar (jog);
		sitX = situacao (pjog); //entra na situação atual do struct do jogador
		
		if (sitX == -1) return 0;
		
		jog.situacaoatual = sitX; //avança para a próxima situação
		salvar (jog); //salva o progresso antes de avançar

	}
}
