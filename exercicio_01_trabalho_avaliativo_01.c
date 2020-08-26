/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Joao tem 1.34 m e cresce 1.5 cm por ano, enquanto Pedro tem 1.60 m e cresce 0.85 cm por
ano. Crie um programa que calcule e mostre a quantidade de anos necessarios para que
Joao seja maior que Pedro.
*/
#include <stdio.h>

#define CRESCIMENTO_JOAO 1.5
#define CRESCIMENTO_PEDRO 0.85

int main() {
    float altura_joao = 134.00, altura_pedro = 160.00;
    int numero_anos = 0;

    printf("Em quantos anos Joao sera mais alto que Pedro?\n");
    printf("Altura atual de Joao: %.2f cm.\n", altura_joao);
    printf("Crescimento anual de Joao: %.2f cm.\n", CRESCIMENTO_JOAO);
    printf("Altura atual de Pedro: %.2f cm.\n", altura_pedro);
    printf("Crescimento anual de Pedro: %.2f cm.\n", CRESCIMENTO_PEDRO);

    //metodo 01
    while (altura_joao <= altura_pedro) {
        numero_anos++;
        altura_joao += CRESCIMENTO_JOAO;
        altura_pedro += CRESCIMENTO_PEDRO;
        //printf("%d = %.2f, %.2f\n", numero_anos, altura_joao, altura_pedro);
    }

    printf("\n");
    printf("Altura Joao: %.2f cm.\n", altura_joao);
    printf("Altura Pedro: %.2f cm.\n", altura_pedro);

    printf("\n");
    printf("METODO 01:\n");
    printf("Quantidade de anos: %d anos.\n", numero_anos);

    //metodo 02
    numero_anos = ((26 * 100)/65) + 1;
    printf("METODO 02:\n");
    printf("Quantidade de anos: %d anos.\n", numero_anos);
    return 0;
}