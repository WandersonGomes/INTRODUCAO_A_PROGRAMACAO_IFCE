/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Sabe-se que o quilowatt de energia custa um quinto do salario minimo.
Faca um programa que receba o valor do salario minimo e a quantidade
de quilowatts consumida por uma residencia. Calcule e mostre:
a) o valor de cada quilowatt;
b) o valor a ser pago por essa residencia;
c) o valor a ser pago com desconto de 15%.
*/
#include <stdio.h>

int main() {
    float salario_minimo = 0.0, quantidade_quilowatts = 0.0;
    float valor_quilowatt = 0.0, valor_conta = 0.0, valor_conta_desconto = 0.0;

    printf("Informe o valor do salario minimo: ");
    scanf("%f", &salario_minimo);
    while (salario_minimo <= 0) {
        printf("Error: valor do salario minimo invalido!\n");
        printf("Tente novamente: ");
        scanf("%f", &salario_minimo);
    }

    printf("Informe a quantidade de quilowatts consumida pela residencia: ");
    scanf("%f", &quantidade_quilowatts);
    while (quantidade_quilowatts < 0) {
        printf("Error: quantidade de quilowatts informada e invalida!\n");
        printf("Tente novamente: ");
        scanf("%f", &quantidade_quilowatts);
    }

    valor_quilowatt = salario_minimo/5.0;
    valor_conta = valor_quilowatt * quantidade_quilowatts;
    valor_conta_desconto = valor_conta * (1 - 0.15);

    printf("Valor do quilowatt: %.2f.\n", valor_quilowatt);
    printf("O valor da conta da residencia: %.2f\n", valor_conta);
    printf("O valor da conta da residencia com desconto de 15: %.2f.\n", valor_conta_desconto);
    
    return 0;
}