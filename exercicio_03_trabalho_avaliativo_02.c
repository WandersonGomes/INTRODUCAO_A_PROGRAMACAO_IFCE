/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Faça um programa que contenha uma função que recebe, por parâmetro, a hora de
início e a hora de término de um jogo, ambas subdivididas em 2 valores distintos: horas
e minutos. O procedimento deve retornar, também por parâmetro, a duração do jogo
em horas e minutos, considerando que o tempo máximo de duração de um jogo é de 24
horas e que o jogo pode começar em um dia e terminar no outro. (2,5 pontos)
*/
#include <stdio.h>

#define DIA 1440

//FUNCAO QUE RETORNA O TEMPO DE DURACAO DE UM JOGO (HORAS, MINUTOS)
void tempoJogo(int hora_inicio, int minuto_inicio, int hora_fim, int minuto_fim, int *resposta) {
    int inicio = 0, fim = 0;
    int total = 0;
    
    inicio = (hora_inicio*60) + minuto_inicio;
    fim = (hora_fim*60) + minuto_fim;

    if (fim < inicio) {
        total = fim + (DIA - inicio);
    } else {
        total = fim - inicio;
    }

    resposta[1] = total%60;
    resposta[0] = (total - resposta[1])/60; 
}

//PROGRAMA PRINCIPAL
int main() {
    int hora_inicio = 0, hora_fim = 0;
    int minuto_inicio = 0, minuto_fim = 0;
    int resposta[2] = {0};

    //inicio do jogo
    do {
        printf("Informe a hora do inicio do jogo: ");
        scanf("%d", &hora_inicio);
        //error
        if ((hora_inicio < 0) || (hora_inicio > 23)) {
            printf("Error: hora invalida!\n");
            printf("Tente novamente.\n");
        }
    } while ((hora_inicio < 0) || (hora_inicio > 23));

    do {
        printf("Informe o minuto do inicio do jogo: ");
        scanf("%d", &minuto_inicio);
        //error
        if ((minuto_inicio < 0) || (minuto_inicio > 59)) {
            printf("Error: minuto invalido!\n");
            printf("Tente novamente.\n");
        }
    } while ((minuto_inicio < 0) || (minuto_inicio > 59));

    //fim do jogo
    do {
        printf("Informe a hora do fim do jogo: ");
        scanf("%d", &hora_fim);
        //error
        if ((hora_fim < 0) || (hora_fim > 23)) {
            printf("Error: hora invalida!\n");
            printf("Tente novamente.\n");
        }
    } while ((hora_fim < 0) || (hora_fim > 23));

    do {
        printf("Informe o minuto do fim do jogo: ");
        scanf("%d", &minuto_fim);
        //error
        if ((minuto_fim < 0) || (minuto_fim > 59)) {
            printf("Error: minuto invalido!\n");
            printf("Tente novamente.\n");
        }
    } while ((minuto_fim < 0) || (minuto_fim > 59));

    //calcula o tempo do jogo
    tempoJogo(hora_inicio, minuto_inicio, hora_fim, minuto_fim, resposta);

    //apresenta o resultado
    printf("Tempo total do jogo:\n");
    printf("Quantidade de horas: %d\n", resposta[0]);
    printf("Quantidade de minutos: %d\n", resposta[1]);
    return 0;
}