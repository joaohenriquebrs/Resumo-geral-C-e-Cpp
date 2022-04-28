#include <stdio.h>
#include <stdlib.h>
#include <new>


//biblioteca new serve para basicamente alocar a memoria, ao inves de usar malloc, simplesmente usa new

int main(){

    int tamanho, cont;

    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    int *vetor = new int[tamanho];

    for(cont = 0; cont < tamanho; cont++){
        vetor[cont] = cont;
        printf("\n%d", vetor[cont]);
    }


    return 0;
}
