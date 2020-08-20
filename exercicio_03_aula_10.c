/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um algoritmo que imprima todos os numeros pares inteiros de 300 a 100.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    for (numero = 300; numero > 99; numero -= 2) {
        printf("%d\n", numero);
    }

    return 0;
}