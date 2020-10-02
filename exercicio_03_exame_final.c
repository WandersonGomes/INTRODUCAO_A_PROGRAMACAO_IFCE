/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que contenha uma função que receba como parâmetro um número
inteiro e retorne o menor número primo que seja maior que o número passado como
parâmetro.
*/
#include <stdio.h>
#include <math.h>

/*
SE UM NUMERO NAO FOR DIVISIVEL POR NENHUM VALOR (A PARTIR DO 2) ATE A SUA RAIZ QUADRADA, ISTO QUE DIZER QUE O NUMERO EH PRIMO
*/

//FUNCAO QUE RETORNA O PROXIMO NUMERO PRIMO
int proxPrimo(int numero) {
    int raiz = 0;
    int proximo_numero = numero;
    int i = 0;

    while (1) {
        proximo_numero++;
        raiz = sqrt(proximo_numero);

        for (i = 2; i <= raiz; i++) {
            //se entrar o numero nao eh primo
            if (proximo_numero%i == 0) {
                break;
            }
        }

        //neste caso o numero eh primo
        if (i > raiz && proximo_numero != 1) {
            return proximo_numero;
        }
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int numero = 0;
    int proximo_primo = 0;

    //leitura do numero
    do {
        printf("Informe um numero natural: ");
        scanf("%d", &numero);
        //error
        if (numero < 0) {
            printf("Error: numero invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (numero < 0);

    //processamento
    proximo_primo = proxPrimo(numero);

    //apresenta o resultado
    printf("O proximo numero primo eh: %d\n", proximo_primo);

    return 0;
}