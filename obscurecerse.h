#ifndef OBSCURECERSE
#define OBSCURECERSE

#include <stdio.h>

#define QUANTARMAS 15
#define QUANTARMASCOMPRAVEIS 10
#define QUANTVESTIMENTAS 9
#define QUANTVESTIMENTASCOMPRAVEIS 6
#define QUANTITENS 10
#define QUANTSITUACOES 50

#define VARIACAO 0.2
#define RECUPERACAOPOCAO 0.6
#define DANOVENENO 0.5
#define PORCENTAGEMDEFESA 0.4

#define HPINICIAL 100
#define MPINICIAL 100
#define SORTEINICIAL 10
#define XPNIVEL1 100
#define PROGRESSAOXP 2

#define MPMAGIA1 20
#define MPMAGIA2 30

#define DANOMAGIA1CLASSE1 50
#define DANOMAGIA1CLASSE2 50
#define DANOMAGIA1CLASSE3 50
#define DANOMAGIA1CLASSE4 50
#define DANOMAGIA2CLASSE1 90
#define DANOMAGIA2CLASSE2 90
#define DANOMAGIA2CLASSE3 90
#define DANOMAGIA2CLASSE4 90

#define UPRACA1agi 4
#define UPRACA1def 4
#define UPRACA1longe 4
#define UPRACA1perto 4
#define UPRACA1intel 4
#define UPRACA1hpmaximo 30
#define UPRACA1mpmaximo 30

#define UPRACA2agi 2
#define UPRACA2def 6
#define UPRACA2longe 2
#define UPRACA2perto 8
#define UPRACA2intel 1
#define UPRACA2hpmaximo 50
#define UPRACA2mpmaximo 10

#define UPRACA3agi 5
#define UPRACA3def 2
#define UPRACA3longe 5
#define UPRACA3perto 3
#define UPRACA3intel 5
#define UPRACA3hpmaximo 20
#define UPRACA3mpmaximo 40

#define UPRACA4agi 3
#define UPRACA4def 6
#define UPRACA4longe 1
#define UPRACA4perto 6
#define UPRACA4intel 4
#define UPRACA4hpmaximo 40
#define UPRACA4mpmaximo 20

#define VALORPOCAO 20

#define VALORVEST0 50
#define VALORVEST1 50
#define VALORVEST2 10
#define VALORVEST3 23
#define VALORVEST4 456
#define VALORVEST5 123

#define VALORARMA0 11
#define VALORARMA1 10
#define VALORARMA2 11
#define VALORARMA3 22
#define VALORARMA4 31
#define VALORARMA5 185
#define VALORARMA6 1200
#define VALORARMA7 1111
#define VALORARMA8 5000
#define VALORARMA9 40000

#define VEST0def 8
#define VEST0agi -2
#define VEST0intel 0
#define VEST0valor 100

#define VEST1def 4
#define VEST1agi 4
#define VEST1intel 0 
#define VEST1valor 100

#define VEST2def 0
#define VEST2agi 0
#define VEST2intel 10 
#define VEST2valor 100

#define VEST3def 16
#define VEST3agi -4
#define VEST3intel 0
#define VEST3valor 100

#define VEST4def 8
#define VEST4agi 6
#define VEST4intel 0 
#define VEST4valor 100

#define VEST5def 0
#define VEST5agi 0
#define VEST5intel 16 
#define VEST5valor 100

#define VEST6def 26
#define VEST6agi -6
#define VEST6intel 0
#define VEST6valor 100

#define VEST7def 16
#define VEST7agi 14
#define VEST7intel 0
#define VEST7valor 100

#define VEST8def 0
#define VEST8agi 0
#define VEST8intel 26
#define VEST8valor 100

#define ARMA0tipo 0
#define ARMA0longe 10
#define ARMA0perto 0
#define ARMA0turnos 0
#define ARMA0intel 0
#define ARMA0valor 100

#define ARMA1tipo 3
#define ARMA1longe 8
#define ARMA1perto 0
#define ARMA1turnos 2
#define ARMA1intel 0
#define ARMA1valor 100

#define ARMA2tipo 0
#define ARMA2longe 16
#define ARMA2perto 0
#define ARMA2turnos 0
#define ARMA2intel 0
#define ARMA2valor 100

#define ARMA3tipo 3
#define ARMA3longe 12
#define ARMA3perto 0
#define ARMA3turnos 2
#define ARMA3intel 0
#define ARMA3valor 100

#define ARMA4tipo 4
#define ARMA4longe 0
#define ARMA4perto 10
#define ARMA4turnos 3
#define ARMA4intel 0
#define ARMA4valor 100

#define ARMA5tipo 2
#define ARMA5longe 0
#define ARMA5perto 0
#define ARMA5turnos 0
#define ARMA5intel 18
#define ARMA5valor 100

#define ARMA6tipo 2
#define ARMA6longe 0
#define ARMA6perto 12
#define ARMA6turnos 0
#define ARMA6intel 0
#define ARMA6valor 100

#define ARMA7tipo 4
#define ARMA7longe 0
#define ARMA7perto 8
#define ARMA7turnos 2
#define ARMA7intel 0
#define ARMA7valor 100

#define ARMA8tipo 1
#define ARMA8longe 0
#define ARMA8perto 18
#define ARMA8turnos 0
#define ARMA8intel 0
#define ARMA8valor 100

#define ARMA9tipo 2
#define ARMA9longe 0
#define ARMA9perto 0
#define ARMA9turnos 0
#define ARMA9intel 10
#define ARMA9valor 100

#define ARMA10tipo 0
#define ARMA10longe 30
#define ARMA10perto 0
#define ARMA10turnos 0
#define ARMA10intel 0
#define ARMA10valor 100

#define ARMA11tipo 1
#define ARMA11longe 0
#define ARMA11perto 32
#define ARMA11turnos 0
#define ARMA11intel 0
#define ARMA11valor 100

#define ARMA12tipo 4
#define ARMA12longe 0
#define ARMA12perto 26
#define ARMA12turnos 2
#define ARMA12intel 0
#define ARMA12valor 100

#define ARMA13tipo 3
#define ARMA13longe 20
#define ARMA13perto 0
#define ARMA13turnos 3
#define ARMA13intel 0
#define ARMA13valor 100

#define ARMA14tipo 3
#define ARMA14longe 20
#define ARMA14perto 0
#define ARMA14turnos 3
#define ARMA14intel 0
#define ARMA14valor 100

/* DEFINIÇÃO DE VERDADEIRO E FALSO
*  0 FALSO
*  1 VERDADEIRO
*/

/* VETOR DE ARMAS
*  0 ARCO CURTO
*  1 ZARABATANA
*  2 ARCO LONGO
*  3 ADAGAS ENSANGUENTADAS
*  4 SABRE ENSANGUENTADO
*  5 CAJADO MÁGICO
*  6 ESPADA DE FERRO
*  7 ADAGA ENVENENADA
*  8 MACHADO DE BATALHA
*  9 VARINHA ENCANTADA
*  10 BESTA AUTOMÁTICA
*  11 MARTELO DE GUERRA
*  12 FOICE DE DENTE DE DRAGÃO
*  13 BESTA PARA DARDOS ENVENENADOS
*  14 LUVAS ELEMENTAIS
*/

/* VETOR DE VESTIMENTAS
*  0 ARMADURA DE LATÃO
*  1 COLETE DE COURO
*  2 CAPUZ ENCANTADO
*  3 ARMADURA DE METAL REFORÇADO
*  4 ARMADURA DE ESCAMAS DE CROCODILO
*  5 TÚNICA MÁGICA
*  6 ARMADURA DE ESCAMAS DE DRAGAO
*  7 ARMADURA DE MALHA DE CRISTAL
*  8 TÚNICA DE LUZ
*/

/* VETOR DE ITENS
*  0 Pingente do sol
*  1 Globo escuro
*  2
*/

/* TIPO DE ARMAS
*  0 LONGE
*  1 PERTO
*  2 INTELIGENCIA
*  3 LONGE ENVENENADO
*  4 PERTO ENVENENADO
*/

/** RAÇAS
*   1 HUMANO
*   2 ORC
*   3 ELFO
*   4 ANÃO
*/

/** CLASSES
*   1 GUERREIRO
*   2 ARQUEIRO
*   3 LADINO
*   4 MAGO
*/

typedef struct item{
	char nome[129];
	int possui;
}item;

typedef struct arma{
	char nome[129];
	int tipo;
	int longe;
	int perto;
	int turnos;
	int intel;
	int possui;
	int valor;
}arma;

typedef struct vestimenta{
	char nome[129];
	int def;
	int agi;
	int intel;
	int possui;
	int valor;
}vestimenta;


typedef struct inimigo{
	char nome[129];
	int hpmax;
	int hp;
	int def;
	int atq;
	int agi;
	int veneno;
}inimigo;

typedef struct inventario{
	int pocaovida;
	int pocaomana;
	int ouro;
	arma armas[QUANTARMAS];
	vestimenta vestimentas[QUANTVESTIMENTAS];
	item itens[QUANTITENS];
}inventario;

typedef struct jogador{
	int save;
	char nome [129];
	int classe;
	int raca;
	int nivel;
	int xp;
	int xpmaximo;
	int hp;
	int hpmaximo;
	int mp;
	int mpmaximo;
	int defbase;
	int longebase;
	int pertobase;
	int intelbase;
	int agibase;
	int defatual;
	int longeatual;
	int pertoatual;
	int intelatual;
	int agiatual;
	int sorte;
	int situacaoatual;
	int armaequipada;
	int vestequipada;
	int magia1;
	int magia2;
	inventario inv;
	int situacoespassadas[QUANTSITUACOES];
}jogador;

/** função para entrar na situação
*   atual da struct do jogador
*   e retornar qual será a próxima,
*   retorna -1 para sair do jogo
*   @param struct do jogador
*   @return próxima situação
*/
int situacao (jogador *jog);

/** função para entrar na batalha
*   @param inimigo
*   @param struct do jogador
*   @return 1 para vitória, 0 para derrota
*   e -1 para sair do jogo
*/
int batalha (inimigo ini, jogador *jog);

/** função para salvar o jogo
*   @param struct do jogador
*   @param situação atual
*   @return void
*/
void salvar (jogador jog);

/** função para carregar jogo
*   @param número do save
*   @return struct do jogador
*/
jogador carregar (int n);

/** função para limpar save
*   @param numero do save
*   @return void
*/
void limpasave (int n);

/** função para alterar o inventário
*   @param struct do jogador
*   @return void;
*/
void mexeinventario (jogador *jog);

/** função para mexer na loja
*   @param struct do jogador
*   @return situação 0 ou -1 (sair do jogo)
*/
int loja (jogador *jog);

/** função para sortear número inteiro
*   entre um máximo e um mínimo
*   @param1 RANDMIN (truncado pra int)
*   @param2 RANDMAX (truncado pra int)
*   @retunr inteiro sorteado
*/
int sorteia (int RANDMIN,int RANDMAX);

/** função para mostrar os status
*   @param struct do jogador
*   @return void
*/
void printastatus (jogador jog);

/** função para iniciar novo jogo no save
*   @param struct do jogador
*   @param n número do save escolhido
*   @return void
*/
void novojogo (jogador *jog, int n);

/** função para atualizar o status do
*   jogador com base em seus equipamentos
*   @param struct do jogador
*   @return void
*/
void statusequipa (jogador *jog);

/** função para printar logo do game
*   @return void
*/
void logo (void);

/** função para verificar se o tamanho do arquivo 
*   e assim ver se ele está vazio
*   @param nome do arquivo
*   @return tamanho do arquivo
*/
int verif_tamanho_arq(FILE *nome_arq);

/** função de saida responsavel pela 
*   print das opção de carregamento
*   @param struct do jogador
*   @param arquivo do jogador salvo 1.
*   @param arquivo do jogador salvo 2.
*   @param arquivo do jogador salvo 3.
*   @return void
*/
int telacarregarjogo(jogador jog, int s1, int s2, int s3);

/** função de saida responsavel pela exibição
*   de opçãos novo jogo
*   @param struct do jogador
*   @param arquivo do jogador salvo 1.
*   @param arquivo do jogador salvo 2.
*   @param arquivo do jogador salvo 3.
*   @return void
*/
int telanovojogo(jogador jog, int s1, int s2, int s3);

#endif
