/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Faca um programa que peca dois numeros e imprima a soma.
*/
#include <stdio.h>

int main() {
    double numero1 = 0.00, numero2 = 0.00;

    printf("Informe o primeiro numero: ");
    scanf("%lf", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%lf", &numero2);

    printf("A soma dos dois numeros e: %g.\n", (numero1 + numero2));

    return 0;
}