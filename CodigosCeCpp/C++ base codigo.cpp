#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;


int main(){

    int matriz[2][2], i, j;

    cout<< "Digite um valor para [0][0]";
    cin>> matriz[0][0];
    cout<< "Digite um valor para [0][0]";
    cin>> matriz[0][1];
    cout<< "Digite um valor para [0][0]";
    cin>> matriz[1][0];
    cout<< "Digite um valor para [0][0]";
    cin>> matriz[1][1];

    for(i = 0; i < 2; i++){
        cout<< "Digite um valor para [i][j]";
        for(j = 0; j < 2; j++){
            cin>> matriz[i][j];
        }
    }

    cout<< matriz[0][0] << matriz[0][1];
    cout<< matriz[1][0] <<matriz[1][1];




    system("pause");
    return 0;

}
