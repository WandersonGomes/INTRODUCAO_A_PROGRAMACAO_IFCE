/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Faca um programa que pergunte quanto voce ganha por hora
e o numero de horas trabalhadas no mes. Calcule e mostre o
total do seu salario no referido mes.
*/
#include <stdio.h>

int main() {
    float valor_hora = 0.0;
    int numero_horas_trabalhadas = 0;
    double salario = 0.00;

    printf("Informe o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);
    while (valor_hora < 0) {
        printf("Error: valor da hora e invalido!\n");
        printf("Tente novamente: ");
        scanf("%f", &valor_hora);
    }

    printf("Informe a quantidade horas trabalhadas: ");
    scanf("%d", &numero_horas_trabalhadas);
    while (numero_horas_trabalhadas < 0) {
        printf("Error: numero de horas trabalhadas e invalido!\n");
        printf("Tente novamente: ");
        scanf("%d", &numero_horas_trabalhadas);
    }

    salario = numero_horas_trabalhadas * valor_hora;

    printf("Seu salario e de: %g.\n", salario);

    return 0;
}