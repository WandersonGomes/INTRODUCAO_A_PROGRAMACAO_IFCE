/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa para determinar se um dado número inteiro (recebido através do
teclado) é POSITIVO, NEGATIVO ou NULO.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("O numero eh NULO!\n");
    } else if (numero > 0) {
        printf("O numero eh POSITIVO!\n");
    } else {
        printf("O numero eh NEGATIVO!\n");
    }

    return 0;
}