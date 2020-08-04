/*
Faca um programa que receba quatro numeros inteiros,
calcule e mostre a soma desses numeros.
*/
#include <stdio.h>

int main() {
    int numero1 = 0, numero2 = 0, numero3 = 0, numero4 = 0;

    printf("Obs.: Os valores devem ser numero inteiros!\n");
    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &numero3);
    printf("Informe o quarto numero: ");
    scanf("%d", &numero4);

    printf("A soma dos quatros numeros e: %d.\n", (numero1 + numero2 + numero3 + numero4));

    return 0;
}