/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Desenvolver um algoritmo que leia um numero inteiro (NUM), e depois leia NUM numeros
inteiros e imprima o maior deles. Suponha que todos os numeros lidos serao positivos.
*/
#include <stdio.h>

int main() {
    int numero = 0, quantidade_numeros = 0, maior = 0, i = 0;

    printf("Informe a quantidade de numeros que serao lidos: ");
    scanf("%d", &quantidade_numeros);

    while (quantidade_numeros < 1) {
        printf("Error: Valor invalido!\n");
        printf("Tente novamente: ");
        scanf("%d", &quantidade_numeros);
    }

    printf("Aviso: informe numeros apenas numeros inteiros!\n");
    for (i = 0; i < quantidade_numeros; i++) {
        printf("Informe o %d.o numero: ", i+1);
        scanf("%d", &numero);
        if (i == 0) {
            maior = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }
        }
    }

    printf("O maior numero informado foi: %d.\n", maior);
        
    return 0;
}