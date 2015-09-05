#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 3;

int main() {
	
	printf("\n\n\n");

	printf("****************************************************\n");
	printf("*         Bem-vindo ao jogo de Adivinhação         *\n");
	printf("****************************************************\n");

	// imprimindo cabecalho bonito do jogo
	//printf("\n\n");
	printf("*          P  /_\\  P                               *\n");
	printf("*         /_\\_|_|_/_\\                              *\n");
	printf("*     n_n | ||. .|| | n_n         Bem vindo ao     *\n");
	printf("*     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! *\n");
	printf("*    |\" \"  |  |_|  |\"  \" |                         *\n");
	printf("*    |_____| ' _ ' |_____|                         *\n");
	printf("*          \\__|_|__/                               *\n");
	printf("*                                                  *\n");
	printf("****************************************************\n");
	printf("\n\n");

	int nivel;
	int totaldetentativas;

	printf("Qual o seu nívle de dificuldade? \n");
	printf("( 1 ) Fácil ( 2 ) Médio ( 3 ) Difícil \n\n");
	printf("Escolha: \n");

	scanf("%d", &nivel);

	int chute;
	int acertou = 0;
	int tentativas = 1;
	double pontos = 1000;

	//configuração do número secreto.
	srand(time(0));
	int numerosecreto = rand() % 100;

	switch(nivel){
		case 1: 
			totaldetentativas = 20;
			break;
		case 2:
			totaldetentativas = 15;
			break;
		default:
			totaldetentativas = 6;
			break;
	}

	int i = 1;

	// loop principal do jogo
	for(i; i <= totaldetentativas; i++) {

		printf("-> Tentativa %d de %d\n", i, totaldetentativas);

		printf("Chute um número: ");
		scanf("%d", &chute);

		// tratando chute de numero negativo
		if(chute < 0) {
			printf("Você não pode chutar números negativos\n");
			i--;
			continue;
		}

		// verifica se acertou, foi maior ou menor
		acertou = chute == numerosecreto;

		if(acertou) {
			break;
		} else if(chute > numerosecreto) {
			printf("\nSeu chute foi maior do que o número secreto!\n\n");
		} else {
			printf("\nSeu chute foi menor do que o número secreto!\n\n");
		}

		// calcula a quantidade de pontos
		double pontosperdidos = abs(chute - numerosecreto) / 2.0;
		pontos = pontos - pontosperdidos;
	}

	printf("****************************************************\n");
	printf("*                  Fim de jogo!                    *\n");
	printf("****************************************************\n");
	
	// imprimindo mensagem de vitoria ou derrota
	printf("\n");

	if(acertou) {
		printf("             OOOOOOOOOOO               \n");
		printf("         OOOOOOOOOOOOOOOOOOO           \n");
		printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
		printf("    OOOOOO      OOOOO      OOOOOO      \n");
		printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
		printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
		printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
		printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
		printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
		printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
		printf("         OOOOOO         OOOOOO         \n");
		printf("             OOOOOOOOOOOO              \n");
		printf("\nParabéns! Você acertou!\n");
		printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
	} else {

        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");

		printf("\nVocê perdeu! Tente novamente!\n\n");
	}
}
