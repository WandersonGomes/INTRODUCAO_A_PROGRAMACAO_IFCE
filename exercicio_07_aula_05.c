/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Faca um programa que receba duas notas, calcule e mostre a
media ponderada dessas notas, considerando peso 2 para a
primeira e peso 3 para a segunda.
*/
#include <stdio.h>

#define PESO_NOTA_1 2
#define PESO_NOTA_2 3

int main() {
    float nota1 = 0.0, nota2 = 0.0, media_ponderada = 0;

    printf("Informe o valor da primeira nota [0, 10]: ");
    scanf("%f", &nota1);
    while ((nota1 < 0) || (nota1 > 10)) {
        printf("Error: nota invalida!\n");
        printf("Tente novamente: ");
        scanf("%f", &nota1);
    }

    printf("Informe o valor da segunda nota [0, 10]: ");
    scanf("%f", &nota2);
    while ((nota2 < 0) || (nota2 > 10)) {
        printf("Error: nota invalida!\n");
        printf("Tente novamente: ");
        scanf("%f", &nota2);
    }

    media_ponderada = ((nota1*PESO_NOTA_1)+(nota2*PESO_NOTA_2))/(PESO_NOTA_1 + PESO_NOTA_2);

    printf("A media ponderada e: %.2f.\n", media_ponderada);

    return 0;
}