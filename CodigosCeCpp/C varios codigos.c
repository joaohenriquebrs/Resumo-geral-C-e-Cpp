#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

// stdio para declarações de funções úteis para entrada e saída de dados / locale para poder usar acentos
//stdlib para alocação de memória, controle de processos, conversões e outras / stdbool para usar booleano
//time.h para poder gerar números aleatórios
//Função Ctrl + D, muito interessante
//Função Ctrl + R, para refactor
//Função Ctrl + F, para procurar algum nome



//Função principal do programa
void main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");
    printf("Olá mundo novo");


    //Como mexer com inteiros
    //%d para trabalhar com inteiros
    int a = 50, d = 30, h = -7;
    printf("\n%d", a);
    printf("\n%d", d);


    //Soma
    printf("\n%d", a + d);

    //Subtração
    printf("\n%d", a - d);

    //Multipliação
    printf("\n%d", a * d);

    //Divisão
    printf("\n%d", a / d);

    //Resto da divisão
    printf("\n%d", a % d);

    //Para uma variavel do tipo int, Valor absoluto(smp n° positivo)
    printf("%d", abs(h));

    //Ler o valor para a variável a
    //& = acessa a memoria, endereço na memória do computador
    //scanf("%d", &a);
    //printf("O valor de a mudou para %d", a);



    //%f para trabalhar com numeros quebrados
    float b = 5.5;
    printf("\n%f", b);

    //%i para trabalhar com booleano


    //%c para trabalhar com letras, char
    char c = 't';
    printf("\n%c", c);
    //Como saber o código da letra
    printf("\nO código da letra é: %c", c);

    //fflush(stdin)
    //Limpa a entrada de buffer principal, buffer é um espaço de memória temporario

    //Para uma variavel do tipo float a função que retorna o absoluto é a fabs()
    //fabs() pertence a biblioteca math.h

    if (a > 50) {
        printf("\n%d é maior que 50", a);
    }
    else if (a < 50) {
        printf("\n%d é menor que 50", a);
    }
    else{
        printf("\n%d é igual a 50", a);
    }

    //Númerp par

    if (a % 2 == 1){
        printf("\n%d é ímpar", a);
    }else{
        printf("\n%d é par", a);
    }

    //Diferente !=
    //Comparação ==
    //Subtração - e -=
    //Soma + e +=
    //Atribuição =

    //Definindo variáveis booleanas
    bool j = true, l = false;

    //Se J for verdadeiro
    if (j){
        printf("\nJ é verdadeiro");
    }
    //Se L for falso, comparando o L
    if(l){
        printf("\nL é verdadeiro");
    }else{
        printf("\nL é falso");
    }

    //Se não L, o que ta escrito abaixo
    if(!l){
        printf("\nL é falso");
    }
    //Para pegar x casas depois da vírgula %.xf, para pegar 2 casas após a virgula %.2f

    //Conectivo lógico AND, se usa &&, se uma comparação for falsa, não entra no bloco
    if (a > 40 && a < 60){
        printf("A variável 'a' está entre 5 e 15");
    }

    //Conectivo lógico OR, se usa ||, se uma das duas comparações for verdadeira, entra no bloco
    if (a < 55 || a > 70){
        printf("A variavel 'a' é maior que 70 ou menor que 50");
    }

    //Misturando conectivos
    if ( (a > 40 && a < 60) || a == 30 ){
        printf("A variável 'a' está entre 5 e 15 ou é igual a 30");
    }

    //Switch case, serve para deixar o código mais limpo e não usar tanto if else if e else
    switch(a){
        case 1:
            printf("\nOpção escolhida 1");
            break;
        case 2:
            printf(\n"Opção escolhida 2");
            break;
        case 3:
            printf("\nOpção escolida 3");
            break;
        default:
            printf("\nOpção inválida");
            break;
    }
    /*
    Para fazer vários comentarios sem precisar ficar usando //

    */


    //Responsável por alimentar o rand (random) de forma diferente
    srand((unsigned)time(NULL));

    int aleatorio = rand();
    printf("%d", aleatorio);

    //Número aleatorio entre 0 e 2
    int aleatorio = rand() % 3;


    //Laços de repetição


    while(a <= 10){
        printf("\n%d", a);
        a += 1
    }
    //a++ é a msm coisa que a = a + 1 e a-- é a mesma coisa que a = a - 1

    //do while primeiro faz depois compara a condição, so o while primeiro compara depois faz
    do{
        printf("\n%d", a);
        a += 1
    }while(a <= 10);

    //FOR(start; stop; step){}
    for(cont = 1; cont <= 10; cont++){
        printf("%d", cont);
    }

    //Para definir uma constante, usa #define VARIAVEL x
    //Não pode ser modificada no código

    //Vetor é como se fosse uma variável que contém várias variaveis dentro
    int vetor[3];
    //variavel 0, 1 e 2
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;


}


