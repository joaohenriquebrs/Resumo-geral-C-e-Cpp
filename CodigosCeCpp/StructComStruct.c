#include <stdio.h>



//Função typedef serve para não precisar ficar usando struct data, simplesmente escreve data
typedef struct Data{
    int dia;
    int mes;
    int ano;


}Data;


struct Aluno{
    int id;
    Data nascimento;

};


int main(){

    //Criando um aluno
    struct Aluno aluno1;

    //Modificando valores
    aluno1.id = 15;
    aluno1.nascimento.ano = 2002;
    aluno1.nascimento.mes = 9;
    aluno1.nascimento.dia = 25;

    printf("Nascido em: %d/%d/%d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);




    return 0;
}
