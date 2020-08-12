/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa para determinar se um número A é divisível por um outro número B.
Esses valores devem ser fornecidos pelo usuário.
*/
#include <stdio.h>

int main() {
    int numeroA = 0, numeroB = 0;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &numeroA);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &numeroB);

    if (numeroA%numeroB == 0) {
        printf("O numero %d eh divisivel por %d!\n", numeroA, numeroB);
    } else {
        printf("O numero %d nao eh divisivel por %d!\n", numeroA, numeroB);
    }

    return 0;
}