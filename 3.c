#include <stdio.h>
#include <string.h>

void imprimirMatriz(int matriz[4][4]) {
    for(int linha = 0; linha < 4; linha++) {
        for(int coluna = 0; coluna < 4; coluna++) {
            printf("%4d", matriz[linha][coluna]);
        }  
        printf("\n");
    }
}

int main() {
    int matrizX[4][4];
    int matrizY[4][4];
    int matrizResultado[4][4];
    char operacao[5];
    char soma[] = "soma";
    char subtracao[] = "sub";
    char multiplicacao[] = "mult";

    for(int linha = 0; linha < 4; linha++) {
        for(int coluna = 0; coluna < 4; coluna++) {
            scanf("%d", &matrizX[linha][coluna]);
        }
    }

    for(int linha = 0; linha < 4; linha++) {
        for(int coluna = 0; coluna < 4; coluna++) {
            scanf("%d", &matrizY[linha][coluna]);
        }
    }

    scanf("%s", operacao);

    if(strcmp(operacao, soma) == 0) {
        for(int linha = 0; linha < 4; linha++) {
            for(int coluna = 0; coluna < 4; coluna++) {
                matrizResultado[linha][coluna] = matrizX[linha][coluna] + matrizY[linha][coluna];
            }
        }
    } else if(strcmp(operacao, subtracao) == 0) {
        for(int linha = 0; linha < 4; linha++) {
            for(int coluna = 0; coluna < 4; coluna++) {
                matrizResultado[linha][coluna] = matrizX[linha][coluna] - matrizY[linha][coluna];
            }
        }
    } else if(strcmp(operacao, multiplicacao) == 0) {
        for(int linha = 0; linha < 4; linha++) {
            for(int coluna = 0; coluna < 4; coluna++) {
                matrizResultado[linha][coluna] = 0; 
                for(int k = 0; k < 4; k++) {
                    matrizResultado[linha][coluna] += matrizX[linha][k] * matrizY[k][coluna];
                }
            }
        }
    } else {
        printf("Operação inválida\n");
        return 1;
    } 

    imprimirMatriz(matrizResultado);

    return 0;
}