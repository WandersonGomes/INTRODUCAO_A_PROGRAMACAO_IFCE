/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que receba um número inteiro e imprima uma das mensagens: “é
múltiplo de 3” ou “não é múltiplo de 3”.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if (numero%3 == 0) {
        printf("O numero eh multiplo de 3!\n");
    } else {
        printf("O numero nao eh multiplo de 3!\n");
    }

    return 0;
}