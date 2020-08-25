/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escrever um algoritmo que leia um valor para uma variavel N de 1 ate 10 
e calcule a tabuada de N. Mostre a tabuada na forma: 
0 x N = 0, 
1 x N = 1N, 
2 x N = 2N, 
...,
10 x N = 10N.
*/
#include <stdio.h>

int main() {
    int numero = 0, i = 0;
    
    do {
        printf("Informe um numero inteiro entre 1 e 10 (inclusive): ");
        scanf("%d", &numero);
        if ((numero < 1) || (numero > 10)) {
            printf("Numero invalido! Tente novamente.\n");
        }
    } while ((numero < 1) || (numero > 10));

    printf("TABUADA:\n");
    for (i = 0; i < 11; i++) {
        printf("%d x %d = %d\n", i, numero, (i * numero));
    }

    return 0;
}