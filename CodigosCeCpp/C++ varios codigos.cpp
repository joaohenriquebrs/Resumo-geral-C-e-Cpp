#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>

//Função principal do programa, nao pode trabalhar com void
int main(){

//Para poder acessar as funções da biblioteca string.... stf::
    std::string palavra;

    printf("Digite uma palavra:");
//Para receber uma entrada
    std::cin>> palavra;
//Para liberar uma saida
    std::cout<< palavra;


    //Pausa o programa apos executar
    system("pause");
    return 0;

}

//Para não precisar ficar utilizando std::
using namespace std;

int main(){

//Para poder acessar as funções da biblioteca string.... stf::
    string palavra;

    cout<< "Digite uma palavra";
//Para receber uma entrada
    cin>> palavra;
//Para sair uma entrada
    cout<< palavra;


    //Pausa o programa apos executar
    system("pause");
    return 0;

}

//Matrizes
vetor [0][1][2]
matriz = [0,0][0,1][0,2]
         [0,3][0,4]
//Criando uma matriz 2 por 2
int matriz [2][2], i, j;

//Passando valores
matriz[0][0] = 1;
matriz[0][1] = 2;
matriz[1][0] = 3;
matriz[1][1] = 4;

//Imprimindo valores na tela
for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
        //Imprimindo indices
        //cout<< "\ni = " << i << " , j = " << j;
        //Imprimindo valores de cada indice
        cout<< "\n" matriz[i][j] << " ";
    }
}

//Definindo matrizes
int matriz[3][3] = {1,2,3,4,5,6,7,8,9};
//Matriz[0][0] = 1, Matriz[0][1] = 2, Matriz[0][3] = 3, Matriz[1][0] = 4 e assim por diante



//Para nao ficar usando std::
using namespace std;
a = 10;
cout << "Valor: " << a;


//Imprimindo com C++, tem q adc as bibliotecas iostream e string
cout<< "oi";
//Lendo valores
cin>>


/*Ponteiros
Serve para ter um acesso mais direto na memoria
Ponteiros são variáveis que armazenam o endereço de memória de outras variáveis

VARIAVEIS ARMAZENAM VALORES
PONTEIROS ARMAZENAM POSIÇÕES DA MEMÓRIA

*ponteiro
* pode ser lido como "conteúdo apontado por"

*/

int *ponteiro;
//Ponteiro recebendo a posição na memoria da variavel b
ponteiro = &b;
//Agora pode modificar a posição da variavel b através do ponteiro
*ponteiro = 40;
// Como se lê, pegue o conteudo que esta apontado para ponteiro e mude para 40
//Agora b é igual a 40

//Ctrl + ALT + Del = Gerenciador de tarefas

/*Funções
Deve-se usar funções, toda vez que precisarmos executar determinado comando
varias vezes

void desenhaBorda(){
    cout<< "|-----------|";
}
Agora toda vez que eu chamar a função
desenhaBorda();
O código voltará "|-----------|"
Coloca essa função void antes da função principal int
*/

/*------Função inteira
Retorna número inteiro
int retornaDez(){
    return 10;
}

a = retornaDez();

Logo a = 10
!!!!!!!!!!!!!!!!!!!!!!!
Coloca so as funções depois da função principal int main, para ficar organizado
mas colocando depois, não se lê a função, então antes da função principal
coloca-se apenas
nomedaFunção();
só para o sistema procurar no codigo a função
!!!!!!!!!!!!!!!!!!!!!!!
*/

/*------Função float
Retorna número quebrado
float retornaQuebrado(){
    Pode fazer qualquer coisa nesse espaço
    return 5.5;
}
*/

/*------Função char
Retorna caracter
char retornaLetra(){
    return 'x';
}

char retornaLetra(){
    return 120;
}
Assim retorna a letra que está na posição 120, no caso é o x
*/

/*Função Booleana
bool retornaBooleano(){
    return true;
}
Toda vez q eu chamar a função retornaBooleano, será True

variavelBooleana = retornaBooleano
//Se for verdadeira executa o primeiro bloco
if(variavelBooleana){
//Senão executa o segundo bloco
}else

*/


//COMO LIMPAR A TELA, comando do stdlib
system("CLS");
//Para não preciar ficar usando isso, cria-se uma função
void limparTela(){
    system("CLS");
}
//Ai so chamar no codigo
limparTela();

//Função com um parametro
int a = 10;
void mostraSucessor(int numero){
    printf("O sucessor de %d é %d", numero, numero + 1);
}
//a variavel "numero" só é valida dentro do escopo dessa função

//Então se eu chamar a função mostraSucessor, será mostrado 11, que
//é o sucessor de a, como:
mostraSucessor(a);
//"a" muda o nome para "numero"

int retornaAntecessor(numero){
    return = numero - 1;
}

printf("O antecessor de %d é %d", a, retornaAntecessor(a));

//Funções com ponteiro
// * significa, "conteudo apontado por"
void aumentaDez(int *numero){
    *numero = *numero + 10;
}
aumentaDez(&a);
//"a" ira retorntar 20 por referencia, pelo endereço de memória

//Funções de Vetor como parâmetro

void imprimeVetor(int *vetor, int tamanho){

    //Variavel contadora
    int i;

    //Percorrendo o vetor
    for(i = 0, i < tamanho, i++){
        printf("%d", vetor[i]);
    }

}

int main(){

    //Definindo vetor
    int v[3] = {1, 2, 3};

    //Mostrando vetor
    imprimeVetor(v, 3);
    //tamanho = 3

    //Retorno da função
    return 0;
}


//Como incluir arquivos no arquivo principal:
//cria um arquivo a parte, coloca os codigos nele e depois coloca #include "nomedoarquivo" no inicio do codigo


//alocação de memoria para matriz faz:
int **matriz
//"**" se lê: ponteiro para ponteiro

//biblioteca new, #include <new>, serve para basicamente alocar a memoria, ao inves de usar malloc, simplesmente usa new


//biblioteca fstream, #include <fstream>, serve para poder abrir e escrever em arquivos

// !!!! Escrevendo em Arquivos: !!!! ... ao inves de escrever na tela, esta escrevendo em arquivos, basicamente
ofstream arquivosDeSaida;
//Abre o arqivo ou cria caso não exista, app é o formato de abrir
arquivosDeSaida.open("Texto.txt", std::ios_base::app);
//Escrevendo algo no arquivos depois de ja ter aberto
arquivosDeSaida << "Mamaezinha";
//Fecha o arquivo
arquivosDeSaida.close();


// !!!! Ler conteudo do arquivo em C !!!! ...tudo isso dentro do int main
//Cursor que irá percorrer cada letra
int c;
//Arquivo a ser lido
FILE *file;
//Abre o arquivo no diretorio escolhido
file = fopen("Texto.txt", "r");
//Se o arquivo for encontrado
if(file){

    //Enquanto encontra letras(ate o fim do arquivo)
    //EOF é end of file, ou seja enquanto for antes do fim do arquivo vai ficar rodando
    while((c = getc(file)) != EOF){

        printf("%c", c);

    }

    //Fecha o arquivo
    fclose(file);

}

// !!!! Ler conteudo do arquivo em Cpp !!!! ...tudo isso dentro do int main

//Dizer qual arquivo será lido
ifstream input("Texto.txt");

//String que receberá o texto
string textoLido;

//Passa o texto do arquivo para string, for para cada linha do arquivo
for(string line; getline(input, line;)){
    textoLido += line;
}
1
//Mostrar conteudo
cout<< textoLido;

// !--------------------!


//Deixando o arquivo vazio
//Cria o objeto do arquivo
ofstream meuArquivo;

//Abre o arquivo
meuArquivo.open("Texto.txt");

//Simplesmente manda um vazio para dentro para esvaziar
meuArquivo << "";

meuArquivo.close();


/*Estrutura de dados:

Serve basicamente com um grande objetivo: Recuperar informações, pegar dados, estruturar os dados
para termos organização e saber mais ou menos onde estão e saber o melhor metodo para se utilizar em cada tipo de lista, sequencia de informações

Ex:
Dados de pilha
Dados de fila
Tipos de pesquisa:
Pesquisa sequencial, passa por membro a membro
   ||    binaria, recuperar informações em listas que ja estao ordenadas, sempre dividindo pela metade ate achar o valor procurado

Algoritmos de ordenação de lista:
Bubble Sort
Insertion Sort
Selection Sort
Quick Sort
Shell Sort
Merge Sort

//Sempre passar como referência, exemplo &topo, qnd quero modificar o valor da main dentro da função, e recebe na função com um *topo
//Tbm explicado p/, como tem que ir para a função e voltar para a main, passa como referência


FILA: FIFO, First In First Out
PILHA: LIFO, Last In First Out


*/


/*   Tipos de Lista:

Lista Simples - Lista armazenada em sequência na memória do computador, se quiser aumentar a lista, tem que criar outro vetor com um numero maior de posições na memoria
e adicionar o vetor antigo no vetor novo

Lista Encadeada - Lista armazenada em diferentes partes da memoria, cada membro possui um ponteiro que aponta para o proximo membro da memoria

*& significa que o ponteiro tera função global no codigo, n apenas no escopo da funçao que esta inserido

-> significa para navegar dentro da estrutura
exemplo: novoprimeirovalor->valorNumerico = 13;


PARA CRIAR UM MENU:

cria os numeros pros cases e coloca pra escolher:

switch(Funcaodesejada){
    case 1:

        break;

    case 2:

        break;
}


*/
