/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que dada a idade de uma pessoa, determine sua classificação
segundo a seguinte padronização:
* maior de idade;
* menor de idade;
* pessoa idosa (idade superior ou igual a 65 anos).
*/
#include <stdio.h>

int main() {
    int idade = 0;

    printf("Informe a idade da pessoa em anos: ");
    scanf("%d", &idade);

    while (idade < 0) {
        printf("Error: a idade informada eh invalida!\n");
        printf("Tente novamente: ");
        scanf("%d", &idade);
    }

    if (idade < 18) {
        printf("Menor de idade!\n");
    } else {
        printf("Maior de idade!\n");
        if (idade >= 65) {
            printf("IDOSO!\n");
        }
    }

    return 0;
}