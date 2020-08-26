/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Crie um programa que recebe dois numeros, sendo o primeiro a base e o segundo o
expoente. Calcular e exibir o resultado da exponenciacao utilizando uma estrutura de
repeticao sem usar a operacao de exponenciacao.
*/
#include <stdio.h>

int main() {
    int base = 0, expoente = 0, i = 0;
    double resultado = 1.00;

    printf("Informe a base (numero inteiro): ");
    scanf("%d", &base);

    printf("Informe o expoente (numero inteiro): ");
    scanf("%d", &expoente);

    if ((base != 0) && (base != 1)) {
        if (expoente > 0) {
            for (i = 0; i < expoente; i++) {
                resultado = resultado * base;
            }
        } else if (expoente < 0) {
            for (i = expoente; i < 0; i++) {
                resultado = resultado * base;
            }
            resultado = 1/resultado;
        }
    } else {
        resultado = base;
    }
    
    if ((base == 0) && (expoente <= 0)) {
        printf("Error: indetermincao!\n");
    } else {
        printf("%d elevado a %d e igual a %g.\n", base, expoente, resultado);
    }

    return 0;
}