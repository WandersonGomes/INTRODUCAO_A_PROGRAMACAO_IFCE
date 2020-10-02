/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
Escreva um programa que contenha uma função que recebe como parâmetro o valor total
de uma compra realizada por um cliente de uma loja. A função deve imprimir 3 opções de
pagamento e solicitar que o usuário escolha uma delas. As opções são:
    Pagamento à vista com 10% de desconto
    Pagamento em 2 vezes (preço normal do produto)
    Pagamento de 3 até 5 vezes com acréscimo de 2% de juros ao mês
Ao escolher uma das opções o programa deve retornar o valor total do pagamento, e caso
o pagamento seja parcelado mostrar o valor de cada parcela.
*/
#include <stdio.h>

#define DESCONTO 0.10
#define JUROS 0.02

typedef struct comp {
    float valor_total;
    float valor_parcela;
    int qtd_parcelas;
} Compra;


//FUNCAO QUE RETORNA A QUANTIDADE PARCELAS (3, 4, 5)
int lerQuantidadeParcelas() {
    int qtd_parcelas = 0;
    do {
        printf("Em quantas parcelas voce deseja:\n");
        printf("Em 3, 4 ou 5 vezes. (digite apenas a quantidade de parcelas)\n");
        scanf("%d", &qtd_parcelas);
        //error
        if (qtd_parcelas < 3 || qtd_parcelas > 5) {
            printf("Error: quantidade invalida!\n");
            printf("Tente novamente.\n");
        }
    } while (qtd_parcelas < 3 || qtd_parcelas > 5);

    return qtd_parcelas;
}

//FUNCAO QUE RETORNA O VALOR TOTAL DA COMPRA E O VALOR DA PARCELA
Compra calculaParcelasTotal(float valor) {
    int opcao = 0;
    float acrescimo = 0.0;
    Compra dados;

    //ler a opcao desejada
    do {
        printf("MENU\n");
        printf("1 - Pagamento a vista.\n");
        printf("2 - Pagamento em 2 vezes.\n");
        printf("3 - Pagamentro entre 3 e 5 vezes.\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        //error
        if (opcao != 1 && opcao != 2 && opcao != 3) {
            printf("Error: opcao invalida!\n");
            printf("Tente novamente.\n");
        }
    } while (opcao != 1 && opcao != 2 && opcao != 3);

    //realiza a operacao desejada
    switch (opcao) {
        //a vista
        case 1:
            dados.qtd_parcelas = 1;
            dados.valor_total = valor - (valor * DESCONTO);
            dados.valor_parcela = dados.valor_total;
            break;
        //em duas vezes
        case 2:
            dados.qtd_parcelas = 2;
            dados.valor_total = valor;
            dados.valor_parcela = valor/2;
            break;
        case 3:
            dados.qtd_parcelas = lerQuantidadeParcelas();
            acrescimo = valor * JUROS;
            dados.valor_parcela = (valor/dados.qtd_parcelas) + acrescimo;
            dados.valor_total = dados.valor_parcela * dados.qtd_parcelas;
            break;
    }

    return dados;
}

//PROGRAMA PRINCIPAL
int main() {
    float valor_compra = 0.0;
    Compra dados_compra;

    //leitura do valor da compra
    do {
        printf("Informe o valor da compra: ");
        scanf("%f", &valor_compra);
        //error
        if (valor_compra < 0) {
            printf("Error: valor da compra invalido!\n");
            printf("Tente novamente.\n");
        }
    } while (valor_compra < 0);

    //processamento
    dados_compra = calculaParcelasTotal(valor_compra);

    //apresenta os dados
    printf("\n");
    printf("O valor da compra ficara em: %g reais.\n", dados_compra.valor_total);
    printf("O pagamento de cada uma das %d parcelas fica em: %g reais.\n", dados_compra.qtd_parcelas, dados_compra.valor_parcela);    

    return 0;
}