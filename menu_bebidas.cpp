#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdbool.h>

using namespace std;
#include "vinhos.h"
#include "cervejas.h"

int main(){
    int escolha = 0;
    while(escolha!=3){
        cout<<"\n-----------------------------\n\nqual bebida o cliente estaria interessado em experiemntar:\n"
        <<"1 - cervejas artesanais\n"<<"2 - vinhos da casa\n"<<"3 - sair do menu\n"<<"Selecione uma das opcoes: \n";
        cin>>escolha;
        switch(escolha){
            case 1:
                cout<<"opcao escolhida foi a de cervejas artesanais\n";
                cerveja();
                break;
            case 2:
                cout<<"opcao escolhida foi a de vinhos da casa\n";
                vinho();
                break;
            case 3:
                cout<<"saindo . . .";
                break;
            default:
                cout<<"opcao invalida";
        }
    }
    return 0;
}