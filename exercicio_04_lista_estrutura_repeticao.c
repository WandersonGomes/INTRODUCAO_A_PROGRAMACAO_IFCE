/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Faca um algoritmo estruturado que leia uma quantidade nao determinada de numeros
positivos. Calcule a quantidade de numeros pares e impares, a media de valores pares e a
media geral dos numeros lidos. O numero que encerrara a leitura sera zero.
*/
#include <stdio.h>

int main() {
    int numero = 0, qtd_pares = 0, qtd_impares = 0, qtd_total = 0;
    int soma_par = 0, soma_geral = 0;
    double media_par = 0.00, media_geral = 0.00;

    while (1) {
        do {
            printf("Informe um numero inteiro positivo ou digite 0 para encerrar o programa: ");
            scanf("%d", &numero);
            
            if (numero < 0) {
                printf("Valor invalido! Tente novamente.\n");
            }
        } while (numero < 0);

        //caso seja zero interrompe a leitura de numeros
        if (numero == 0) {
            break;
        }

        //realiza o processamento
        if (numero%2 == 0) {
            soma_par += numero;
            qtd_pares++;
        } else {
            qtd_impares++;
        }

        soma_geral += numero;
        qtd_total++;
    }

    //calcula as medias e apresenta os resultados obtidos
    printf("\n");
    printf("A quantidade de numeros pares informados: %d\n", qtd_pares);
    printf("A quantidade de numeros impares informados: %d\n", qtd_impares);

    if (qtd_pares > 0) {
        media_par = (soma_par * 1.00)/qtd_pares;
        printf("A media dos numeros pares eh: %.2lf\n", media_par);
    }

    if (qtd_total > 0) {
        media_geral = (soma_geral * 1.00)/qtd_total;
        printf("A media geral dos numeros digitados eh: %.2lf\n", media_geral);
    } else {
        printf("Nao foi informado nenhum numero positivo.\n");
    }

    return 0;
}