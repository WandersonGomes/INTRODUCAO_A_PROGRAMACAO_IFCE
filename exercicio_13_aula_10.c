/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Desenvolver um algoritmo que efetue a soma de todos os numeros impares que sao
multiplos de tres e que se encontram no conjunto dos numeros de 1 ate 500.
*/
#include <stdio.h>

int main() {
    int numero = 0;
    long int soma_multiplos_3 = 0;

    for (numero = 1; numero < 500; numero += 2) {
        if (numero%3 == 0) {
            soma_multiplos_3 += numero;
        }
    }

    printf("A soma dos numeros impares entre 1 e 500 (incluse) que sao multiplos de 3 eh: %ld.\n", soma_multiplos_3);
        
    return 0;
}