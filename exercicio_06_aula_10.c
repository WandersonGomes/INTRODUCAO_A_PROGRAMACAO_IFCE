/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que receba 10 numeros do usuario e imprima a metade de cada
numero.
*/
#include <stdio.h>

int main() {
    double numero = 0.00;
    int i = 0;

    for (i = 0; i < 10; i++) {
        printf("Informe o %d.o numero: ", i+1);
        scanf("%lf", &numero);
        printf("Metade do numero: %.2lf\n", (numero/2.00));
    }

    return 0;
}