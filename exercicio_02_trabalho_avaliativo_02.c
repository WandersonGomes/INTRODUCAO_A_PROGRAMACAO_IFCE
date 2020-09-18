/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que contenha uma função que verifique se um valor é perfeito ou
não. Um valor é dito perfeito quando ele é igual a soma dos seus divisores excetuando
ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). Retorne 1 caso o
número seja perfeito e 0 caso ele não seja perfeito. (2,5 pontos)
*/
#include <stdio.h>

//FUNCAO QUE VERIFICA SE UM NUMERO EH PERFEITO OU NAO
int ehPerfeito(int numero) {
    int metade = numero/2;
    int i = 0, soma = 0;
    
    for (i = 1; i < numero; i++) {
        if (numero%i == 0) {
            soma += i;
        }
    }

    if (soma == numero) {
        return 1;
    }

    return 0;
}

//PROGRAMA PRINCIPAL
int main() {
    int numero = 0;

    while (1) {
        printf("Informe um numero para ver se ele eh perfeito (0 encerra o programa): ");
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }

        if (ehPerfeito(numero)) {
            printf("O numero eh perfeito!\n");
        } else {
            printf("O numero nao eh perfeito!\n");
        }
    }

    return 0;
}