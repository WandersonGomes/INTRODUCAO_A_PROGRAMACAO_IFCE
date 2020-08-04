/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
O custo ao consumidor de um carro novo e a soma do preco
de fabrica com o percentual de lucro do distribuidor e dos
impostos aplicados ao preco de fabrica. Faca um programa
que receba o preco de fabrica de um veiculo, o percentual de
lucro do distribuidor e o percentual de impostos, calcule e
mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preco final do veiculo.
*/
#include <stdio.h>

int main() {
    float custo_consumidor = 0.0, preco_fabrica = 0.0;
    float percentual_lucro_distribuidor = 0.0, percentual_imposto = 0.0;
    float lucro_distribuidor = 0.0, imposto = 0.0;

    printf("Informe o preco de fabrica do veiculo: ");
    scanf("%f", &preco_fabrica);
    while ((preco_fabrica < 0) && (preco_fabrica > 10)) {
        printf("Error: o preco de fabrica e invalido!\n");
        printf("Tente novamente: ");
        scanf("%f", &preco_fabrica);
    }

    printf("Informe o percentual(%%) de lucro do distribuidor: ");
    scanf("%f", &percentual_lucro_distribuidor);
    while (percentual_lucro_distribuidor < 0) {
        printf("Error: o percentual de lucro do distribuidor e invalido!\n");
        printf("Tente novamente: ");
        scanf("%f", &percentual_lucro_distribuidor);
    }

    printf("Informe o percentual(%%) de imposto: ");
    scanf("%f", &percentual_imposto);
    while (percentual_imposto < 0) {
        printf("Error: o percentual de imposto e invalido!\n");
        printf("Tente novamente: ");
        scanf("%f", &percentual_imposto);
    }

    lucro_distribuidor = preco_fabrica * (percentual_lucro_distribuidor/100.00);
    imposto = preco_fabrica * (percentual_imposto/100.00);
    custo_consumidor = preco_fabrica + lucro_distribuidor + imposto;

    printf("O valor do lucro do distribuidor: %.2f.\n", lucro_distribuidor);
    printf("O valor do imposto: %.2f.\n", imposto);
    printf("O custo do veiculo para o consumidor e: %.2f.\n", custo_consumidor);

    return 0;
}