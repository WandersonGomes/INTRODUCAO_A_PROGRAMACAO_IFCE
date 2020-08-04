/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Pedro comprou um saco de racao com peso em quilos. Ele
possui dois gatos, para os quais fornece a quantidade de racao
em gramas. A quantidade diaria de racao fornecida para cada
gato e sempre a mesma. Faca um programa que receba o peso
do saco de racao e a quantidade de racao fornecida para
cada gato, calcule e mostre quanto restara de racao no saco
apos cinco dias.
*/
#include <stdio.h>

int main() {
    float peso_saco_racao = 0.0, quantidade_racao = 0.0, restante_cinco_dias = 0.0;

    printf("Informe o peso do saco de racao(quilos): ");
    scanf("%f", &peso_saco_racao);
    while (peso_saco_racao <= 0) {
        printf("Error: peso invalido!\n");
        printf("Tente novamente: ");
        scanf("%f", &peso_saco_racao);
    }

    printf("Informe a quantidade de racao diaria para cada gato(gramas): ");
    scanf("%f", &quantidade_racao);
    while (quantidade_racao <= 0) {
        printf("Error: quantidade invalida!\n");
        printf("Tente novamente: ");
        scanf("%f", &quantidade_racao);
    }

    restante_cinco_dias = (peso_saco_racao * 1000) - (5 * quantidade_racao * 2);

    printf("O restante de racao apos 5 dias e: %.2f gramas.\n", restante_cinco_dias);

    return 0;
}