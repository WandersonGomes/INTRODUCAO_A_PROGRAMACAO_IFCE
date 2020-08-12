/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Construa um programa que dado três números inteiros, A, B e C, imprima o maior valor.
*/
#include <stdio.h>

int main() {
    int numeroA = 0, numeroB = 0, numeroC = 0;
    int maior_numero = 0;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numeroA);
    maior_numero = numeroA;

    printf("Informe o segundo numero: ");
    scanf("%d", &numeroB);
    if (numeroB > maior_numero) {
        maior_numero = numeroB;
    }

    printf("Informe o terceiro numero: ");
    scanf("%d", &numeroC);
    if (numeroC > maior_numero) {
        maior_numero = numeroC;
    }

    printf("O maior numero eh: %d.\n", maior_numero);
    
    return 0;
}