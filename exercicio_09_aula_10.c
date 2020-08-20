/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que receba 10 numeros do usuario e imprima a soma de todos os numeros pares.
*/
#include <stdio.h>

int main() {
    int numero = 0, soma_pares = 0;
    int i = 0;

    printf("Aviso: Os numeros informados devem ser inteiros!\n");
    for (i = 0; i < 10; i++) {
        printf("Informe o %d.o numero: ", i+1);
        scanf("%d", &numero);
        if (numero%2 == 0) {
            soma_pares += numero;
        }
    }

    printf("A soma dos numeros pares eh: %d\n", soma_pares);

    return 0;
}