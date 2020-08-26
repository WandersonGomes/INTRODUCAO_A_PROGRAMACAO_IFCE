/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Crie um programa que receba 5 numeros do usuario e verifique quantos desses numeros
sao primos. Exiba a quantidade e os numeros que sao primos.

Obs.:
Os numeros negativos estao sendo considerados tambem no escopo de numeros primos.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int i = 0, j = 0, numero = 0, quantidade_primos = 0;
    double raiz_quadrada = 0.00;

    printf("Programa: leia 5 numeros e informe a quantidade de primos e tambem escreva os numeros primos lidos.\n\n");
    
    for (i = 0; i < 5; i++) {
        //ler o numero
        printf("Informe um numero inteiro: ");
        scanf("%d", &numero);

        //verifica se o numero eh nulo
        if (numero != 0) {
            //verifica se o numero eh 1 ou -1
            if ((numero != 1) && (numero != -1)) {
                //verifica se eh um numero primo
                if (numero < 0) {
                    raiz_quadrada = sqrt(numero * (-1));
                } else {
                    raiz_quadrada = sqrt(numero);
                }

                //verifica-se se ele tem outros divisores
                for (j = 2; j <= raiz_quadrada; j++) {
                    if (numero%j == 0) {
                        break;
                    }
                }

                //caso seja primo
                if (j > raiz_quadrada) {
                    printf("%d eh um numero primo!\n", numero);
                    quantidade_primos++;
                }
            }
        }
    }

    printf("\nA quantidade de numeros primos informados foi: %d.\n", quantidade_primos);

    return 0;
}