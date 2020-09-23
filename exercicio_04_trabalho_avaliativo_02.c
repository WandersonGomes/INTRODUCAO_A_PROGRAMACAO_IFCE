/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Faça programa que contenha uma função que leia um número não determinado de
valores positivos e retorna a média aritmética dos mesmos. (2,5 pontos).
*/
#include <stdio.h>

double calculaMediaAritmetica() {
    double numero = 1.00, soma = 0.00;
    int qtd_numeros = 0;

    while (numero > 0) {
        printf("Aviso: Para encerra digite 0 ou um valor negativo.\n");
        printf("Informe o %d.o numero: ", (qtd_numeros + 1));
        scanf("%lf", &numero);

        if (numero > 0) {
            soma += numero;
            qtd_numeros++;
        }
    }

    if (qtd_numeros > 0) {
        return (soma/qtd_numeros);
    }

    return 0;
}

int main() {
    double media = 0.00;

    media = calculaMediaAritmetica();

    printf("\n");
    printf("A media calculada foi de: %.2lf\n", media);

    return 0;
}