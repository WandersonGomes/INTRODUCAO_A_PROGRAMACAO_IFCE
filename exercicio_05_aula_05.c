/*
Faca um programa que receba tres notas, calcule e mostre a
media aritmetica.
*/
#include <stdio.h>

int main() {
    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    
    printf("A media aritmetica das tres notas e: %g.\n", ((nota1 + nota2 + nota3)/3.0));

    return 0;
}