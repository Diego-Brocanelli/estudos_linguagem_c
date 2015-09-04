#include <stdio.h>
//primeiro código em C
int main() {
	printf("************************************\n");
	printf("* Bem-vindo ao jogo de Adivinhação *\n");
	printf("************************************\n");	

	//definido o número secreto
	int numerosecreto;
	numerosecreto = 42;

	int chute;
	int i;
	for( i = 1; i <= 3; i++ ){

		printf("Qual é o seu chute? \n");
		scanf("%d", &chute);
		printf("Você chutou o número %d! \n", chute );

		int acertou = chute == numerosecreto;

		if(acertou){
			
			printf("Parabéns, você acertou! \n");
			printf("Jogue de novo, você é um bom jogador! \n");

		}else{

			int maior = chute > numerosecreto;

			if(maior){
				printf("Seu chute foi maior que o número secreto! \n");	
			}else{
				printf("Seu chute foi menor do que o número secreto! \n");				
			}
		}
	}

	printf("Fimm de jogo! \n");
}
