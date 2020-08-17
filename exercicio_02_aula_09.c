/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Implementar um programa que receba cinco numeros reais.
O programa deve mostrar a media e a quantidade de numeros 
(dentre estes cinco numeros) que estao acima da media.
*/
#include <stdio.h>

int main() {
    double numero1 = 0.00, numero2 = 0.00, numero3 = 0.00, numero4 = 0.00, numero5 = 0.00;
    double media = 0.00, quantidade_acima_media = 0;

    printf("Informe o primeiro numero: ");
    scanf("%lf", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%lf", &numero2);
    printf("Informe o terceiro numero: ");
    scanf("%lf", &numero3);
    printf("Informe o quarto numero: ");
    scanf("%lf", &numero4);
    printf("Informe o quinto numero: ");
    scanf("%lf", &numero5);

    media = (numero1 + numero2 + numero3 + numero4 + numero5)/5.00;

    if (numero1 > media) {
        quantidade_acima_media++;
    }
    if (numero2 > media) {
        quantidade_acima_media++;
    }
    if (numero3 > media) {
        quantidade_acima_media++;
    }
    if (numero4 > media) {
        quantidade_acima_media++;
    }
    if (numero5 > media) {
        quantidade_acima_media++;
    }

    printf("A media aritmetica dos cinco numeros informados eh: %.2lf\n", media);
    printf("Quantidade de numeros acima da media: %d\n", quantidade_acima_media);

    return 0;
}