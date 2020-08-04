/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Faca um programa que receba tres notas, calcule e mostre a
media aritmetica.
*/
#include <stdio.h>

int main() {
    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0;

    printf("A faixa de notas sao: [0, 10]\n");
    //primeira nota
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    while ((nota1 < 0) || (nota1 > 10)) {
        printf("Error: a nota informada e invalida!\n");
        printf("Tente novamente: ");
        scanf("%f", &nota1);
    }
    
    //segunda nota
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    while ((nota2 < 0) || (nota2 > 10)) {
        printf("Error: a nota informada e invalida!\n");
        printf("Tente novamente: ");
        scanf("%f", &nota2);
    }

    //terceira nota
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    while ((nota3 < 0) || (nota3 > 10)) {
        printf("Error: a nota informada e invalida!\n");
        printf("Tente novamente: ");
        scanf("%f", &nota3);
    }

    printf("A media aritmetica das tres notas e: %g.\n", ((nota1 + nota2 + nota3)/3.0));

    return 0;
}