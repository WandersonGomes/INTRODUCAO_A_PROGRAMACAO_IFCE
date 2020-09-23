/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que contenha uma função que recebe as 3 notas de um aluno por
parâmetro e uma letra. Se a letra for A o procedimento calcula a média aritmética das
notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2). Retorne a média
calculada. (2,5 pontos)
*/
#include <stdio.h>

//constantes
#define PESO1 5
#define PESO2 3
#define PESO3 2

//FUNCAO QUE RETORNA A MEDIA ARITMETICA OU PONDERADA
double calculaMedia(double nota1, double nota2, double nota3, char opcao) {
    double resultado = 0.00;

    if ((opcao == 'a') || (opcao == 'A')) {
        resultado = (nota1 + nota2 + nota3)/3.00;
    } else {
        resultado = ((nota1*PESO1) + (nota2*PESO2) + (nota3*PESO3))/(PESO1 + PESO2 + PESO3);
    }

    return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
    //variaveis
    double media = 0.00, notas[3] = {0};
    int i = 0;
    char opcao = 'a';

    //obtem as notas
    for (i = 0; i < 3; i++) {
        printf("Informe o %d.a nota: ", (i + 1));
        scanf("%lf", &notas[i]);
    }
    
    //obtem a opcao
    do {
        printf("ESCOLHA O QUE DESEJA CALCULAR\n");
        printf("A - Media Aritmetica\n");
        printf("P - Media Ponderada\n");
        printf("Opcao: ");
        scanf(" ");
        scanf("%c", &opcao);

        //error
        if ((opcao != 'A') && (opcao != 'a') && (opcao != 'p') && (opcao != 'P')) {
            printf("Error: opcao invalida!\n");
            printf("Tente novamente.\n");
        }
    } while ((opcao != 'A') && (opcao != 'a') && (opcao != 'p') && (opcao != 'P'));

    //calcula a media
    media = calculaMedia(notas[0], notas[1], notas[2], opcao);

    //apresenta a media calculada
    printf("\n");
    if ((opcao == 'a') || (opcao == 'A')) {
        printf("MEDIA ARITMETICA: %.2f\n", media);
    } else {
        printf("MEDIA PONDERADA: %.2f\n", media);
    }

    return 0;
}