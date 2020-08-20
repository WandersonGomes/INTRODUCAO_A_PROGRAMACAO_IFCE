/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um algoritmo que imprima todos os numeros inteiros de 100 a 200.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    for (numero = 100; numero < 201; numero++) {
        printf("%d\n", numero);
    }

    return 0;
}