/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Construa um programa que imprima qual o menor e qual o maior valor de dois números A
e B, lidos através do teclado.
*/
#include <stdio.h>

int main() {
    int numeroA = 0, numeroB = 0;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &numeroA);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &numeroB);

    if (numeroA > numeroB) {
        printf("O maior numero eh: %d.\n", numeroA);
        printf("O menor numero eh: %d.\n", numeroB);
    } else {
        printf("O maior numero eh: %d.\n", numeroB);
        printf("O menor numero eh: %d.\n", numeroA);
    }

    return 0;
}