/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escrever um algoritmo que gera e escreve os numeros impares entre 100 e 200.
*/
#include <stdio.h>

int main() {
    int i = 0;

    printf("NUMEROS PRIMOS ENTRE 100 e 200: ");
    for (i = 101; i < 200; i += 2) {
        if (i == 101) {
            printf("%d", i);
        } else {
            printf(", %d", i);
        }
    }
    printf("\n");

    return 0;
}