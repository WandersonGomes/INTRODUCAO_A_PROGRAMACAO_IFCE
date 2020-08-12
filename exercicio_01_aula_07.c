/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Construa um programa que determine (imprima) se um dado numero inteiro
(recebido atraves do teclado) e PAR ou IMPAR.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if (numero%2 == 0) {
        printf("O numero eh PAR!\n");
    } else {
        printf("O numero eh IMPAR!\n");
    }

    return 0;
}