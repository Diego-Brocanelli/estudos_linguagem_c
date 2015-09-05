# Estudos básicos da linguagem C.

Este repositório tem uma única finalidade que é o estudo básico da linguagem C.

##adivinhacao.c
Este sistema consiste em receber um número e comparar com o código secreto, retornando para o usuário se ele acertou ou se o número informado é inferior ou superior ao código secreto.

Este processo se repetirá até que o jogador acerte o número.

    Os processos de compilação e execução, são realizados pelo terminal no diretório onde o sistema se encontra.

#### Compilando o arquivo

LINUX
    
    gcc adivinhacao.c -o adivinhacao

Obs: o compilador GCC é default no Linux.

#### Executando o sistema

LINUX

    ./adivinhacao

#### Resultado

    ****************************************************
    *         Bem-vindo ao jogo de Adivinhação         *
    ****************************************************
    *          P  /_\  P                               *
    *         /_\_|_|_/_\                              *
    *     n_n | ||. .|| | n_n         Bem vindo ao     *
    *     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! *
    *    |" "  |  |_|  |"  " |                         *
    *    |_____| ' _ ' |_____|                         *
    *          \__|_|__/                               *
    *                                                  *
    ****************************************************


    Qual o seu nívle de dificuldade? 
    ( 1 ) Fácil ( 2 ) Médio ( 3 ) Difícil 

    Escolha: 

#### Quando jogador acerta o número secreto.

    ****************************************************
    *                  Fim de jogo!                    *
    ****************************************************
    
                 OOOOOOOOOOO               
             OOOOOOOOOOOOOOOOOOO           
          OOOOOO  OOOOOOOOO  OOOOOO        
        OOOOOO      OOOOO      OOOOOO      
      OOOOOOOO  #   OOOOO  #   OOOOOOOO    
     OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   
    OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  
    OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  
    OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  
     OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   
      OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    
        OOOOO   OOOOOOOOOOOOOOO   OOOO     
          OOOOOO   OOOOOOOOO   OOOOOO      
             OOOOOO         OOOOOO         
                 OOOOOOOOOOOO              

    Parabéns! Você acertou!
    Você fez 965.50 pontos. Até a próxima!

#### Quando jogador não acerta o número secreto.

    ****************************************************
    *                  Fim de jogo!                    *
    ****************************************************

           \|/ ____ \|/    
            @~/ ,. \~@      
           /_( \__/ )_\    
              \__U_/        
    
    Você perdeu! Tente novamente!
