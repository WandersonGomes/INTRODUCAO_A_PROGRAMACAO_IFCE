/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Construa um programa que indique se um número digitado está compreendido entre 0 e
100 ou não (considere que o 0 e 100 estão na faixa de valores).
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if ((numero >= 0) && (numero <= 100)) {
        printf("O numero esta no intervalo [0, 100]!\n");
    } else {
        printf("O numero nao esta no intervalo [0, 100]!\n");
    }

    return 0;
}