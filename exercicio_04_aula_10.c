/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um algoritmo que imprima todos os numeros multiplos entre 1000 e 1500.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    for (numero = 1000; numero < 1501; numero += 5) {
        printf("%d\n", numero);
    }

    return 0;
}