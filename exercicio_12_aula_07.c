/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Construir um programa para calcular as raízes de uma equação do 2o grau, sendo que os
valores dos coeficientes A, B, e C devem ser fornecidos pelo usuário através do teclado.
*/
#include <stdio.h>
#include <math.h>

int main() {
    double a = 0.00, b = 0.00, c = 0.00;
    double delta = 0.00, raiz1 = 0.00, raiz2 = 0.00;

    printf("AX^2 + BX + C\n");
    printf("Informe o coeficiente A (A != 0): ");
    scanf("%lf", &a);
    while (a == 0) {
        printf("Error: O coeficiente A eh invalido!\n");
        printf("Tente novamente: ");
        scanf("%lf", &a);
    }

    printf("Informe o coeficiente B: ");
    scanf("%lf", &b);

    printf("Informe o coeficiente C: ");
    scanf("%lf", &c);

    delta = (b*b) - (4 * a * c);

    if (delta < 0) {
        printf("A equacao nao possui raizes reais!\n");
    } else {
        raiz1 = (-b + sqrt(delta))/(2*a);
        raiz2 = (-b - sqrt(delta))/(2*a);
        printf("As raizes sao:\n");
        printf("X1 = %.2lf.\n", raiz1);
        printf("X2 = %.2lf.\n", raiz2);
    }

    return 0;
}