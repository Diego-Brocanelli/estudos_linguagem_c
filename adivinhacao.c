#include <stdio.h>
#define numerosecreto 42
//primeiro código em C
int main() {
	
	printf("************************************\n");
	printf("* Bem-vindo ao jogo de Adivinhação *\n");
	printf("************************************\n");	

	int chute;
	int tentativas =1;

	while(1){

		printf("Tentativa %d\n", tentativas);
		printf("Qual é o seu chute? \n");

		scanf("%d", &chute);
		printf("Você chutou o número %d! \n", chute );

		//analisa se o número é negativo
		int numerosnegativos = chute < 0;
		if(numerosnegativos){
			printf("Você não pode chutar números negativos! \n");
			continue;
		}

		int acertou = chute == numerosecreto;
		int maior = chute > numerosecreto;

		if(acertou){
			
			printf("Parabéns, você acertou! \n");
			printf("Jogue de novo, você é um bom jogador! \n");

			break;

		}else if(maior){
			printf("Seu chute foi maior que o número secreto! \n");
		}else{
			printf("Seu chute foi menor do que o número secreto! \n");							
		}

		tentativas++;
	}

	printf("Fimm de jogo! \n");
	printf("Você acertou em %d tentativas! \n", tentativas);
}
