#include <stdio.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

//Struct para frutas
struct fruta{
    string cor;
    string nome;
};



int main(){

    //Criando ponteiro para o struct criado, que vai apontar para a primeirsa posição na memoria, do meu struct que sera alocado
    fruta *primeiraFruta = new fruta;

    //Modificando valores em cpp, usando essas setas pois ta trabalhando com ponteiro
    primeiraFruta->cor = "Amarela";
    primeiraFruta->nome = "Banana";

    //Exibindo valores
    cout<< "Fruta: " << primeiraFruta->nome << "\nCor: " << primeiraFruta->cor;


    //Criando uma lista de frutas
    fruta *ponteiroListaDeFrutas = new fruta[2];

    //Modificando valores
    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[0].nome = "Maca";
    ponteiroListaDeFrutas[1].cor = "Laranja";
    ponteiroListaDeFrutas[1].nome = "Laranja";

    //Percorrendo e exibindo
    int cont;
    for (cont = 0; cont < 2; cont++){
        cout<< "\nFruta: " << ponteiroListaDeFrutas[cont].nome << "\nCor: " << ponteiroListaDeFrutas[cont].cor;

    }


    return 0;
}
