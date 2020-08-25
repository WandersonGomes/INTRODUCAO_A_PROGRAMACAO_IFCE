/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Desenvolver um algoritmo que efetue a soma de todos os numeros
impares que sao multiplos de tres e que se encontram no conjunto
dos numeros de 1 ate 500.
*/
#include <stdio.h>

int main() {
    long int soma = 0, i = 0, numero_passos = 0;

    printf("Algoritmo: Soma de todos os numeros impares multiplos de 3 entre 1 ate 500.\n");

    //metodo 01
    for (i = 1; i <= 500; i++) {
        if ((i%3 == 0) && (i%2 != 0)) {
            soma += i;
        }
        numero_passos++;
    }

    printf("METODO 01 = %ld, NUMERO PASSOS = %ld\n", soma, numero_passos);

    //metodo 02
    soma = 0;
    numero_passos = 0;
    for (i = 1; i <= 499; i += 2) {
        if (i%3 == 0) {
            soma += i;
        }
        numero_passos++;
    }
    printf("METODO 02 = %ld, NUMERO PASSOS = %ld\n", soma, numero_passos);

    //metodo 03
    soma = 0;
    numero_passos = 0;
    for (i = 3; i < 500; i += 3) {
        if ((i%3 == 0) && (i%2 != 0)) {
            soma += i;
        }
        numero_passos++;
    }
    printf("METODO 03 = %ld, NUMERO PASSOS = %ld\n", soma, numero_passos);

    //metodo 04
    soma = ((3 + 498) * 83) - (((6 + 498) * 83)/2);
    printf("METODO 04 = %ld, NUMERO PASSOS = 1\n", soma);

    return 0;
}