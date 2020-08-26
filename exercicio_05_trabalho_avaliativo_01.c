/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.1
As eleicoes municipais estao chegando e voce foi designado pra fazer um programa que
recebe os votos, computa e apresenta o resultado das eleicoes. Os votos sao informados
por codigo e obedeceram a seguinte notacao:
1 - Pedro
2 - Maria
3 - Joao
4 - Ana
5 - Voto nulo
6 - Voto em Branco

O programa deve apresentar as seguintes informacoes:
* O total de votos para cada candidato e o seu percentual sobre o total;
* O total de votos nulos e o seu percentual sobre o total;
* O total de votos em Branco e o seu percentual total;
* O(a) vencedor(a) das eleicoes.

Utilize como finalizador da apuracao de votos o valor 0(zero).
*/
#include <stdio.h>
#include <stdlib.h>

#define PEDRO 1
#define MARIA 2
#define JOAO 3
#define ANA 4
#define VOTO_NULO 5
#define VOTO_BRANCO 6

int main() {
    int voto = 0, votos_pedro = 0, votos_maria = 0, votos_joao = 0, votos_ana = 0;
    int votos_nulo = 0, votos_branco = 0, votos_total = 0;
    double percentual = 0.00;
    int maior = 0, vencedor = 0, flag_segundo_turno = 0;

    do {
        //apresenta o menu de votacao
        printf("MENU:\n");
        printf("%d - PEDRO\n", PEDRO);
        printf("%d - MARIA\n", MARIA);
        printf("%d - JOAO\n", JOAO);
        printf("%d - ANA\n", ANA);
        printf("%d - VOTO NULO\n", VOTO_NULO);
        printf("%d - VOTO BRANCO\n", VOTO_BRANCO);
        printf("0 - ENCERRAR VOTACAO\n");
        
        //ler o voto
        do {
            printf("Informe o valor da sua opcao: ");
            scanf("%d", &voto);
            if ((voto < 0) || (voto > 6)) {
                printf("Error: opcao invalida! Tente novamente.\n");
            }
        } while ((voto < 0) || (voto > 6));

        //soma os votos no total
        if (voto != 0) {
            votos_total++;
        }

        //contabiliza os votos
        switch (voto) {
            case PEDRO: votos_pedro++; break;
            case MARIA: votos_maria++; break;
            case JOAO: votos_joao++; break;
            case ANA: votos_ana++; break;
            case VOTO_NULO: votos_nulo++; break;
            case VOTO_BRANCO: votos_branco++; break;
        }

        //limpar a tela do console
        if (system("cls") != 0) {
            system("clear");
        }
    } while (voto != 0);
    

    //apresenta os resultados
    printf("\nRESULTADO DA ELEICAO:\n");
    printf("TOTAL VOTOS: %d votos.\n\n", votos_total);
    //cada candidato
    percentual = (votos_pedro * 100.00)/votos_total;
    printf("PEDRO = %d votos. (%g %% dos votos)\n", votos_pedro, percentual);
    percentual = (votos_maria * 100.00)/votos_total;
    printf("MARIA = %d votos. (%g %% dos votos)\n", votos_maria, percentual);
    percentual = (votos_joao * 100.00)/votos_total;
    printf("JOAO = %d votos. (%g %% dos votos)\n", votos_joao, percentual);
    percentual = (votos_ana * 100.00)/votos_total;
    printf("ANA = %d votos. (%g %% dos votos)\n", votos_ana, percentual);
    percentual = (votos_nulo * 100.00)/votos_total;
    printf("NULO = %d votos. (%g %% dos votos)\n", votos_nulo, percentual);
    percentual = (votos_branco * 100.00)/votos_total;
    printf("BRANCO = %d votos. (%g %% dos votos)\n", votos_branco, percentual);

    //verifica o vencedor
    maior = votos_pedro;
    vencedor = PEDRO;

    if (votos_maria > maior) {
        vencedor = MARIA;
        maior = votos_maria;
    }

    if (votos_joao > maior) {
        vencedor = JOAO;
        maior = votos_joao;
    }

    if (votos_ana > maior) {
        vencedor = ANA;
        maior = votos_ana;
    }

    //verifica se vai ter segundo turno
    if (votos_pedro == maior) flag_segundo_turno++;
    if (votos_maria == maior) flag_segundo_turno++;
    if (votos_joao == maior) flag_segundo_turno++;
    if (votos_ana == maior) flag_segundo_turno++;

    //informa o resultado da eleicao
    printf("\n");
    if (flag_segundo_turno > 1) {
        printf("TEREMOS SEGUNDO TURNO E OS CANDIDATOS EMPATADOS FORAM:\n");
        if (votos_pedro == maior) printf("PEDRO\n");
        if (votos_maria == maior) printf("MARIA\n");
        if (votos_joao == maior) printf("JOAO\n");
        if (votos_ana == maior) printf("ANA\n");

    } else {
        printf("O(A) GRANDE VENCEDOR(A) DA ELEICAO FOI: ");
        switch (vencedor) {
            case PEDRO: printf("PEDRO\n"); break;
            case MARIA: printf("MARIA\n"); break;
            case JOAO: printf("JOAO\n"); break;
            case ANA: printf("ANA\n"); break;
        }
    }
    return 0;
}