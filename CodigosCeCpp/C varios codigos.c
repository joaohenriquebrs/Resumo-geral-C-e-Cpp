#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

// stdio para declara��es de fun��es �teis para entrada e sa�da de dados / locale para poder usar acentos
//stdlib para aloca��o de mem�ria, controle de processos, convers�es e outras / stdbool para usar booleano
//time.h para poder gerar n�meros aleat�rios
//Fun��o Ctrl + D, muito interessante
//Fun��o Ctrl + R, para refactor
//Fun��o Ctrl + F, para procurar algum nome



//Fun��o principal do programa
void main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");
    printf("Ol� mundo novo");


    //Como mexer com inteiros
    //%d para trabalhar com inteiros
    int a = 50, d = 30, h = -7;
    printf("\n%d", a);
    printf("\n%d", d);


    //Soma
    printf("\n%d", a + d);

    //Subtra��o
    printf("\n%d", a - d);

    //Multiplia��o
    printf("\n%d", a * d);

    //Divis�o
    printf("\n%d", a / d);

    //Resto da divis�o
    printf("\n%d", a % d);

    //Para uma variavel do tipo int, Valor absoluto(smp n� positivo)
    printf("%d", abs(h));

    //Ler o valor para a vari�vel a
    //& = acessa a memoria, endere�o na mem�ria do computador
    //scanf("%d", &a);
    //printf("O valor de a mudou para %d", a);



    //%f para trabalhar com numeros quebrados
    float b = 5.5;
    printf("\n%f", b);

    //%i para trabalhar com booleano


    //%c para trabalhar com letras, char
    char c = 't';
    printf("\n%c", c);
    //Como saber o c�digo da letra
    printf("\nO c�digo da letra �: %c", c);

    //fflush(stdin)
    //Limpa a entrada de buffer principal, buffer � um espa�o de mem�ria temporario

    //Para uma variavel do tipo float a fun��o que retorna o absoluto � a fabs()
    //fabs() pertence a biblioteca math.h

    if (a > 50) {
        printf("\n%d � maior que 50", a);
    }
    else if (a < 50) {
        printf("\n%d � menor que 50", a);
    }
    else{
        printf("\n%d � igual a 50", a);
    }

    //N�merp par

    if (a % 2 == 1){
        printf("\n%d � �mpar", a);
    }else{
        printf("\n%d � par", a);
    }

    //Diferente !=
    //Compara��o ==
    //Subtra��o - e -=
    //Soma + e +=
    //Atribui��o =

    //Definindo vari�veis booleanas
    bool j = true, l = false;

    //Se J for verdadeiro
    if (j){
        printf("\nJ � verdadeiro");
    }
    //Se L for falso, comparando o L
    if(l){
        printf("\nL � verdadeiro");
    }else{
        printf("\nL � falso");
    }

    //Se n�o L, o que ta escrito abaixo
    if(!l){
        printf("\nL � falso");
    }
    //Para pegar x casas depois da v�rgula %.xf, para pegar 2 casas ap�s a virgula %.2f

    //Conectivo l�gico AND, se usa &&, se uma compara��o for falsa, n�o entra no bloco
    if (a > 40 && a < 60){
        printf("A vari�vel 'a' est� entre 5 e 15");
    }

    //Conectivo l�gico OR, se usa ||, se uma das duas compara��es for verdadeira, entra no bloco
    if (a < 55 || a > 70){
        printf("A variavel 'a' � maior que 70 ou menor que 50");
    }

    //Misturando conectivos
    if ( (a > 40 && a < 60) || a == 30 ){
        printf("A vari�vel 'a' est� entre 5 e 15 ou � igual a 30");
    }

    //Switch case, serve para deixar o c�digo mais limpo e n�o usar tanto if else if e else
    switch(a){
        case 1:
            printf("\nOp��o escolhida 1");
            break;
        case 2:
            printf(\n"Op��o escolhida 2");
            break;
        case 3:
            printf("\nOp��o escolida 3");
            break;
        default:
            printf("\nOp��o inv�lida");
            break;
    }
    /*
    Para fazer v�rios comentarios sem precisar ficar usando //

    */


    //Respons�vel por alimentar o rand (random) de forma diferente
    srand((unsigned)time(NULL));

    int aleatorio = rand();
    printf("%d", aleatorio);

    //N�mero aleatorio entre 0 e 2
    int aleatorio = rand() % 3;


    //La�os de repeti��o


    while(a <= 10){
        printf("\n%d", a);
        a += 1
    }
    //a++ � a msm coisa que a = a + 1 e a-- � a mesma coisa que a = a - 1

    //do while primeiro faz depois compara a condi��o, so o while primeiro compara depois faz
    do{
        printf("\n%d", a);
        a += 1
    }while(a <= 10);

    //FOR(start; stop; step){}
    for(cont = 1; cont <= 10; cont++){
        printf("%d", cont);
    }

    //Para definir uma constante, usa #define VARIAVEL x
    //N�o pode ser modificada no c�digo

    //Vetor � como se fosse uma vari�vel que cont�m v�rias variaveis dentro
    int vetor[3];
    //variavel 0, 1 e 2
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;


}


