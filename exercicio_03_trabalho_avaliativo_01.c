/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Faca um programa que receba dez numeros, calcule e mostre a soma dos numeros pares
e a soma dos numeros impares.
*/
#include <stdio.h>

int main() {
    int i = 0, numero = 0, soma_par = 0, soma_impar = 0;

    //ler os 10 numeros
    for (i = 1; i <= 10; i++) {
        printf("Informe o %d.o numero: ", i);
        scanf("%d", &numero);

        //verifica se o numero eh par ou impar
        if (numero%2 == 0) {
            soma_par += numero;
        } else {
            soma_impar += numero;
        }
    }

    //apresenta os resultados
    printf("\nA soma dos numeros pares eh: %d.\n", soma_par);
    printf("A soma dos numeros impares eh: %d.\n", soma_impar);

    return 0;
}