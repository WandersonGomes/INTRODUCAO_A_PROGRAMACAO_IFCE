/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que receba tres numeros e verifique se
esses numeros podem formar um triangulo. Caso possam formar,
classifique esse triangulo em Equilatero, Isosceles ou Escaleno.
*/
#include <stdio.h>

int main() {
    double numero1 = 0.00, numero2 = 0.00, numero3 = 0.00;
    int triangulo_flag = 1; //forma triangulo

    printf("Informe o primeiro numero: ");
    scanf("%lf", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%lf", &numero2);
    printf("Informe o terceiro numero: ");
    scanf("%lf", &numero3);

    if ((numero1 <= 0) || (numero2 <= 0) || (numero3 <= 0)) {
        printf("O tres numeros informados nao formam um triangulo!\n");
    } else {
        if (numero1 >= (numero2 + numero3)) {
            triangulo_flag = 0;
        } else if (numero2 >= (numero1 + numero3)) {
            triangulo_flag = 0;
        } else if (numero3 >= (numero1 + numero2)) {
            triangulo_flag = 0;
        }

        //se forma triangulo
        if (triangulo_flag) {
            printf("Os tres numeros formam um triangulo ");
            if ((numero1 == numero2) && (numero2 == numero3)) {
                printf("equilatero.\n");
            } else if ((numero1 != numero2) && (numero2 != numero3) && (numero1 != numero3)) {
                printf("escaleno.\n");
            } else {
                printf("isosceles.\n");
            }
        } else {
            printf("O tres numeros informados nao formam um triangulo!\n");
        }
    }

    return 0;
}