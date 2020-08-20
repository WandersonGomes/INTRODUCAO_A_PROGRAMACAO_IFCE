/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um algoritmo que imprima o quadrado dos numeros no intervalo de 1 a 20.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    for (numero = 1; numero < 21; numero++) {
        printf("%d^2 = %d\n", numero, numero * numero);
    }

    return 0;
}