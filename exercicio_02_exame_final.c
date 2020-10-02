/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que contenha uma função que recebe como parâmetro uma matriz
4x4 de inteiros, calcule e retorne o produto da diagonal secundária desta matriz.
*/
#include <stdio.h>

#define MAX 4

//FUNCAO QUE RETORNA O PRODUTO DA DIAGONAL SECUNDARIA
int prodDiagonalSecundaria(int matriz[MAX][MAX]) {
    int i = 0, j = MAX - 1;
    int produto = 1;
    
    for (i = 0; i < MAX; i++) {
        produto = produto * matriz[i][j];
        j--;
    }

    return produto;
}

//PROGRAMA PRINCIPAL
int main() {
    int matriz[MAX][MAX] = {0}; //0, ...,  n - 1 (indice)
    int i = 0, j = 0;
    int produto = 0;

    //preenche a matriz
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            printf("Informe o dado da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    //processamento
    produto = prodDiagonalSecundaria(matriz);

    //apresenta os dados
    printf("O produto da diagonal secundaria eh: %d\n", produto);

    return 0;
}