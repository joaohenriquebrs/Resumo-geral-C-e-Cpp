#include <stdio.h>
#include <stdlib.h>

struct palavra{
    int ordem;
    char letra;
    char texto[255];
};


int main(){

    //Criando uma palavra
    struct palavra primeiraPalavra;

    //Modificando os campos
    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'c';
    //Como colocar palavra, tem que usar uma função de uma biblioteca que é o string copy,
    strcpy(primeiraPalavra.texto, "palavrinha");

    //Mostrando valores do struct
    printf("Ordem: %d", primeiraPalavra.ordem);
    printf("\nPrimeira letra: %c", primeiraPalavra.letra);
    //usa-se %s para imprimir palavra
    printf("\nPalavra: %s", primeiraPalavra.texto);

    //Fazendo uma lista de structs
    struct palavra listaDePalavras[3];

    //Modificando os campos
    listaDePalavras[0].ordem = 0;
    listaDePalavras[1].ordem = 1;
    listaDePalavras[2].ordem = 2;
    listaDePalavras[0].letra = 'd';
    listaDePalavras[1].letra = 'l';
    listaDePalavras[2].letra = 'b';
    strcpy(listaDePalavras[0].texto, "Dahora");
    strcpy(listaDePalavras[1].texto, "Legal");
    strcpy(listaDePalavras[2].texto, "Bacana");

    //Percorrendo o vetor
    int cont;
    for(cont = 0; cont < 3; cont++){
        printf("\nOrdem: %d", listaDePalavras[cont].ordem);
        printf("\nPrimeira letra: %c", listaDePalavras[cont].letra);
        printf("\nPalavra: %s", listaDePalavras[cont].texto);


    }



    return 0;
}
