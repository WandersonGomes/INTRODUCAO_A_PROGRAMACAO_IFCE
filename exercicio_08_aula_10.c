/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que receba 10 numeros do usuario e imprima a soma de todos os 
numeros lidos.
*/
#include <stdio.h>

int main() {
    double numero = 0.00, soma = 0.00;
    int i = 0;

    for (i = 0; i < 10; i++) {
        printf("Informe o %d.o numero: ", i+1);
        scanf("%lf", &numero);
        soma += numero;
    }

    printf("A soma dos 10 numeros eh: %.2lf\n", soma);

    return 0;
}