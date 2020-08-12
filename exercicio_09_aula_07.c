/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Dados três números inteiro A, B e C, construa um programa, que imprima os valores de
forma ascendente (do menor para o maior).
*/
#include <stdio.h>

int main() {
    int numeroA = 0, numeroB = 0, numeroC = 0;
    int menor = 0, meio = 0, maior = 0, aux = 0;
    int i = 0;

    for (i = 0; i < 27; i++) {

        //printf("Informe o primeiro numero inteiro: ");
        scanf("%d", &numeroA);
        maior = numeroA;

        //printf("Informe o segundo numero inteiro: ");
        scanf("%d", &numeroB);
        if (numeroB > maior) {
            maior = numeroB;
            meio = numeroA;
        } else {
            meio = numeroB;
        }

        //printf("Informe o terceiro numero inteiro: ");
        scanf("%d", &numeroC);
        if (numeroC > maior) {
            menor = meio;
            meio = maior;
            maior = numeroC;
        } else if (numeroC >= meio) {
            menor = meio;
            meio = numeroC;
        } else {
            menor = numeroC;
        }

        printf("%d, %d, %d.\n", menor, meio, maior);
    }
    return 0;
}