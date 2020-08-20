/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que receba 10 numeros do usuario e imprima a quantidade de
numeros menores que 100.
*/
#include <stdio.h>

int main() {
    int i = 0, quantidade_menores_100 = 0;
    double numero = 0.00;

    for (i = 0; i < 10; i++) {
        printf("Informe o %d.o: ", i+1);
        scanf("%lf", &numero);

        if (numero < 100) {
            quantidade_menores_100++;
        }
    }

    printf("A quantidade de numeros menores que 100 foi: %d.\n", quantidade_menores_100);
        
    return 0;
}