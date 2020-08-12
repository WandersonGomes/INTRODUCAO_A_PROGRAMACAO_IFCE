/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que leia um número e informe se ele é divisível por 2 e por 9.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if ((numero%2 == 0) && (numero%9 == 0)) {
        printf("O numero eh divisivel por 2 e por 9 ao mesmo tempo.\n");
    } else {
        printf("O numero nao eh divisivel por 2 e por 9 ao mesmo tempo.\n");
    }

    return 0;
}