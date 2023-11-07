#include <stdio.h>

void exibirLista(int lista[], int comprimento) {
    int i = 0;
    while (i < comprimento) {
        printf("%d", lista[i]);
        if(i < comprimento - 1) {
            printf(" ");
        }
        i++;
    }
    printf("\n");
}

int main(){
    int entradas[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &entradas[i]);
    }
    
    exibirLista(entradas, 10);
    
    int resultados[10];

    for(int i = 0; i < 10; i++){
        resultados[i] = entradas[i];
    }

    for(int b = 10; b > 1; b--){
        int a = 0;
        while (a < b-1) {
            resultados[a] = entradas[a] + entradas[a + 1];
            a++;
        }
        exibirLista(resultados, b-1);

        int i = 0;
        while (i < b-1) {
            entradas[i] = resultados[i];
            i++;
        }
    }
    
    return 0;
}