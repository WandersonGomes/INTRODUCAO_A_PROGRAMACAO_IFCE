/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que receba 10 numeros do usuario e imprima a quantidade de numeros maiores que 10.
*/
#include <stdio.h>

int main() {
    int i = 0, quantidade_maiores_10 = 0;
    double numero = 0.00;

    for (i = 0; i < 10; i++) {
        printf("Informe o %d.o: ", i+1);
        scanf("%lf", &numero);

        if (numero > 10) {
            quantidade_maiores_10++;
        }
    }

    printf("A quantidade de numeros maiores que 10 foi: %d.\n", quantidade_maiores_10);
        
    return 0;
}