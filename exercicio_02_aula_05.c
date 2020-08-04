/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Faca um programa que peca um numero e entao mostre a
mensagem: "O numero informado foi [numero]."
*/
#include <stdio.h>

int main() {
    double numero = 0.00;

    printf("Informe um numero: ");
    scanf("%lf", &numero);

    printf("O numero informado foi %g.\n", numero);

    return 0;
}