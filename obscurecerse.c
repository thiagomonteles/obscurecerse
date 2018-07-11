#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "termip.h"
#include "obscurecerse.h"

void novojogo (jogador *jog,int n){
	int x;
	int i;
	char j;
	
	jog->save=n;
	jog->nivel=1;
	jog->xp=0;
	jog->xpmaximo=XPNIVEL1;
	jog->hp=HPINICIAL;	
	jog->hpmaximo=HPINICIAL;
	jog->mp=MPINICIAL;
	jog->mpmaximo=MPINICIAL;
	jog->sorte=SORTEINICIAL;
	jog->situacaoatual=0;
	jog->magia1=0;
	jog->magia2=0;

	for (i=0;i<QUANTSITUACOES;i++) jog->situacoespassadas[i]=0;
	
	jog->inv.pocaovida=0;
	jog->inv.pocaomana=0;
	jog->inv.ouro=0;
	
	strcpy(jog->inv.vestimentas[0].nome,"Armadura de latão");
	jog->inv.vestimentas[0].def=VEST0def;
	jog->inv.vestimentas[0].agi=VEST0agi;
	jog->inv.vestimentas[0].intel=VEST0intel;
	jog->inv.vestimentas[0].valor=VEST0valor;
	
	strcpy(jog->inv.vestimentas[1].nome,"Colete de couro");
	jog->inv.vestimentas[1].def=VEST1def;
	jog->inv.vestimentas[1].agi=VEST1agi;
	jog->inv.vestimentas[1].intel=VEST1intel;
	jog->inv.vestimentas[1].intel=VEST1valor;

	strcpy(jog->inv.vestimentas[2].nome,"Capuz encantado");	
	jog->inv.vestimentas[2].def=VEST2def;
	jog->inv.vestimentas[2].agi=VEST2agi;
	jog->inv.vestimentas[2].intel=VEST2intel;
	jog->inv.vestimentas[2].intel=VEST2valor;
	
	strcpy(jog->inv.vestimentas[3].nome,"Armadura de metal reforçado");	
	jog->inv.vestimentas[3].def=VEST3def;
	jog->inv.vestimentas[3].agi=VEST3agi;
	jog->inv.vestimentas[3].intel=VEST3intel;
	jog->inv.vestimentas[3].intel=VEST3valor;
	
	strcpy(jog->inv.vestimentas[4].nome,"Armadura de escamas de crocodilo");	
	jog->inv.vestimentas[4].def=VEST4def;
	jog->inv.vestimentas[4].agi=VEST4agi;
	jog->inv.vestimentas[4].intel=VEST4intel;
	jog->inv.vestimentas[4].intel=VEST4valor;

	strcpy(jog->inv.vestimentas[5].nome,"Túnica mágica");	
	jog->inv.vestimentas[5].def=VEST5def;
	jog->inv.vestimentas[5].agi=VEST5agi;
	jog->inv.vestimentas[5].intel=VEST5intel;
	jog->inv.vestimentas[5].intel=VEST5valor;

	strcpy(jog->inv.vestimentas[6].nome,"Armadura de escamas de dragão");	
	jog->inv.vestimentas[6].def=VEST6def;
	jog->inv.vestimentas[6].agi=VEST6agi;
	jog->inv.vestimentas[6].intel=VEST6intel;
	jog->inv.vestimentas[6].intel=VEST6valor;

	strcpy(jog->inv.vestimentas[7].nome,"Armadura de malha de cristal");	
	jog->inv.vestimentas[7].def=VEST7def;
	jog->inv.vestimentas[7].agi=VEST7agi;
	jog->inv.vestimentas[7].intel=VEST7intel;
	jog->inv.vestimentas[7].intel=VEST7valor;

	strcpy(jog->inv.vestimentas[8].nome,"Túnica de luz");	
	jog->inv.vestimentas[8].def=VEST8def;
	jog->inv.vestimentas[8].agi=VEST8agi;
	jog->inv.vestimentas[8].intel=VEST8intel;
	jog->inv.vestimentas[8].valor=VEST8valor;
	
	for (i=0;i<QUANTVESTIMENTAS;i++) jog->inv.vestimentas[i].possui=0;
	
	strcpy(jog->inv.armas[0].nome,"Arco curto");
	jog->inv.armas[0].tipo=ARMA0tipo;
	jog->inv.armas[0].longe=ARMA0longe;
	jog->inv.armas[0].perto=ARMA0perto;
	jog->inv.armas[0].turnos=ARMA0turnos;
	jog->inv.armas[0].intel=ARMA0intel;
	jog->inv.armas[0].valor=ARMA0valor;
	
	strcpy(jog->inv.armas[1].nome,"Zarabatana");
	jog->inv.armas[1].tipo=ARMA1tipo;
	jog->inv.armas[1].longe=ARMA1longe;
	jog->inv.armas[1].perto=ARMA1perto;
	jog->inv.armas[1].turnos=ARMA1turnos;
	jog->inv.armas[1].intel=ARMA1intel;
	jog->inv.armas[1].valor=ARMA1valor;
	
	strcpy(jog->inv.armas[2].nome,"Arco longo");
	jog->inv.armas[2].tipo=ARMA2tipo;
	jog->inv.armas[2].longe=ARMA2longe;
	jog->inv.armas[2].perto=ARMA2perto;
	jog->inv.armas[2].turnos=ARMA2turnos;
	jog->inv.armas[2].intel=ARMA2intel;
	jog->inv.armas[2].valor=ARMA2valor;
	
	strcpy(jog->inv.armas[3].nome,"Adagas ensanguentadas");
	jog->inv.armas[3].tipo=ARMA3tipo;
	jog->inv.armas[3].longe=ARMA3longe;
	jog->inv.armas[3].perto=ARMA3perto;
	jog->inv.armas[3].turnos=ARMA3turnos;
	jog->inv.armas[3].intel=ARMA3intel;
	jog->inv.armas[3].valor=ARMA3valor;
	
	strcpy(jog->inv.armas[4].nome,"Sabre ensanguentado");
	jog->inv.armas[4].tipo=ARMA4tipo;
	jog->inv.armas[4].longe=ARMA4longe;
	jog->inv.armas[4].perto=ARMA4perto;
	jog->inv.armas[4].turnos=ARMA4turnos;
	jog->inv.armas[4].intel=ARMA4intel;
	jog->inv.armas[4].valor=ARMA4valor;
	
	strcpy(jog->inv.armas[5].nome,"Cajado mágico");
	jog->inv.armas[5].tipo=ARMA5tipo;
	jog->inv.armas[5].longe=ARMA5longe;
	jog->inv.armas[5].perto=ARMA5perto;
	jog->inv.armas[5].turnos=ARMA5turnos;
	jog->inv.armas[5].intel=ARMA5intel;
	jog->inv.armas[5].valor=ARMA5valor;
	
	strcpy(jog->inv.armas[6].nome,"Espada de ferro");
	jog->inv.armas[6].tipo=ARMA6tipo;
	jog->inv.armas[6].longe=ARMA6longe;
	jog->inv.armas[6].perto=ARMA6perto;
	jog->inv.armas[6].turnos=ARMA6turnos;
	jog->inv.armas[6].intel=ARMA6intel;
	jog->inv.armas[6].valor=ARMA6valor;
	
	strcpy(jog->inv.armas[7].nome,"Adaga envenenada");
	jog->inv.armas[7].tipo=ARMA7tipo;
	jog->inv.armas[7].longe=ARMA7longe;
	jog->inv.armas[7].perto=ARMA7perto;
	jog->inv.armas[7].turnos=ARMA7turnos;
	jog->inv.armas[7].intel=ARMA7intel;
	jog->inv.armas[7].valor=ARMA7valor;
	
	strcpy(jog->inv.armas[8].nome,"Machado de batalha");
	jog->inv.armas[8].tipo=ARMA8tipo;
	jog->inv.armas[8].longe=ARMA8longe;
	jog->inv.armas[8].perto=ARMA8perto;
	jog->inv.armas[8].turnos=ARMA8turnos;
	jog->inv.armas[8].intel=ARMA8intel;
	jog->inv.armas[8].valor=ARMA8valor;
	
	strcpy(jog->inv.armas[9].nome,"Varinha encantada");
	jog->inv.armas[9].tipo=ARMA9tipo;
	jog->inv.armas[9].longe=ARMA9longe;
	jog->inv.armas[9].perto=ARMA9perto;
	jog->inv.armas[9].turnos=ARMA9turnos;
	jog->inv.armas[9].intel=ARMA9intel;
	jog->inv.armas[9].valor=ARMA9valor;
	
	strcpy(jog->inv.armas[10].nome,"Besta automática");
	jog->inv.armas[10].tipo=ARMA10tipo;
	jog->inv.armas[10].longe=ARMA10longe;
	jog->inv.armas[10].perto=ARMA10perto;
	jog->inv.armas[10].turnos=ARMA10turnos;
	jog->inv.armas[10].intel=ARMA10intel;
	jog->inv.armas[10].valor=ARMA10valor;
	
	strcpy(jog->inv.armas[11].nome,"Martelo de guerra");
	jog->inv.armas[11].tipo=ARMA11tipo;
	jog->inv.armas[11].longe=ARMA11longe;
	jog->inv.armas[11].perto=ARMA11perto;
	jog->inv.armas[11].turnos=ARMA11turnos;
	jog->inv.armas[11].intel=ARMA11intel;
	jog->inv.armas[11].valor=ARMA11valor;
	
	strcpy(jog->inv.armas[12].nome,"Foice de dente de dragão");
	jog->inv.armas[12].tipo=ARMA12tipo;
	jog->inv.armas[12].longe=ARMA12longe;
	jog->inv.armas[12].perto=ARMA12perto;
	jog->inv.armas[12].turnos=ARMA12turnos;
	jog->inv.armas[12].intel=ARMA12intel;
	jog->inv.armas[12].valor=ARMA12valor;
	
	strcpy(jog->inv.armas[13].nome,"Besta para dardos envenenados");
	jog->inv.armas[13].tipo=ARMA13tipo;
	jog->inv.armas[13].longe=ARMA13longe;
	jog->inv.armas[13].perto=ARMA13perto;
	jog->inv.armas[13].turnos=ARMA13turnos;
	jog->inv.armas[13].intel=ARMA13intel;
	jog->inv.armas[13].valor=ARMA13valor;
	
	strcpy(jog->inv.armas[14].nome,"Luvas elementais");
	jog->inv.armas[14].tipo=ARMA14tipo;
	jog->inv.armas[14].longe=ARMA14longe;
	jog->inv.armas[14].perto=ARMA14perto;
	jog->inv.armas[14].turnos=ARMA14turnos;
	jog->inv.armas[14].intel=ARMA14intel;
	jog->inv.armas[14].valor=ARMA14valor;
	
	for (i=0;i<QUANTARMAS;i++) jog->inv.armas[i].possui=0;
	
	strcpy(jog->inv.itens[0].nome, "Pingente do Sol");
	strcpy(jog->inv.itens[1].nome, "Globo Escuro");
	
	for (i=0;i<QUANTITENS;i++) jog->inv.itens[i].possui=0;
	
	clear();
	
	printf ("Digite seu nome (até 128 caracteres):\n");
	scanf (" %[^\n]s",jog->nome);
	
	while (1){
		clear();
		printf ("Escolha sua raça:\n\n");
		printf ("1 Humano\n");
		printf ("2 Orc\n");
		printf ("3 Elfo\n");
		printf ("4 Anão\n");
		
		int temp;

		scanf ("%d", &temp);
		//scanf("%d",&x);

		jog->raca = temp;

		if (jog->raca>=1 && jog->raca<=4) break;
		//if (x>=1 && x<=4) break;

		//clear();
		printf ("Raça inválida!\n\nPressione qualquer tecla para continuar");
	
		x = scanf ("%*c%c",&j);
	}

	int continua = 1;
	
	while (continua){
		clear();
		printf ("Escolha sua classe:\n\n");
		printf ("1 Guerreiro\n");
		printf ("2 Arqueiro\n");
		printf ("3 Ladino\n");
		printf ("4 Mago\n");
		
		scanf("%d",&x);

		jog->classe = x;
		printf("%d", jog->classe);

		if (jog->classe > 0 && jog->classe < 5) {
			clear();
			puts("Raca 1");
			continua = 0;


		} else
			printf ("Classe inválida!\n\nPressione qualquer tecla para continuar");
	}	

	switch (jog->raca){
		case 1:
			 jog->intelbase= 10;
			 jog->defbase= 10;
			 jog->longebase= 10;
			 jog->pertobase= 10;
			 jog->agibase = 10;
			break;
		case 2:
			 jog->intelbase= 4;
			 jog->defbase= 16;
			 jog->longebase= 8;
			 jog->pertobase= 18;
			 jog->agibase = 4;
			break;
		case 3:
			 jog->intelbase= 14;
			 jog->defbase= 6;
			 jog->longebase= 12;
			 jog->pertobase= 6;
			 jog->agibase = 12;
			break;
		case 4:
			 jog->intelbase= 8;
			 jog->defbase= 18;
			 jog->longebase= 4;
			 jog->pertobase= 14;
			 jog->agibase = 6;
			break;
	}
	
	switch (jog->classe){
		case 1: //guerreiro
			jog->inv.armas[6].possui=1;
			jog->inv.vestimentas[0].possui=1;
			jog->armaequipada=6;
			jog->vestequipada=0;
			break;
		case 2: //arqueiro
			jog->inv.armas[0].possui=1;
			jog->inv.vestimentas[1].possui=1;
			jog->armaequipada=0;
			jog->vestequipada=1;
			break;
		case 3: //ladino
			jog->inv.armas[1].possui=1;
			jog->inv.vestimentas[1].possui=1;
			jog->armaequipada=1;
			jog->vestequipada=1;
			break;
		case 4: //mago
			jog->inv.armas[9].possui=1;
			jog->inv.vestimentas[2].possui=1;
			jog->armaequipada=9;
			jog->vestequipada=2;
			break;
	}
	
	statusequipa(jog);

	return;
}

void statusequipa(jogador *jog){
	int a;
	char j;
	if (jog->xp >= jog->xpmaximo){
		jog->xp -= jog->xpmaximo;
		jog->nivel++;
		jog->xpmaximo = jog->xpmaximo + ((int)(jog->xpmaximo * PROGRESSAOXP));
		
		switch (jog->raca){
			
			case 1:
				jog->longebase += UPRACA1longe;
				jog->pertobase += UPRACA1perto;
				jog->intelbase += UPRACA1intel;
				jog->agibase += UPRACA1agi;
				jog->defbase += UPRACA1def;
				jog->hpmaximo += UPRACA1hpmaximo;
				jog->mpmaximo += UPRACA1mpmaximo;
				
				break;
			case 2:
				jog->longebase += UPRACA2longe;
				jog->pertobase += UPRACA2perto;
				jog->intelbase += UPRACA2intel;
				jog->agibase += UPRACA2agi;
				jog->defbase += UPRACA2def;
				jog->hpmaximo += UPRACA2hpmaximo;
				jog->mpmaximo += UPRACA2mpmaximo;
				break;
			case 3:
				jog->longebase += UPRACA3longe;
				jog->pertobase += UPRACA3perto;
				jog->intelbase += UPRACA3intel;
				jog->agibase += UPRACA3agi;
				jog->defbase += UPRACA3def;
				jog->hpmaximo += UPRACA3hpmaximo;
				jog->mpmaximo += UPRACA3mpmaximo;
				break;
			case 4:
				jog->longebase += UPRACA4longe;
				jog->pertobase += UPRACA4perto;
				jog->intelbase += UPRACA4intel;
				jog->agibase += UPRACA1agi;
				jog->defbase += UPRACA4def;
				jog->hpmaximo += UPRACA4hpmaximo;
				jog->mpmaximo += UPRACA4mpmaximo;
				break;
		}
		
		jog->hp = jog->hpmaximo;
		jog->mp = jog->mpmaximo;
		
		clear();
		printf ("Você subiu para o nível %d!\n\n",jog->nivel);
		printf ("Aperte enter para prosseguir\n");
		a = scanf ("%*c%c",&j);
		clear();
	}

	jog->longeatual=jog->longebase + jog->inv.armas[jog->armaequipada].longe;
	jog->pertoatual=jog->pertobase + jog->inv.armas[jog->armaequipada].perto;
	jog->defatual=jog->defbase + jog->inv.vestimentas[jog->vestequipada].def;
	jog->intelatual=jog->intelbase + jog->inv.vestimentas[jog->vestequipada].intel + jog->inv.armas[jog->armaequipada].intel;
	jog->agiatual=jog->agibase + jog->inv.vestimentas[jog->vestequipada].agi;
	return;
}

void limpasave (int n){
	FILE *save;
	
	switch (n){
		case 1:
			save = fopen ("save1","r+");
			break;
		case 2:
			save = fopen ("save2","r+");
			break;
		case 3:
			save = fopen ("save3","r+");
			break;
	}
	
	fprintf (save,"0\n");
	fclose (save);
}

int batalha (inimigo ini, jogador *jog){
	clear();
	int dano,contador,x,a,atqatual,repetir=0,defesq=0,xp,ouro;
	char j;
	
	if (ini.agi > jog->agiatual){
		clear();
		printf ("%s te ataca!\n\n",ini.nome);
		
		dano = sorteia (((int)(ini.atq-ini.atq*VARIACAO)),((int)(ini.atq+ini.atq*VARIACAO)));
		dano -= sorteia (jog->agiatual,jog->sorte);
		dano -= ((int)dano*(jog->defatual*0.01));
		
		if (dano<0) dano=0;
		
		printf ("Aperte enter para prosseguir\n");
		dano = scanf ("%*c%c",&j);
		clear();
		
		if (dano==0) printf ("%s errou!\n\n",ini.nome);
		else printf ("%s causou %d de dano!\n\n",ini.nome,dano);
		jog->hp -= dano;
		if (jog->hp < 0) jog->hp=0;
		
		
		
		if (jog->hp==0){
			printf ("Aperte enter para prosseguir\n");
			dano = scanf ("%*c%c",&j);
			clear();
			printf ("Você morreu.\n\n");
		}
		printf ("Aperte enter para prosseguir\n");
		dano = scanf ("%*c%c",&j);
		clear();
	}
	
	while (1){
		switch (jog->inv.armas[jog->armaequipada].tipo){
			case 0:
				atqatual=jog->longeatual;
				break;
			case 1:
				atqatual=jog->pertoatual;
				break;
			case 2:
				atqatual=jog->intelatual;
				break;
			case 3:
				atqatual=jog->longeatual;
				break;
			case 4:
				atqatual=jog->pertoatual;
				break;
		}
	
		contador = 1;
		clear();
		printf ("BATALHA\n\n");
		printf ("%s (%d/%d)\n",ini.nome, ini.hp , ini.hpmax);
		
		if (jog->hp == 0){
			printf ("Você morreu.\n\n");
			printf ("Aperte enter para prosseguir\n");
			dano = scanf ("%*c%c",&j);
			clear();
			return 0;
		}
		
		printf ("O que você faz?\n\n");
		
		printf ("1 Atacar\n");
		
		if (jog->magia1 = 1){
			contador++;
			printf ("%d Magia 1\n",contador);
		}
		
		if (jog->magia2 = 1){
			contador++;
			printf ("%d Magia 2\n",contador);
		}
		
		contador++;
		printf ("%d Defender\n",contador);
		
		contador++;
		printf ("%d Esquivar\n",contador);
		
		scanf ("%d",&x);
		
		if (jog->magia1 + jog->magia2 == 2){
			switch (x){
				case -9:
					while (1){
						clear();
						printf ("Tem certeza de que quer sair do jogo?\n\n");
						printf ("1 Sim\n");
						printf ("2 Não\n");
						scanf ("%d",&a);
						
						if (a==1) return -1;
						
						else if (a==2){
							repetir=1;
							break;
						}
						else{
							printf ("Opção inválida!\n\n");
							printf ("Aperte enter para prosseguir\n");
							a = scanf ("%*c%c",&j);
							clear();
						}
					}
					break;
				case -2:
					clear();
					printastatus (*jog);
					repetir=1;
					clear();
					break;
				case -1:
					clear();
					mexeinventario(jog);
					switch (jog->inv.armas[jog->armaequipada].tipo){
						case 0:
							atqatual=jog->longeatual;
							break;
						case 1:
							atqatual=jog->pertoatual;
							break;
						case 2:
							atqatual=jog->intelatual;
							break;
						case 3:
							atqatual=jog->longeatual;
							break;
						case 4:
							atqatual=jog->pertoatual;
							break;
					}
					repetir=1;
					clear();
					break;
				case 1:
					clear();
					printf ("Você ataca!\n\n");
					
					dano = sorteia ( ((int)(atqatual-atqatual*VARIACAO)),((int)(atqatual+atqatual*VARIACAO)) );
					dano += sorteia (0,jog->sorte);
					dano -= ((int)(ini.def*PORCENTAGEMDEFESA));
					
					if (dano<0) dano=0;
					
					if (dano < ini.agi/2){
						printf ("%s desvia do ataque!\n\n",ini.nome);
						dano=0;
					}else{
						printf ("Você causou %d de dano!\n\n",dano);
						ini.hp-=dano;
						
						if (ini.veneno==0 && (jog->inv.armas[jog->armaequipada].tipo == 3|| jog->inv.armas[jog->armaequipada].tipo == 4)){
							printf ("O inimigo foi envenenado!\n\n");
							ini.veneno=jog->inv.armas[jog->armaequipada].turnos;
						}
						
						if (ini.hp<=0){
							printf ("%s morreu!\n\n",ini.nome);
							printf ("Aperte enter para prosseguir\n");
							a = scanf ("%*c%c",&j);
							clear();
							xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
							jog->inv.ouro +=ouro;
							jog->xp += xp;
							printf ("Você ganhou %d de ouro!\n\n",ouro);
							printf ("Aperte enter para prosseguir\n");
							a = scanf ("%*c%c",&j);
							clear();
							return 1;
						}
					}
					
					printf ("Aperte enter para prosseguir\n");
					a = scanf ("%*c%c",&j);
					clear();
					break;
				case 2:
					clear();
					if (jog->mp>=MPMAGIA1){
						jog->mp -= MPMAGIA1;
						switch (jog->classe){
							case 1:
								printf ("Você usa o impacto profundo!\n\n");
								dano = sorteia ( ((int)(DANOMAGIA1CLASSE1-DANOMAGIA1CLASSE1*VARIACAO)),((int)(DANOMAGIA1CLASSE1+DANOMAGIA1CLASSE1*VARIACAO)) );
								dano += sorteia (0,jog->sorte);
								
								printf ("Você causou %d de dano!\n\n",dano);
								ini.hp-=dano;
							
								if (ini.hp<=0){
									printf ("%s morreu!\n\n",ini.nome);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
									jog->inv.ouro +=ouro;
									jog->xp += xp;
									printf ("Você ganhou %d de ouro!\n\n",ouro);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									return 1;
								}
								break;
							case 2:
								printf ("Você usa a chuva de flechas!\n\n");
								dano = sorteia ( ((int)(DANOMAGIA1CLASSE2-DANOMAGIA1CLASSE2*VARIACAO)),((int)(DANOMAGIA1CLASSE2+DANOMAGIA1CLASSE2*VARIACAO)) );
								dano += sorteia (0,jog->sorte);
								
								printf ("Você causou %d de dano!\n\n",dano);
								ini.hp-=dano;
							
								if (ini.hp<=0){
									printf ("%s morreu!\n\n",ini.nome);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
									jog->inv.ouro +=ouro;
									jog->xp += xp;
									printf ("Você ganhou %d de ouro!\n\n",ouro);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									return 1;
								}
								break;
							case 3:
								printf ("Você usa o corte sombrio!\n\n");
								dano = sorteia ( ((int)(DANOMAGIA1CLASSE3-DANOMAGIA1CLASSE3*VARIACAO)),((int)(DANOMAGIA1CLASSE3+DANOMAGIA1CLASSE3*VARIACAO)) );
								dano += sorteia (0,jog->sorte);
								
								printf ("Você causou %d de dano!\n\n",dano);
								ini.hp-=dano;
							
								if (ini.hp<=0){
									printf ("%s morreu!\n\n",ini.nome);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
									jog->inv.ouro +=ouro;
									jog->xp += xp;
									printf ("Você ganhou %d de ouro!\n\n",ouro);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									return 1;
								}
								break;
							case 4:
								printf ("Você usa o meteoro de fogo!\n\n");
								dano = sorteia ( ((int)(DANOMAGIA1CLASSE4-DANOMAGIA1CLASSE4*VARIACAO)),((int)(DANOMAGIA1CLASSE4+DANOMAGIA1CLASSE4*VARIACAO)) );
								dano += sorteia (0,jog->sorte);
								
								printf ("Você causou %d de dano!\n\n",dano);
								ini.hp-=dano;
							
								if (ini.hp<=0){
									printf ("%s morreu!\n\n",ini.nome);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
									jog->inv.ouro +=ouro;
									jog->xp += xp;
									printf ("Você ganhou %d de ouro!\n\n",ouro);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									return 1;
								}
								break;
						}
					}else{
						printf ("Você não tem mana suficiente!\n\n");
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						repetir=1;
					}
					break;
				case 3:
					clear();
					if (jog->mp>=MPMAGIA2){
						jog->mp -= MPMAGIA2;
						switch (jog->classe){
							case 1:
								printf ("Você usa a explosão sísmica!\n\n");
								dano = sorteia ( ((int)(DANOMAGIA2CLASSE1-DANOMAGIA2CLASSE1*VARIACAO)),((int)(DANOMAGIA2CLASSE1+DANOMAGIA2CLASSE1*VARIACAO)) );
								dano += sorteia (0,jog->sorte);
								
								printf ("Você causou %d de dano!\n\n",dano);
								ini.hp-=dano;
							
								if (ini.hp<=0){
									printf ("%s morreu!\n\n",ini.nome);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
									jog->inv.ouro +=ouro;
									jog->xp += xp;
									printf ("Você ganhou %d de ouro!\n\n",ouro);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									return 1;
								}
								break;
							case 2:
								printf ("Você usa a flecha supersônica!\n\n");
								dano = sorteia ( ((int)(DANOMAGIA2CLASSE2-DANOMAGIA2CLASSE2*VARIACAO)),((int)(DANOMAGIA2CLASSE2+DANOMAGIA2CLASSE2*VARIACAO)) );
								dano += sorteia (0,jog->sorte);
								
								printf ("Você causou %d de dano!\n\n",dano);
								ini.hp-=dano;
							
								if (ini.hp<=0){
									printf ("%s morreu!\n\n",ini.nome);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
									jog->inv.ouro +=ouro;
									jog->xp += xp;
									printf ("Você ganhou %d de ouro!\n\n",ouro);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									return 1;
								}
								break;
							case 3:
								printf ("Você usa o veneno de dragão!\n\n");
								dano = sorteia ( ((int)(DANOMAGIA2CLASSE3-DANOMAGIA2CLASSE3*VARIACAO)),((int)(DANOMAGIA2CLASSE3+DANOMAGIA2CLASSE3*VARIACAO)) );
								dano += sorteia (0,jog->sorte);
								
								printf ("Você causou %d de dano!\n\n",dano);
								ini.hp-=dano;
							
								if (ini.hp<=0){
									printf ("%s morreu!\n\n",ini.nome);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
									jog->inv.ouro +=ouro;
									jog->xp += xp;
									printf ("Você ganhou %d de ouro!\n\n",ouro);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									return 1;
								}
								break;
							case 4:
								printf ("Você usa a tempestade de raios!\n\n");
								dano = sorteia ( ((int)(DANOMAGIA2CLASSE4-DANOMAGIA2CLASSE4*VARIACAO)),((int)(DANOMAGIA2CLASSE4+DANOMAGIA2CLASSE4*VARIACAO)) );
								dano += sorteia (0,jog->sorte);
								
								printf ("Você causou %d de dano!\n\n",dano);
								ini.hp-=dano;
							
								if (ini.hp<=0){
									printf ("%s morreu!\n\n",ini.nome);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
									jog->inv.ouro +=ouro;
									jog->xp += xp;
									printf ("Você ganhou %d de ouro!\n\n",ouro);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									return 1;
								}
								break;
						}
					}else{
						printf ("Você não tem mana suficiente!\n\n");
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						repetir=1;
					}
					break;
				case 4:
					defesq=1;
					clear();
					break;
				case 5:
					defesq=2;
					clear();
					break;
					
				default:
					repetir=1;
					printf ("Opção inválida!\n\n");
					printf ("Aperte enter para prosseguir\n");
					a = scanf ("%*c%c",&j);
					clear();
					break;
			}
		}else if (jog->magia1 + jog->magia2 == 1){
			switch (x){
			
				case -9:
					while (1){
						clear();
						printf ("Tem certeza de que quer sair do jogo?\n\n");
						printf ("1 Sim\n");
						printf ("2 Não\n");
						scanf ("%d",&a);
						if (a==1) return -1;
						else if (a==2) break;
						else{
							printf ("Opção inválida!\n\n");
							printf ("Aperte enter para prosseguir\n");
							a = scanf ("%*c%c",&j);
							clear();
						}
					}
					break;
				case -2:
					clear();
					printastatus (*jog);
					break;
				case -1:
					clear();
					mexeinventario(jog);
					switch (jog->inv.armas[jog->armaequipada].tipo){
						case 0:
							atqatual=jog->longeatual;
							break;
						case 1:
							atqatual=jog->pertoatual;
							break;
						case 2:
							atqatual=jog->intelatual;
							break;
						case 3:
							atqatual=jog->longeatual;
							break;
						case 4:
							atqatual=jog->pertoatual;
							break;
					}
					clear();
					break;
				case 1:
					clear();
					printf ("Você ataca!\n\n");
					
					dano = sorteia ( ((int)(atqatual-atqatual*VARIACAO)),((int)(atqatual+atqatual*VARIACAO)) );
					dano += sorteia (0,jog->sorte);
					dano -= ((int)(ini.def*PORCENTAGEMDEFESA));
					
					if (dano<0) dano=0;
					
					if (dano < ini.agi/2){
						printf ("%s desvia do ataque!\n\n",ini.nome);
						dano=0;
					}else{
						printf ("Você causou %d de dano!\n\n",dano);
						ini.hp-=dano;
						
						if (ini.veneno==0 && (jog->inv.armas[jog->armaequipada].tipo == 3|| jog->inv.armas[jog->armaequipada].tipo == 4)){
							printf ("O inimigo foi envenenado!\n\n");
							ini.veneno=jog->inv.armas[jog->armaequipada].turnos;
						}
						
						if (ini.hp<=0){
							printf ("%s morreu!\n\n",ini.nome);
							printf ("Aperte enter para prosseguir\n");
							a = scanf ("%*c%c",&j);
							clear();
							xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
							jog->inv.ouro +=ouro;
							jog->xp += xp;
							printf ("Você ganhou %d de ouro!\n\n",ouro);
							printf ("Aperte enter para prosseguir\n");
							a = scanf ("%*c%c",&j);
							clear();
							return 1;
						}
					}
					
					printf ("Aperte enter para prosseguir\n");
					a = scanf ("%*c%c",&j);
					clear();
					break;
				case 2:
					clear();
					if (jog->mp>=MPMAGIA1){
						jog->mp -= MPMAGIA1;
						switch (jog->classe){
							case 1:
								printf ("Você usa o impacto profundo!\n\n");
								dano = sorteia ( ((int)(DANOMAGIA1CLASSE1-DANOMAGIA1CLASSE1*VARIACAO)),((int)(DANOMAGIA1CLASSE1+DANOMAGIA1CLASSE1*VARIACAO)) );
								dano += sorteia (0,jog->sorte);
								
								printf ("Você causou %d de dano!\n\n",dano);
								ini.hp-=dano;
							
								if (ini.hp<=0){
									printf ("%s morreu!\n\n",ini.nome);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
									jog->inv.ouro +=ouro;
									jog->xp += xp;
									printf ("Você ganhou %d de ouro!\n\n",ouro);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									return 1;
								}
								break;
							case 2:
								printf ("Você usa a chuva de flechas!\n\n");
								dano = sorteia ( ((int)(DANOMAGIA1CLASSE2-DANOMAGIA1CLASSE2*VARIACAO)),((int)(DANOMAGIA1CLASSE2+DANOMAGIA1CLASSE2*VARIACAO)) );
								dano += sorteia (0,jog->sorte);
								
								printf ("Você causou %d de dano!\n\n",dano);
								ini.hp-=dano;
							
								if (ini.hp<=0){
									printf ("%s morreu!\n\n",ini.nome);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
									jog->inv.ouro +=ouro;
									jog->xp += xp;
									printf ("Você ganhou %d de ouro!\n\n",ouro);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									return 1;
								}
								break;
							case 3:
								printf ("Você usa o corte sombrio!\n\n");
								dano = sorteia ( ((int)(DANOMAGIA1CLASSE3-DANOMAGIA1CLASSE3*VARIACAO)),((int)(DANOMAGIA1CLASSE3+DANOMAGIA1CLASSE3*VARIACAO)) );
								dano += sorteia (0,jog->sorte);
								
								printf ("Você causou %d de dano!\n\n",dano);
								ini.hp-=dano;
							
								if (ini.hp<=0){
									printf ("%s morreu!\n\n",ini.nome);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
									jog->inv.ouro +=ouro;
									jog->xp += xp;
									printf ("Você ganhou %d de ouro!\n\n",ouro);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									return 1;
								}
								break;
							case 4:
								printf ("Você usa o meteoro de fogo!\n\n");
								dano = sorteia ( ((int)(DANOMAGIA1CLASSE4-DANOMAGIA1CLASSE4*VARIACAO)),((int)(DANOMAGIA1CLASSE4+DANOMAGIA1CLASSE4*VARIACAO)) );
								dano += sorteia (0,jog->sorte);
								
								printf ("Você causou %d de dano!\n\n",dano);
								ini.hp-=dano;
							
								if (ini.hp<=0){
									printf ("%s morreu!\n\n",ini.nome);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
									jog->inv.ouro +=ouro;
									jog->xp += xp;
									printf ("Você ganhou %d de ouro!\n\n",ouro);
									printf ("Aperte enter para prosseguir\n");
									a = scanf ("%*c%c",&j);
									clear();
									return 1;
								}
								break;
						}
					}else{
						printf ("Você não tem mana suficiente!\n\n");
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						repetir=1;
					}
					break;
				case 3:
					defesq=1;
					clear();
					break;
				
				case 4:
					defesq=2;
					clear();
					break;
					
					
				default:
					repetir=1;
					printf ("Opção inválida!\n\n");
					printf ("Aperte enter para prosseguir\n");
					a = scanf ("%*c%c",&j);
					clear();
					break;
			}
		}else{
			switch (x){
				case -9:
					while (1){
						clear();
						printf ("Tem certeza de que quer sair do jogo?\n\n");
						printf ("1 Sim\n");
						printf ("2 Não\n");
						scanf ("%d",&a);
						if (a==1) return -1;
						else if (a==2) break;
						else{
							printf ("Opção inválida!\n\n");
							printf ("Aperte enter para prosseguir\n");
							a = scanf ("%*c%c",&j);
							clear();
						}
					}
					break;
				case -2:
					clear();
					printastatus (*jog);
					break;
				case -1:
					clear();
					mexeinventario(jog);
					switch (jog->inv.armas[jog->armaequipada].tipo){
						case 0:
							atqatual=jog->longeatual;
							break;
						case 1:
							atqatual=jog->pertoatual;
							break;
						case 2:
							atqatual=jog->intelatual;
							break;
						case 3:
							atqatual=jog->longeatual;
							break;
						case 4:
							atqatual=jog->pertoatual;
							break;
					}
					clear();
					break;
				case 1:
					clear();
					printf ("Você ataca!\n\n");
					
					dano = sorteia ( ((int)(atqatual-atqatual*VARIACAO)),((int)(atqatual+atqatual*VARIACAO)) );
					dano += sorteia (0,jog->sorte);
					dano -= ((int)(ini.def*PORCENTAGEMDEFESA));
					
					if (dano<0) dano=0;
					
					if (dano < ini.agi/2){
						printf ("%s desvia do ataque!\n\n",ini.nome);
						dano=0;
					}else{
						printf ("Você causou %d de dano!\n\n",dano);
						ini.hp-=dano;
						
						if (ini.veneno==0 && (jog->inv.armas[jog->armaequipada].tipo == 3|| jog->inv.armas[jog->armaequipada].tipo == 4)){
							printf ("O inimigo foi envenenado!\n\n");
							ini.veneno=jog->inv.armas[jog->armaequipada].turnos;
						}
						
						if (ini.hp<=0){
							printf ("%s morreu!\n\n",ini.nome);
							printf ("Aperte enter para prosseguir\n");
							a = scanf ("%*c%c",&j);
							clear();
							xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
							jog->inv.ouro +=ouro;
							jog->xp += xp;
							printf ("Você ganhou %d de ouro!\n\n",ouro);
							printf ("Aperte enter para prosseguir\n");
							a = scanf ("%*c%c",&j);
							clear();
							return 1;
						}
					}
					
					printf ("Aperte enter para prosseguir\n");
					a = scanf ("%*c%c",&j);
					clear();
					break;
				case 2:
					defesq=1;
					clear();
					break;
				case 3:
					defesq=2;
					clear();
					break;
				default:
					repetir=1;
					printf ("Opção inválida!\n\n");
					printf ("Aperte enter para prosseguir\n");
					a = scanf ("%*c%c",&j);
					clear();
					break;
			}
		}
		
		if (repetir == 1){
			repetir=0;
			continue;
		}
		
		clear();
		printf ("%s te ataca!\n\n",ini.nome);
		
		dano = sorteia (((int)(ini.atq-ini.atq*VARIACAO)),((int)(ini.atq+ini.atq*VARIACAO)));
		dano -= sorteia (jog->agiatual,jog->sorte);
		dano -= ((int)dano*(jog->defatual*0.01));
		
		if (dano<0) dano=0;
		if (dano==0) printf ("%s errou!\n\n",ini.nome);
		else if (defesq==1){
			defesq=0;
			dano -= (int)(jog->defatual*2*PORCENTAGEMDEFESA);
			if (dano<0) dano=0;
			if (dano==0) printf ("Você bloqueia totalmente o ataque!\n\n");
			else printf ("Você se defende, porém %s causa %d de dano!\n\n",ini.nome,dano);
		}
		else if (defesq==2){
			defesq=0;
			dano -= (int)(jog->agiatual*0.1);
			if (dano<jog->agiatual) dano=0;
			if (dano<0) dano=0;
			if (dano==0) printf ("Você desvia do ataque!\n\n");
			else printf ("Você se esquiva, porém %s causa %d de dano!\n\n",ini.nome,dano);
		}
		else printf ("%s causou %d de dano!\n\n",ini.nome,dano);
		
		jog->hp -= dano;
		
		printf ("Aperte enter para prosseguir\n");
		dano = scanf ("%*c%c",&j);
		clear();
		
		if (jog->hp < 0) jog->hp=0;
		if (jog->hp==0){
			printf ("Aperte enter para prosseguir\n");
			dano = scanf ("%*c%c",&j);
			clear();
			printf ("Você morreu.\n\n");
		}
		printf ("Aperte enter para prosseguir\n");
		dano = scanf ("%*c%c",&j);
		clear();
		
		if (ini.veneno>0){
			ini.veneno--;
			printf ("%s sofre com o envenenamento e perde %d de vida!\n\n",ini.nome,atqatual);
			ini.hp -= atqatual;
			printf ("Aperte enter para prosseguir\n");
			a = scanf ("%*c%c",&j);
			clear();
			
			if (ini.hp<=0){
				printf ("%s morreu!\n\n",ini.nome);
				printf ("Aperte enter para prosseguir\n");
				a = scanf ("%*c%c",&j);
				clear();
				xp=ouro = (int)((1+((float)jog->hp/jog->hpmaximo))*(ini.hpmax+ini.def+ini.atq+ini.agi));
				jog->inv.ouro +=ouro;
				jog->xp += xp;
				printf ("Você ganhou %d de ouro!\n\n",ouro);
				printf ("Aperte enter para prosseguir\n");
				a = scanf ("%*c%c",&j);
				clear();
				return 1;
			}
		}
		clear();
	}
}

int telanovojogo(jogador jog, int s1, int s2, int s3){

	//COMECO DA ALTERACAO 1 FEITA POR THIAGO NA PRIMEIRA TELA DO NOVO JOGO

	/*
	 * Alterei os prints para mostra o conteudo do arquivo, sendo que caso o arquivo for NULL
	 * significa que está vazio, caso o contrario ele mostra os status.
	 * A ultima alteração foi na seleção do slot, ele irá ser direcionado para a funcao novojogo.
	 * passando como parametro o numero do slot escolhido. (entende o N da entrada da funcao como o numero do slot)
	*/

	int op_selecionado;

	logo();

	

	printf("\n 4 Menu\n\n");


	while(1){
		scanf("%d",&op_selecionado);
		if(op_selecionado==4)return 9;
		if(op_selecionado==1)return 1; //vai para a funcao novojogo com opcao
		if(op_selecionado==2)return 2;	//vai para a funcao novojogo com opcao 2
		if(op_selecionado==3)return 3;	//vai para a funcao novojogo com opcao 3
	}

	// FIM DA ALTERACAO 1 FEITA POR THIAGO NA PRIMEIRA TELA DO NOVO JOGO
}

int telacarregarjogo(jogador jog, int s1, int s2, int s3){

	int op_selecionado;
	
	logo();

	printf("Selecione o slot desejado\n");

	if(s1 != 0) printf("1 %s\nCLASSE:%d HP:%d/%d MP:%d/%d XP:%d/%d \n\n",jog.nome, jog.classe, jog.hp, jog.hpmaximo, jog.mp,jog.mpmaximo, jog.xp, jog.xpmaximo);
	else printf ("1 Slot vazio\n\n");
	if(s2 != 0) printf("2 %s\nCLASSE:%d HP:%d/%d MP:%d/%d XP:%d/%d \n\n",jog.nome, jog.classe, jog.hp, jog.hpmaximo, jog.mp,jog.mpmaximo, jog.xp, jog.xpmaximo); 
	else printf ("2 Slot vazio\n\n");
	if(s3 != 0) printf("3 %s\nCLASSE:%d HP:%d/%d MP:%d/%d XP:%d/%d \n\n",jog.nome, jog.classe, jog.hp, jog.hpmaximo, jog.mp,jog.mpmaximo, jog.xp, jog.xpmaximo); 
	else printf ("3 Slot vazio\n\n");

	printf("\n 4 Menu\n\n");

	while(1){
		scanf("%d",&op_selecionado);
		if(op_selecionado==4)return 9; //retorna para o menu
		if(op_selecionado==1)return 1;	// vai para o slot1 
		if(op_selecionado==2)return 2;	// vai para o slot2 
		if(op_selecionado==2)return 3;	// vai para o slot3 

	}
	//fim DA ALTERACAO 1 FEITA POR THIAGO NA PRIMEIRA TELA DE CARREGAMENTO DO JOGO
}



void logo(){
	set_fg_rgb(255, 255, 255);
	set_bg_rgb(0, 0, 0);
	clear();

	char linha_logo[1000];
	FILE *arq;
	int i=0;
	arq = fopen("logo.txt","r");
	if(!arq){
		printf("ERRO NA LEITURA DA LOGO\n");
		return;
	}

	while(fgets(linha_logo,1000,arq) != NULL){
		printf("%s",linha_logo);
	}
	fclose(arq);

}


int verif_tamanho_arq(FILE *nome_arq){
    int tam; 

    if(nome_arq == NULL)
        return 0;

    tam = ftell(nome_arq);

    return tam;
}


void printastatus (jogador jog){
	int a;
	char j;
	printf("%s\n", jog.nome);
	printf("Nível: %d\n", jog.nivel);
	printf("XP: %d/%d\n", jog.xp, jog.xpmaximo);
	printf("Vida: %d/%d\n", jog.hp, jog.hpmaximo);
	printf("Mana: %d/%d\n", jog.mp, jog.mpmaximo);
	printf("Defesa: %d\n", jog.defatual);
	printf("Dano ataque de perto: %d\nDano de ataque de longe: %d\n", jog.pertoatual, jog.longeatual);
	printf("Inteligência: %d\n", jog.intelatual);
	printf("Agilidade: %d\n", jog.agiatual);
	printf("Sorte: %d\n", jog.sorte);
	printf ("\nAperte enter para prosseguir\n");
	a = scanf ("%*c%c",&j);
	return;
}

void mexeinventario (jogador *jog){
	int x,a,repete=0,i,contador=0;
	char j;

	while(1){
		clear();
		printf("INVENTÁRIO\n\nOuro: %d\n", jog->inv.ouro);
		printf("Quantidade de poções de vida: %d\n", jog->inv.pocaovida);
		printf("Quantidade de poções de mana: %d\n", jog->inv.pocaomana);
		
		printf("Itens:\n\n");
		for(i = 0; i < QUANTITENS; i++){
			if(jog->inv.itens[i].possui != 0) printf("%s\n", jog->inv.itens[i].nome);
		}
		printf("\n");
		
		printf("1 Equipar arma\n");
		printf("2 Equipar vestimenta\n");
		printf("3 Tomar poção de vida\n");
		printf("4 Tomar poção de mana\n");
		printf("5 Sair do inventário\n\n");
		
		scanf("%d", &x);
		
		switch (x){
			
			case 1: //armas
				while (1){
					
					clear();
					contador=1;
					
					printf ("Qual arma você quer equipar?\n\n");
					
					for (i=0;i<QUANTARMAS;i++){
						if (jog->inv.armas[i].possui==0){
							printf ("%d %s ",contador,jog->inv.armas[i].nome);
							if (jog->inv.armas[i].perto>0) printf ("+%d Dano de perto ",jog->inv.armas[i].perto);
							if (jog->inv.armas[i].longe>0) printf ("+%d Dano de longe ",jog->inv.armas[i].longe);
							if (jog->inv.armas[i].intel>0) printf ("+%d Inteligência ",jog->inv.armas[i].intel);
							if (jog->inv.armas[i].turnos>0) printf ("e Envenenamento por %d Turnos ",jog->inv.armas[i].turnos);
							printf ("\n");
							
							contador++;
						}
					}
					
					printf ("\n");
					
					scanf ("%d",&x);
					
					if (x<=0 || x>contador){
						clear();
						printf ("Opção inválida!\n\n");
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						continue;
					}
					
					contador=1;
					for (i=0;QUANTARMAS;i++){
						if (jog->inv.armas[i].possui==0) contador++;
						if (contador==x) break;
					}
					
					jog->armaequipada=i;
					break;
				}
				break;
			case 2: //vestimentas
				while (1){
					
					clear();
					contador=1;
					
					printf ("Qual vestimenta você quer equipar?\n\n");
					
					for (i=0;i<QUANTVESTIMENTAS;i++){
						if (jog->inv.vestimentas[i].possui==0){
							printf ("%d %s ",contador,jog->inv.vestimentas[i].nome);
							if (jog->inv.vestimentas[i].def>0) printf ("+%d Defesa ",jog->inv.vestimentas[i].def);
							if (jog->inv.vestimentas[i].agi>0) printf ("+%d Agilidade ",jog->inv.vestimentas[i].agi);
							if (jog->inv.vestimentas[i].intel>0) printf ("+%d Inteligência ",jog->inv.vestimentas[i].intel);
							printf ("\n");
							
							contador++;
						}
					}
					
					printf ("\n");
					
					scanf ("%d",&x);
					
					if (x<=0 || x>contador){
						clear();
						printf ("Opção inválida!\n\n");
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						continue;
					}
					
					contador=1;
					for (i=0;QUANTVESTIMENTAS;i++){
						if (jog->inv.vestimentas[i].possui==0) contador++;
						if (contador==x) break;
					}
					
					jog->vestequipada=i;
					break;
				}
				break;
			case 3:	
				clear();
				if (jog->inv.pocaovida >0){
					jog->inv.pocaovida--;
					jog->hp += (int)(jog->hpmaximo*RECUPERACAOPOCAO);
					if (jog->hp > jog->hpmaximo) jog->hp = jog->hpmaximo;
					printf ("Você tomou uma poção de vida!\n\n");
				}else printf ("Você não tem poções de vida!\n\n");
				
				printf ("Aperte enter para prosseguir\n");
				a = scanf ("%*c%c",&j);
				repete=1;
				break;
			
			case 4:
				clear();
				if (jog->inv.pocaomana >0){
					jog->inv.pocaomana--;
					jog->mp += (int)(jog->mpmaximo*RECUPERACAOPOCAO);
					if (jog->mp > jog->mpmaximo) jog->mp = jog->mpmaximo;
					printf ("Você tomou uma poção de mana!\n\n");
				}else printf ("Você não tem poções de mana!\n\n");
				
				printf ("Aperte enter para prosseguir\n");
				a = scanf ("%*c%c",&j);
				repete=1;
				break;
				break;
			case 5:
				statusequipa(jog);
				salvar(*jog);
				return;
		
			default:
				repete=1;
				printf("Opção inválida!\n\n");
				printf ("Aperte enter para prosseguir\n");
				a = scanf ("%*c%c",&j);
				clear();
				break;
		}
		
		if (repete=1){
			repete=0;
			continue;
		}
	statusequipa(jog);
	salvar (*jog);
	return;
	}
}

int sorteia (int RANDMIN,int RANDMAX){
	return RANDMIN + rand()%(RANDMAX-RANDMIN+1);
}

int situacao (jogador *jog){
	
	int x;
	char j;

	inimigo guarda;
	strcpy(guarda.nome,"Guarda");
	guarda.hpmax=30;
	guarda.hp=30;
	guarda.def=4;
	guarda.atq=8;
	guarda.agi=5;
	guarda.veneno=0;
	
	clear();
	
	// SWITCH PARA PRINTAR SITUAÇÃO
	
	switch (jog->situacaoatual){
		case 0:
			if (jog->situacoespassadas[jog->situacaoatual]==0){
				printf ("Você está na praça de uma cidade desconhecida, porém familiar. Inconscientemente, você sabe que ela possui aquilo que procura: aventura!\n\nCheio de espírito e energia, você está pronto para iniciar sua jornada. Para onde deseja ir?\n\n");
			}else printf ("Para onde deseja ir?\n\n");
			
			printf ("1 Taberna\n");
			printf ("2 Loja\n");
			printf ("3 Igreja\n");
			printf ("4 Castelo\n\n");
			break;
		case 2:	
			clear();
			if (loja(jog)==-1) return -1;
			else return 0;
		
		case 3:
			printf ("Uma enorme cruz enfeita o telhado da igreja e guia você até a entrada. As janelas em mosaico colorido formam imagens de quatro divindades: dois homens usando armaduras de malha de cristal, o primeiro com uma besta e o outro com uma foice, uma mulher de túnica e luvas brilhantes, e outra com uma armadura e um martelo. Alguns sacerdotes estão estudando escrituras sagradas mais à frente. O que você faz?\n\n");
			
			printf ("1 Perguntar sobre as divindades\n");
			printf ("2 Pedir bênção\n");
			printf ("3 Rezar para os Protetores\n");
			printf ("4 Voltar para a cidade\n\n");
			break;
		case 4:
			printf ("Você anda até o castelo. É fácil saber como chegar lá, pois há uma longa estrada de pedras direcionada a duas altas torres cinzas e pontudas. Aproximando-se pela estrada você nota um guarda vigiando os enormes portões de ferro que protegem a família real de intrusos. O que você faz?\n\n");
			
			printf ("1 Avançar para o portão\n");
			printf ("2 Contornar o castelo\n");
			printf ("3 Voltar para a cidade\n");
			printf ("4 Voltar para a cidade\n\n");
			break;
		
		case 5:
			printf ("Você é parado pelo guarda, que te olha com desprezo. “O que quer aqui?” diz, com a mão preparada para puxar a espada. “É proibido entrar no castelo!”, grita o guarda. Ele está preparado para atacar, o que você faz?\n\n");
			
			printf ("1 Atacar o guarda para entrar no castelo\n");
			printf ("2 Subornar o guarda para entrar no castelo\n");
			printf ("3 Voltar para a cidade\n");
			printf ("4 Voltar para a cidade\n\n");
			break;
		case 6:
			printf ("Ao contornar o castelo você não encontra nenhuma entrada, porém acha um globo escuro caído do lado de uma parede que parece ter sido construída recentemente. O que você faz?\n\n");
			printf ("1 Pegar o globo e ir para o portão do castelo\n");
			printf ("2 Pegar o globo e voltar para a cidade\n");
			printf ("3 Ir para o portão do castelo\n");
			printf ("4  Voltar para a cidade\n\n");
			break;
		case 7:
			if (jog->situacoespassadas[7]==0) printf ("Você baixa os portões do castelo por conta própria. À medida que o interior do castelo é revelado você sente uma aura estranha corromper o ambiente, há algo de errado. Todos os corredores estão vazios, as tochas apagadas, e uma grave som ecoa pelas paredes do castelo, cíclico, como o bater de um coração.\n\n");
			printf ("Há um corredor principal que leva à sala do trono, uma escada em espiral para subir até a torre de vigia e um alçapão, que provavelmente leva ao porão do castelo. Para onde você vai?\n\n");
			
			printf ("1 Seguir para a sala do trono\n");
			printf ("2 Subir para a torre de vigia\n");
			printf ("3 Descer para o porão\n");
			printf ("4 Voltar para a cidade\n\n");
			break;
		case 8:
			printf ("A subida parece interminável, degrau a degrau, o movimento em círculos te tonteia cada vez mais. As batidas que vêm das paredes aumentam, o barulho é ensurdecedor, porém, você finalmente chega na porta para entrada da torre, e ao abrir, a luz do dia banha seu corpo, retornando seus sentidos. Assim que o foco volta à visão, você percebe que há um homem em pé de frente para uma parede e de costas para você, sua pele é pálida e em suas mãos está um arco longo. O que você faz?\n\n");
			
			printf ("1 Falar com o homem\n");
			printf ("2 Atacar o homem\n");
			printf ("3 Voltar para a entrada do castelo\n");
			printf ("4 Voltar para a entrada do castelo \n\n");
			break;
		case 11:
			printf ("O eco das batidas que vem das paredes do castelo se torna cada vez mais forte, a pressão do local está mudando, você sente frio, ao mesmo tempo em que o suor escorre pelo rosto e goteja no chão. Cada mínimo som soa como o disparar de um canhão dentro de sua cabeça, e ao parar para respirar, o absoluto silêncio cria uma sensação de desespero. Você não sabe mais se está indo ou voltando pelo corredor, que cada vez parece estar mais estreito. Vozes te dizem para seguir, outras para parar, mas o que lhe preocupa é se elas realmente existem ou se vêem da sua cabeça.\n\n");
			
			printf ("Aperte enter para prosseguir\n");
			x=scanf ("%*c%c",&j);
			clear();
			
			printf ("Enfim, você grita. E grita para tudo isso acabar, porém a loucura invade sua mente a cada esforça para pedir ajuda.\n\n");
			
			printf ("Aperte enter para prosseguir\n");
			x=scanf ("%*c%c",&j);
			clear();
			
			printf ("Você foi dominado pela escuridão.\n\n");
			
			printf ("Aperte enter para prosseguir\n");
			x=scanf ("%*c%c",&j);
			clear();
			
			printf ("Você morreu.\n\n");
			
			printf ("Aperte enter para prosseguir\n");
			x=scanf ("%*c%c",&j);
			return -1;
			
		case 13:
			printf ("Antes que possa fazer qualquer coisa, uma escuridão cobre o homem, que desaparece como se nunca houvesse ninguém ali. Após a escuridão ser dissipada, revela-se o arco longo do homem, caído no chão. O que você faz?\n\n");
			
			printf ("1 Pegar o arco e voltar para a entrada do castelo\n");
			printf ("2 Voltar para a entrada do castelo\n");
			printf ("3 Voltar para a entrada do castelo\n");
			printf ("4 Voltar para a entrada do castelo\n\n");
			break;
		case 14:
			printf ("“São os Protetores”, diz um sacerdote. “Há muito tempo as forças da escuridão dominavam tudo o que existia, e todos os seres eram escravizados pela loucura. Porém, os quatro Protetores se libertaram da insanidade e purificaram a terra em que vivemos, para que assim pudéssemos prosperar. Desde então a escuridão é mantida longe pelo poder dos Protetores, e por isso precisamos continuar apoiando-os para mantê-los de pé em suas batalhas”. O que você faz?\n\n");
			
			printf ("1 Pedir bênção\n");
			printf ("2 Rezar para os Protetores\n");
			printf ("3 Voltar para a cidade\n");
			printf ("4 Voltar para a cidade\n\n");
			break;
		case 16:
			printf ("Sua fé recupera sua alma\n\n");
			jog->mp = jog->mpmaximo;
			jog->hp=jog->hpmaximo;
			if (jog->nivel >= 4 && (jog->magia1 ==0 ||jog->magia2==0) ){
				jog->magia1=1;
				if (jog->nivel >= 8) jog->magia2=1;
				printf ("Os deuses lhe agraciam com uma nova habilidade\n\n");
			}
			
			printf ("O que você faz?\n\n");
			
			printf ("1 Perguntar sobre as divindades\n");
			printf ("2 Pedir bênção\n");
			printf ("3 Voltar para a cidade\n");
			printf ("4 Voltar para a cidade\n\n");
			break;
	}
	
	//SWITCH DA ESCOLHA DO JOGADOR
	
	jog->situacoespassadas[jog->situacaoatual]=1;
	scanf ("%d",&x);
	
	switch (x){
	
		case -9:
			while(1){
				clear();
				printf ("Tem certeza de que quer sair do jogo?\n\n");
				printf ("1 Sim\n");
				printf ("2 Não\n");
				scanf ("%d",&x);
				switch (x){
					case 1:
						return -1;
					case 2:
						return jog->situacaoatual;
					default:
						clear();
						printf ("Opção Inválida!\n\n");
						printf ("Aperte enter para prosseguir\n");
						x = scanf ("%*c%c",&j);
						break;
				}
			}
		case -2:
			clear();
			printastatus(*jog);
			clear();
			return jog->situacaoatual;
		case -1:
			clear();
			mexeinventario(jog);
			clear();
			return jog->situacaoatual;
		case 1:
			switch (jog->situacaoatual){
				case 0:
					return 1;
				case 1:
					return x;
				case 2:
					clear();
					if(loja(jog)==-1) return -1;
					else return jog->situacaoatual;
				case 3:
					return 14;
				case 4:
					return 5;
				case 5:
					switch (batalha(guarda,jog)){
						case -1:
							return -1;
						case 0:
							limpasave(jog->save);
							return -1;
						case 1:
							statusequipa(jog);
							return 7;
					}
				case 6:
					jog->inv.itens[1].possui=1;
					return 5;
				case 7:
					return 8;
				case 8:
					return 11;
				case 9:
					return 13;
				case 10:
					return x;
				case 11:
					return x;
				case 12:
					return x;
				case 13:
					clear();
					printf ("Após descer da torre, um forte tremor chacoalha o castelo, e a escada é coberta por uma fluida massa escura, que some rapidamente, deixando para trás somente destroços da escada.\n\n");
					printf ("Aperte enter para prosseguir\n");
					x=scanf ("%*c%c",&j);
					return 7;
				case 14:
					return 15;
				case 15:
					return x;
				case 16:
					return 14;
				case 17:
					return x;
				case 18:
					return x;
				case 19:
					return x;
				case 20:
					return x;
			}
			break;
		case 2:
			switch (jog->situacaoatual){
				case 0:
					return 2;
				case 1:
					return x;
				case 2:
					return x;
				case 3:
					return 15;
				case 4:
					return 6;
				case 5:
				
					if (jog->inv.ouro >= 200){
						jog->inv.ouro -= 200;
						printf ("Você subornou o guarda para passar pelo castelo.\n\n");
						printf ("Aperte enter para continuar\n");
						x=scanf ("%*c%c",&j);
						return 7;
					}else{
						clear();
						printf ("Você não tem ouro o suficiente para isso!\n\n");
						printf ("Você trava uma batlha com o guarda!\n\n");
						printf ("Aperte enter para continuar\n");
						x=scanf ("%*c%c",&j);
						switch (batalha(guarda,jog)){
							case -1:
								return -1;
							case 0:
								limpasave(jog->save);
								return -1;
							case 1:
								statusequipa(jog);
								return 7;
						}
					}
					return x;
				case 6:
					jog->inv.itens[1].possui=1;
					return 0;
				case 7:
					if (jog->situacoespassadas[13]==1) return 10;
					else return 9;
				case 8:
					if (jog->inv.itens[0].possui==1) return 12;
					else return 7;
				case 9:
					return 13;
				case 10:
					return x;
				case 11:
					return x;
				case 12:
					return x;
				case 13:
					clear();
					printf ("Após descer da torre, um forte tremor chacoalha o castelo, e a escada é coberta por uma fluida massa escura, que some rapidamente, deixando para trás somente destroços da escada.\n\n");
					printf ("Aperte enter para prosseguir\n");
					x=scanf ("%*c%c",&j);
					return 7;
				case 14:
					return 16;
				case 15:
					return x;
				case 16:
					return 15;
				case 17:
					return x;
				case 18:
					return x;
				case 19:
					return x;
				case 20:
					return x;
			}
			break;
		case 3:
			switch (jog->situacaoatual){
				case 0:
					return 3;
				case 1:
					return x;
				case 2:
					return x;
				case 3:
					if (jog->situacoespassadas[14]==1) return 16;
					else return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 5;
				case 7:
					if (jog->situacoespassadas[13]==1) return 0;
					else return 10;
				case 8:
					return 7;
				case 9:
					return 13;
				case 10:
					return x;
				case 11:
					return x;
				case 12:
					return x;
				case 13:
					clear();
					printf ("Após descer da torre, um forte tremor chacoalha o castelo, e a escada é coberta por uma fluida massa escura, que some rapidamente, deixando para trás somente destroços da escada.\n\n");
					printf ("Aperte enter para prosseguir\n");
					x=scanf ("%*c%c",&j);
					return 7;
				case 14:
					return 0;
				case 15:
					return x;
				case 16:
					return 0;
				case 17:
					return x;
				case 18:
					return x;
				case 19:
					return x;
				case 20:
					return x;
			}
			break;
		case 4:
			switch (jog->situacaoatual){
				case 0:
					if (jog->situacoespassadas[4]==0)return 4;
					else return 7;
				case 1:
					return x;
				case 2:
					return x;
				case 3:
					if (jog->situacoespassadas[14]==1) return 0;
					else{
						clear();
						printf ("Opção inválida!\n\n");
						printf ("Aperte enter para prosseguir\n");
						x=scanf ("%*c%c",&j);
						return jog->situacaoatual;
					}
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					if (jog->situacoespassadas[13]==1){
						clear();
						printf ("Opção inválida!\n\n");
						printf ("Aperte enter para prosseguir\n");
						x=scanf ("%*c%c",&j);
						return jog->situacaoatual;
					}
					else return 0;
				case 8:
					if (jog->inv.itens[0].possui==1) return 7;
					else{
						clear();
						printf ("Opção inválida!\n\n");
						printf ("Aperte enter para prosseguir\n");
						x=scanf ("%*c%c",&j);
						return jog->situacaoatual;
					}
				case 9:
					return 13;
				case 10:
					return x;
				case 11:
					return x;
				case 12:
					return x;
				case 13:
					clear();
					printf ("Após descer da torre, um forte tremor chacoalha o castelo, e a escada é coberta por uma fluida massa escura, que some rapidamente, deixando para trás somente destroços da escada.\n\n");
					printf ("Aperte enter para prosseguir\n");
					x=scanf ("%*c%c",&j);
					return 7;
				case 14:
					return 0;
				case 15:
					return x;
				case 16:
					return 0;
				case 17:
					return x;
				case 18:
					return x;
				case 19:
					return x;
				case 20:
					return x;
			}
			break;
		default:
			clear();
			printf ("Opção inválida!\n\n");
			printf ("Aperte enter para prosseguir\n");
			x=scanf ("%*c%c",&j);
			return jog->situacaoatual;
	}
}

int loja (jogador *jog){
	int x,repete=0,contador,i,a;
	char j;

	while(1){
		statusequipa(jog);
		clear();
		printf("LOJA\n\nSeu ouro: %d\n\nO que você faz?\n\n", jog->inv.ouro);
		printf("1 Comprar armas\n");
		printf("2 Comprar vestimentas\n");
		printf("3 Comprar poções de vida\n");
		printf ("4 Comprar poções de mana\n");
		printf("5 Voltar para a Cidade\n\n");
		
		scanf("%d", &x);
		
		switch (x){
			
			case -9:
				while(1){
					clear();
					printf ("Tem certeza de que quer sair do jogo?\n\n");
					printf ("1 Sim\n");
					printf ("2 Não\n");
					scanf ("%d",&x);
					switch (x){
						case 1:
							statusequipa(jog);
							salvar(*jog);
							return -1;
						case 2:
							repete=1;
							break;
						default:
							clear();
							printf ("Opção Inválida!\n\n");
							printf ("Aperte enter para prosseguir\n");
							x = scanf ("%*c%c",&j);
							repete=1;
							break;
					}
					
					if (repete=1) break;
				}
			case -2:
				clear();
				printastatus(*jog);
				repete=1;
				break;
			case -1:
				clear();
				mexeinventario(jog);
				repete=1;
				break;
			case 1: //armas
				while (1){
					
					//clear();
					contador=1;
					
					for (i=0;i<QUANTARMASCOMPRAVEIS;i++){
						if (jog->inv.armas[i].possui==0) break;
					}
					
					if (i==QUANTARMASCOMPRAVEIS){
						repete=1;
						clear();
						printf ("O estoque de armas se esgotou!\n\n");
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						break;
					}
					clear();
					printf ("Qual arma você quer comprar?\n\n");
					
					for (i=0;i<QUANTARMASCOMPRAVEIS;i++){
						if (jog->inv.armas[i].possui==0){
							printf ("%d %s (%d de ouro) ",contador,jog->inv.armas[i].nome,jog->inv.armas[i].valor);
							if (jog->inv.armas[i].perto>0) printf ("+%d Dano de perto ",jog->inv.armas[i].perto);
							if (jog->inv.armas[i].longe>0) printf ("+%d Dano de longe ",jog->inv.armas[i].longe);
							if (jog->inv.armas[i].intel>0) printf ("+%d Inteligência ",jog->inv.armas[i].intel);
							if (jog->inv.armas[i].turnos>0) printf ("e Envenenamento por %d Turnos ",jog->inv.armas[i].turnos);
							printf ("\n");
							
							contador++;
						}
					}
					
					printf ("%d Voltar para  a loja\n",contador);
					
					scanf ("%d",&x);
						
					if (x==contador){
						repete=1;
						break;
					}

					if (x>contador || x<=0){
						clear();
						printf ("Opção inválida!\n\n");
						printf ("Aperte enter para prosseguir\n");
						scanf  ("%*c%c",&j);
						repete=1;
						break;
					}

					contador=0;
					for (i=0;QUANTARMASCOMPRAVEIS;i++){
						if (jog->inv.armas[i].possui==0) contador++;
						if (contador==x) break;
					}
					
					if (jog->inv.armas[i].valor > jog->inv.ouro){
						clear();
						printf ("Você não tem ouro suficiente para comprar isso!\n\n");
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						repete = 1;
						break;
					}else{
						jog->inv.ouro -= jog->inv.armas[i].valor;
						jog->inv.armas[i].possui=1;
						clear();
						printf ("Você comprou o(a) %s!\n\n",jog->inv.armas[i].nome);
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						repete = 1;
						break;
					}		
				}
				break;
			case 2: //vestimentas
				while (1){
					
					clear();
					contador=1;
					
					for (i=0;i<QUANTVESTIMENTASCOMPRAVEIS;i++){
						if (jog->inv.vestimentas[i].possui==0) break;
					}
					
					if (i==QUANTVESTIMENTASCOMPRAVEIS){
						repete=1;
						printf ("O estoque de vestimentas se esgotou!\n\n");
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						break;
					}
					clear();
					printf ("Qual vestimenta você quer comprar?\n\n");
					
					for (i=0;i<QUANTVESTIMENTASCOMPRAVEIS;i++){
						if (jog->inv.armas[i].possui==0){
							printf ("%d %s (%d de ouro) ",contador,jog->inv.armas[i].nome,jog->inv.armas[i].valor);
							if (jog->inv.vestimentas[i].def>0) printf ("+%d Defesa ",jog->inv.vestimentas[i].def);
							if (jog->inv.vestimentas[i].agi>0) printf ("+%d Agilidade ",jog->inv.vestimentas[i].agi);
							if (jog->inv.vestimentas[i].intel>0) printf ("+%d Inteligência ",jog->inv.vestimentas[i].intel);
							printf ("\n");
							
							contador++;
						}
					}
					
					printf ("%d Voltar para a loja\n",contador);
					
					scanf ("%d",&x);

					if (x==contador){
						repete=1;
						break;
					}

					if (x>contador || x<=0){
						clear();
						printf ("Opção inválida!\n\n");
						printf ("Aperte enter para prosseguir\n");
						scanf  ("%*c%c",&j);
						repete=1;
						break;
					}
					
					contador=0;
					for (i=0;QUANTVESTIMENTASCOMPRAVEIS;i++){
						if (jog->inv.armas[i].possui==0) contador++;
						if (contador==x) break;
					}
					
					if (jog->inv.vestimentas[i].valor > jog->inv.ouro){
						clear();
						printf ("Você não tem ouro suficiente para comprar isso!\n\n");
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						repete = 1;
						break;
					}else{
						jog->inv.ouro -= jog->inv.vestimentas[i].valor;
						jog->inv.vestimentas[i].possui=1;
						clear();
						printf ("Você comprou o(a) %s!\n\n",jog->inv.armas[i].nome);
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						repete = 1;
						break;
					}		
				}
				break;
			case 3:
				while(1){
					clear();
					printf ("A poção de vida custa %d\n\n",VALORPOCAO);
					printf ("Quantas poções de vida você quer comprar?\n\n");
					scanf ("%d",&x);
					
					if (x<=0){
						repete=1;
						break;
					}
					
					if (jog->inv.ouro < x*VALORPOCAO){
						clear();
						printf ("Você não tem ouro suficiente para comprar isso!\n\n");
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						continue;
					}else{
						clear();
						if (x>1) printf ("Você comprou %d poções de vida!\n\n",x);
						else printf ("Você comprou %d poção de vida!\n\n",x);
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						repete = 1;
						break;
					}
				}
				
				break;
			case 4:	
				while(1){
					clear();
					printf ("A poção de mana custa %d\n\n",VALORPOCAO);
					printf ("Quantas poções de mana você quer comprar?\n\n");
					scanf ("%d",&x);
					
					if (x<=0){
						repete=1;
						break;
					}
					
					if (jog->inv.ouro < x*VALORPOCAO){
						clear();
						printf ("Você não tem ouro suficiente para comprar isso!\n\n");
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						continue;
					}else{
						clear();
						if (x>1) printf ("Você comprou %d poções de mana!\n\n",x);
						else printf ("Você comprou %d poção de mana!\n\n",x);
						printf ("Aperte enter para prosseguir\n");
						a = scanf ("%*c%c",&j);
						repete = 1;
						break;
					}
				}
				break;
			case 5:
				statusequipa(jog);
				salvar(*jog);
				return 0;
		
			default:
				repete=1;
				printf("Opção inválida!\n\n");
				printf ("Aperte enter para prosseguir\n");
				a = scanf ("%*c%c",&j);
				clear();
				break;
		}
		
		if (repete=1){
			repete=0;
			continue;
		}
	statusequipa(jog);
	salvar (*jog);
	return 0;
	}
}

void salvar (jogador jog){
	int i;
	FILE *save;
	if(jog.save == 1) save = fopen("save1.txt", "w");
	else if(jog.save == 2) save = fopen("save2.txt", "w");
	else if(jog.save == 3) save = fopen("save3.txt", "w");
	
	fprintf(save, "%d\n", jog.save);
	fprintf(save, "%s\n", jog.nome);
	fprintf(save, "%d\n", jog.classe);
	fprintf(save, "%d\n", jog.raca);
	fprintf(save, "%d\n", jog.nivel);
	fprintf(save, "%d\n", jog.xp);
	fprintf(save, "%d\n", jog.xpmaximo);
	fprintf(save, "%d\n", jog.hp);
	fprintf(save, "%d\n", jog.hpmaximo);
	fprintf(save, "%d\n", jog.mp);
	fprintf(save, "%d\n", jog.mpmaximo);
	fprintf(save, "%d\n", jog.defbase);
	fprintf(save, "%d\n", jog.longebase);
	fprintf(save, "%d\n", jog.pertobase);
	fprintf(save, "%d\n", jog.intelbase);
	fprintf(save, "%d\n", jog.agibase);
	fprintf(save, "%d\n", jog.defatual);
	fprintf(save, "%d\n", jog.longeatual);
	fprintf(save, "%d\n", jog.pertoatual);
	fprintf(save, "%d\n", jog.intelatual);
	fprintf(save, "%d\n", jog.agiatual);
	fprintf(save, "%d\n", jog.sorte);
	fprintf(save, "%d\n", jog.situacaoatual);
	fprintf(save, "%d\n", jog.armaequipada);
	fprintf(save, "%d\n", jog.vestequipada);
	fprintf(save, "%d\n", jog.magia1);
	fprintf(save, "%d\n", jog.magia2);
	fprintf(save, "%d\n", jog.inv.pocaovida);
	fprintf(save, "%d\n", jog.inv.pocaomana);
	fprintf(save, "%d\n", jog.inv.ouro);
	
	for(i = 0; i < QUANTARMAS; i++){
		fprintf(save, "%s\n", jog.inv.armas[i].nome);
		fprintf(save, "%d\n", jog.inv.armas[i].tipo);
		fprintf(save, "%d\n", jog.inv.armas[i].longe);
		fprintf(save, "%d\n", jog.inv.armas[i].perto);
		fprintf(save, "%d\n", jog.inv.armas[i].turnos);
		fprintf(save, "%d\n", jog.inv.armas[i].intel);
		fprintf(save, "%d\n", jog.inv.armas[i].possui);
		fprintf(save, "%d\n", jog.inv.armas[i].valor);
	}
	
	for(i = 0; i < QUANTVESTIMENTAS; i++){
		fprintf(save, "%s\n", jog.inv.vestimentas[i].nome);
		fprintf(save, "%d\n", jog.inv.vestimentas[i].def);
		fprintf(save, "%d\n", jog.inv.vestimentas[i].agi);
		fprintf(save, "%d\n", jog.inv.vestimentas[i].intel);
		fprintf(save, "%d\n", jog.inv.vestimentas[i].possui);
		fprintf(save, "%d\n", jog.inv.vestimentas[i].valor);
	}
	
	for(i = 0; i < QUANTITENS; i++){
		fprintf(save, "%s\n", jog.inv.itens[i].nome);
		fprintf(save, "%d\n", jog.inv.itens[i].possui);
	}
	
	for(i = 0; i < QUANTSITUACOES; i++) fprintf(save, "%d\n", jog.situacoespassadas[i]);
	
	fclose(save);
	return;
}

jogador carregar (int n){
	int i;
	jogador jog;
	FILE *save;
	
	if(n == 1) save = fopen("save1.txt", "r");
	else if(n == 2) save = fopen("save2.txt", "r");
	else if(n == 3) save = fopen("save3.txt", "r");
	
	fscanf(save, "%d%*c", &jog.save);
	fscanf(save, "%[^\n]%*c", jog.nome);
	fscanf(save, "%d", &jog.classe);
	fscanf(save, "%d", &jog.raca);
	fscanf(save, "%d", &jog.nivel);
	fscanf(save, "%d", &jog.xp);
	fscanf(save, "%d", &jog.xpmaximo);
	fscanf(save, "%d", &jog.hp);
	fscanf(save, "%d", &jog.hpmaximo);
	fscanf(save, "%d", &jog.mp);
	fscanf(save, "%d", &jog.mpmaximo);
	fscanf(save, "%d", &jog.defbase);
	fscanf(save, "%d", &jog.longebase);
	fscanf(save, "%d", &jog.pertobase);
	fscanf(save, "%d", &jog.intelbase);
	fscanf(save, "%d", &jog.agibase);
	fscanf(save, "%d", &jog.defatual);
	fscanf(save, "%d", &jog.longeatual);
	fscanf(save, "%d", &jog.pertoatual);
	fscanf(save, "%d", &jog.intelatual);
	fscanf(save, "%d", &jog.agiatual);
	fscanf(save, "%d", &jog.sorte);
	fscanf(save, "%d", &jog.situacaoatual);
	fscanf(save, "%d", &jog.armaequipada);
	fscanf(save, "%d", &jog.vestequipada);
	fscanf(save, "%d", &jog.magia1);
	fscanf(save, "%d", &jog.magia2);
	fscanf(save, "%d", &jog.inv.pocaovida);
	fscanf(save, "%d", &jog.inv.pocaomana);
	fscanf(save, "%d", &jog.inv.ouro);
	
	for(i = 0; i < QUANTARMAS; i++){
		fscanf(save, "%[^\n]%*c", jog.inv.armas[i].nome);
		fscanf(save, "%d", &jog.inv.armas[i].tipo);
		fscanf(save, "%d", &jog.inv.armas[i].longe);
		fscanf(save, "%d", &jog.inv.armas[i].perto);
		fscanf(save, "%d", &jog.inv.armas[i].turnos);
		fscanf(save, "%d", &jog.inv.armas[i].intel);
		fscanf(save, "%d", &jog.inv.armas[i].possui);
		fscanf(save, "%d", &jog.inv.armas[i].valor);
	}
	
	for(i = 0; i < QUANTVESTIMENTAS; i++){
		fscanf(save, "%[^\n]%*c", jog.inv.vestimentas[i].nome);
		fscanf(save, "%d", &jog.inv.vestimentas[i].def);
		fscanf(save, "%d", &jog.inv.vestimentas[i].agi);
		fscanf(save, "%d", &jog.inv.vestimentas[i].intel);
		fscanf(save, "%d", &jog.inv.vestimentas[i].possui);
		fscanf(save, "%d", &jog.inv.vestimentas[i].valor);
	}
	
	for(i = 0; i < QUANTITENS; i++){
		fscanf(save, "%[^\n]%*c", 
		jog.inv.itens[i].nome);
		fscanf(save, "%d", &jog.inv.itens[i].possui);
	}
	
	for(i = 0; i < QUANTSITUACOES; i++) fscanf(save, "%d", &jog.situacoespassadas[i]);
	
	fclose(save);
	return jog;
}
