#include <stdio.h>
#include <stdlib.h>


//int* significa que a função vai retornar um ponteiro
int* alocacaoVetor(int tamanho){

    //É criado um ponteiro auxiliar
    int *aux;

    //Alocação dinâmica da memória
    //a função malloc é a função que vai alocar na memória
    //Cada tipo de variavel possui determinado espaço que ele gasta na memoria
    //os inteiros ocupam 2 byte da memoria, entao v[0], ocupa 2 bytes na memoria, assim como v[1]...
    //a função sizeof vai pegar o tamanho na memoria de um int, no caso 2
    //no caso precisa alocar 8 bytes na memoria para os 4 vetores
    aux = (int*) malloc(tamanho * sizeof(int));
    //para voltar em forma de inteiro faz o cast (int*)

    //Retorna o ponteiro para a primeira posicao de memoria do vetor alocado
    return aux;
}


int main(){

    //Definindo variaveis
    int *vetor, tamanho, cont;

    //Lendo o tamanho do vetor pelo usuario
    printf("Digite um tamanho para o vetor:");
    scanf("%d", &tamanho);

    //Ponteiro recebe o endereço da memoria que foi alocado para o vetor
    vetor = alocaVetor(tamanho);

    vetor[0] = 0;
    vetor[1] = 10;
    vetor[2] = 20;
    vetor[3] = 30;

    //Coloca valores no vetor
    for (cont = 0; cont < tamanho; cont++){
        vetor[cont] = 90;
    }

    //Imprime vetor
    for (cont = 0; cont < tamanho; cont++){
        printf("%d\n", vetor[cont]);
    }


    //Limpar memoria no final do programa
    free( vetor );

    //Retorno da função
    return 0;
}





