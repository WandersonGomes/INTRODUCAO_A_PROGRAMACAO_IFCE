/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Desenvolver um algoritmo que leia a altura de 6 pessoas. Este programa
devera calcular e mostrar:
* A menor altura do grupo;
* A maior altura do grupo;
*/
#include <stdio.h>

#define NUMERO_PESSOAS 6
#define LIMITE_INFERIOR 20.00
#define LIMITE_SUPERIOR 300.00

int main() {
    int i = 0;
    double altura = 0.00, menor_altura = 0.00, maior_altura = 0.00;

    printf("O NUMERO DE PESSOAS DO GRUPO EH: %d\n\n", NUMERO_PESSOAS);

    for (i = 1; i <= NUMERO_PESSOAS; i++) {
        //pega a altura da pessoa
        do {
            printf("Informe a altura da %d.a pessoa do grupo (em cm): ", i);
            scanf("%lf", &altura);
            
            if ((altura < LIMITE_INFERIOR) || (altura > LIMITE_SUPERIOR)) {
                printf("Valor da altura invalido! Tente novamente.\n");
            }
        } while ((altura < LIMITE_INFERIOR) || (altura > LIMITE_SUPERIOR));
    
        //a primeira pessoa tera a maior e a menor altura
        if (i == 1) {
            menor_altura = altura;
            maior_altura = altura;
        } else {
            //verifica qual a maior e a menor altura
            if (altura < menor_altura) {
                menor_altura = altura;
            } else if (altura > maior_altura) {
                maior_altura = altura;
            }
        }
    }

    //menor altura encontrada
    printf("MENOR ALTURA DO GRUPO EH: %.2lf cm\n", menor_altura);
    //maior altura encontrada
    printf("MAIOR ALTURA DO GRUPO EH: %.2lf cm\n", maior_altura);

    return 0;
}