/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escrever um algoritmo que gera e escreve os numeros impares entre 100 e 200.
*/
#include <stdio.h>

#define LIMITE_MAXIMO 15

int main() {
    int numero = 0;
    long long int fatorial = 1;

    //obtendo o numero
    do {
        printf("Informe um numero entre 0 e %d (inclusive): ", LIMITE_MAXIMO);
        scanf("%d", &numero);
        if ((numero < 0) || (numero > LIMITE_MAXIMO)) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while ((numero < 0) || (numero > LIMITE_MAXIMO));

    //calculando o fatorial do numero
    printf("O fatorial de %d! = ", numero);
    while (numero != 0) {
        fatorial = fatorial * numero;
        numero--;
    }

    //apresenta o resultado
    printf("%lld.\n", fatorial);


    return 0;
}