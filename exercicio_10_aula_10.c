/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que receba 10 numeros do usuario e imprima a soma de todos os
numeros multiplos de 5.
*/
#include <stdio.h>

int main() {
    int i = 0, numero = 0, soma_multiplos_5 = 0;

    printf("Aviso: informe apenas numeros inteiros!\n");
    for (i = 0; i < 10; i++) {
        printf("Informe o %d.o: ", i+1);
        scanf("%d", &numero);

        if (numero%5 == 0) {
            soma_multiplos_5 += numero;
        }
    }

    printf("A soma dos multiplos de 5 eh: %d\n", soma_multiplos_5);
    
    return 0;
}