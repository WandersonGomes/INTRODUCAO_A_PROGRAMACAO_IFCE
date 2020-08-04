/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Faca um programa que receba o numero de horas trabalhadas
e o valor do salario minimo, calcule e mostre o salario
a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salario minimo.
b) o salario bruto equivale ao numero de horas trabalhadas
multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do salario bruto.
d) o salario a receber equivale ao salario bruto menos o imposto.
*/
#include <stdio.h>

#define TAXA_IMPOSTO 0.03 //3%

int main() {
    int numero_horas_trabalhadas = 0;
    float salario_minimo = 0.0;
    float valor_hora_trabalhada = 0.0, salario_bruto = 0.0, imposto = 0.0, salario_liquido = 0.0;

    printf("Informe o numero de horas trabalhadas: ");
    scanf("%d", &numero_horas_trabalhadas);
    while (numero_horas_trabalhadas < 0) {
        printf("Error: o numero de horas trabalhadas e invalido!\n");
        printf("Tente novamente: ");
        scanf("%d", &numero_horas_trabalhadas);
    }

    printf("Informe o valor do salario minimo: ");
    scanf("%f", &salario_minimo);
    while (salario_minimo <= 0) {
        printf("Error: o valor do salario minimo informado e invalido!\n");
        printf("Tente novamente: ");
        scanf("%f", &salario_minimo);
    }

    valor_hora_trabalhada = salario_minimo/2.00;
    salario_bruto = valor_hora_trabalhada * numero_horas_trabalhadas;
    imposto = salario_bruto * TAXA_IMPOSTO;
    salario_liquido = salario_bruto - imposto;

    printf("O salario liquido e: %.2f.\n", salario_liquido);

    return 0;
}