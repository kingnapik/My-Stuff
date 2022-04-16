#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <cmath>
using namespace std;

void limpaTela(){
    system("CLS");
}
int main(){
    int valor;
    cout<<"(1) sera consumido com refeicao\n";
    cout<<"(2) sera degustado\n";
    cin>>valor;
    if(valor == 1){
        int refeicao;
        cout<<"qual a refeicao a ser consumida: \n"<<"1 - carne\n"<<"2 - Massas\n"<<"3 - Frutos do mar\n";
        cin>>refeicao;
        switch (refeicao){
            case 1:
                limpaTela();
                cout<<"\nCarne escolhida\n1 - boi\n2 - frango\n3 - porco";
                int carne;
                cin>>carne;
                if (carne == 1){
                    cout<<"\nCarne escolhida foi a de boi, temos as seguintes opcoes para harmonisacao: \nPinot Noir \nMerlot \nCabernet Suvignon \nZinfandei";
                    cout<<"\nQual o nivel de acides esperado? \n1 - baixa\n2 - media\n3 - alta";
                    int acides;
                    cin>>acides;
                    switch(acides){
                        case 1:
                            cout<<"\nVinhos com baixa acides temos Zinfandei, um vinho da familia do rose, seco com intensidade medio-alto e teor de alcool alto";
                            break;
                        case 2:
                            cout<<"\nQaul a preferencia quanto ao sabor do vinho? \n1 - muito seco\n2 - seco";
                            int secura;
                            cin>>secura;
                            if (secura == 1){
                                cout<<"\nRecomendamos um Merlot, com seu medio-alto intensidade e media acides, medio teor alcoolico é um dos vinho mais versáteis para harmonisar";
                            }else{
                                cout<<"\nRecomendamos um Cabernet Sauvignon, com seu intensidade altissimo e media acides, apresenta certo amargor o que o faz perfeito para pratos com temperos mais marcntes";
                            }
                            break;
                        case 3:
                            cout<<"\nPara vinhos com alto teor acidico temo o Pinot Noir, o vinho tinto mais amado no mundo, com seu aroma frutado e sabor acentuado, possui um media-alta teor alcoolico";
                            break;
                    }
                }else if (carne == 2){
                    cout<<"\nCarne escolhida foi a de frango, temos as seguintes opcoes para harmonisacao: \nSauvignon Blanc \nChardonnay \nZinfandel";
                    cout<<"\nHa preferencia por vinho rose ao inves de branco? 's' ou 'n'";
                    string ans;
                    cin >> ans;
                    if(ans == "s"){
                        cout << "\nVinhos com baixa acides temos Zinfandei, um vinho da familia do rose, seco com intensidade medio-alto e teor de alcool alto";
                    }else if(ans == "n"){
                        cout << "\nO nivel de acides esperado eh: \n1 - alto\n2 - medio\n3 - baixo";
                        int acides;
                        cin >> acides;
                        if( acides == 1){
                            cout<<"\nVinhos com alta acides temos Sauvignon Blanc, seco com medio intensidade, inconfundivel com seu gosto 'verde' e herbal";
                        }else if(acides == 2){
                            cout<<"\nVinhos com media acide temos o Chardonnay, seco e com medio intensidade, perfeito para acentuar sabores";
                        }else{
                            cout<<"\nVinhos com baixa acides temos Zinfandei, um vinho da familia do rose, seco com intensidade medio-alto e teor de alcool alto";
                        }
                    }
                }else{
                    cout<<"\nCarne escolhida foi a de porco, temos as seguintes opcoes para harmonisacao: \nChardonnay \nCabernet Suvignon \nZinfandei";
                    cout<<"\nHa preferencia por vinho branco ao inves de vermelho? 's' ou 'n'";
                    string ans;
                    cin >> ans;
                    if(ans == "s"){
                        cout<<"\nVinho com media acides o Chardonnay, seco e com medio intensidade, perfeito para acentuar os sabores";
                    }else if(ans == "n"){
                        cout<<"\nPreferencia de acides: \n1 - media\n2 - baixa";
                        int acides;
                        cin >> acides;
                        if(acides == 1){
                            cout<<"Qual a rpeferencia quanto ao amargor do vinho? \n1 - medio amargor\n2 - pouco amargor";
                            int amargor;
                            cin >> amargor;
                            if(amargor==1){
                                cout<<"\nRecomendamos um Cabernet Sauvignon, com sua intensidade altissima e media acides, apresenta medio amargor o que o faz perfeito para pratos com temperos mais marcntes";
                            }else{
                                cout<<"\nVinho com media acides o Chardonnay, seco e com medio intensidade, perfeito para acentuar os sabores";
                            }
                        }else{
                            cout<<"\nVinhos com baixa acides temos Zinfandei, um vinho da familia do rose, seco com intensidade medio-alto e teor de alcool alto";
                        }
                    }
                }
                break;
            case 2:
                limpaTela();
                cout<<"\nMolhos para a harmonisacao: \n1 - Branco\n2 - Vermelho\n3 - Funggi";
                int molho;
                cin >> molho;
                if(molho == 1){
                    cout<<"\nVinho com media acides o Chardonnay, seco e com medio intensidade, perfeito para acentuar os sabores de manteiga";
                }else if(molho == 2){
                    cout<<"\nPinot Noir ou Cabernet Sauvignon \nPrefere vinhos mais Amargos? 's' ou 'n': ";
                    string ans;
                    cin >> ans;
                    if(ans == "s"){
                        cout<<"\nRecomendamos um Cabernet Sauvignon, com sua intensidade altissima e media acides, apresenta medio amargor o que o faz perfeito para pratos com temperos mais marcantes";
                    }else if(ans == "n"){
                        cout<<"\nPinot Noir, vinho tinto mais amado no mundo, com seu aroma frutado e sabor acentuado, unese com o sagor dos cogumelos divinamente";
                    }
                }else{
                    cout<<"\nA perfeita harmonisacao para o molho Funggi é o vinho Pinot Noir, vinho tinto mais amado no mundo, com seu aroma frutado e sabor acentuado, unese com o sagor dos cogumelos divinamente";
                }
                break;
            case 3:
                limpaTela();
                cout<<"\n1 - frutos do mar \n2 - peixe\n";
                int result;
                cin>>result;
                if(result == 1){
                    cout<<"\n1 - camarao \n2 - lagosta \n3 - ostras";
                    int fruto;
                    cin>>fruto;
                    if(fruto==1){
                        cout<<"\nVinho com media acides o Chardonnay, seco e com medio intensidade, perfeito para acentuar os temperos e sabor do camarao";
                    }else if(fruto==2){
                        cout<<"\nVinho com media acides o Chardonnay, seco e com medio intensidade, perfeita harmonisacao com Lagosta, resalta a textura cremosa";
                    }else{
                        cout<<"\nVinho com alta acides o Sauvignon Blanc é seco com medio intensidade, inconfundivel com seu gosto 'verde' e herbal, ideal apra ostras";
                    }
                }else{
                    cout<<"\n1 - peixe c/ alcaparas \n2 - salmao grelhado \n3 - moqueca capixaba";
                    int peixe;
                    cin>>peixe;
                    if(peixe==1){
                        cout<<"\nQual o nivel de acides esperado? \n1 - media acides\n2 - alta acides";
                        int resp;
                        cin>>resp;
                        if(resp == 1){
                            cout<<"\nVinho com media acides o Chardonnay, seco e com medio intensidade, perfeita harmonisacao com Lagosta, resalta a textura cremosa";
                        }else{
                            cout<<"\nVinho com alta acides o Sauvignon Blanc é seco com medio intensidade, inconfundivel com seu gosto 'verde' e herbal, ideal apra ostras";
                        }
                    }else if(peixe==2){
                        cout<<"O vinho Syrah é uma harmonisacao perfeita com o salmao, ele pois corpo presente, media acides e amargor tornando-o um vinho seco";
                    }else{
                        cout<<"O vinho Syrah é realsado pelos temperos exoticos e pela pimenta, com corpo presente, media acides e amargor tornando-o um vinho seco";
                    }
                }
                break;
        }
    }else{
        cout<<"\nVinhos para degustar:\nPreferencia quanto a cor de vinho\n";
        cout<<"\nrose\ntinto\nbranco\n-> ";
        string resp;
        cin>>resp;
        if(resp == "rose"){
            cout<<"\nZinfandel \nMerlot \nPinot Noir";

            cout<<"\npreferencia de acides: 0 - 10: ";
            int acides;
            cin>>acides;

            cout<<"\nQuao encorpado? 0 - 10: ";
            int corpo;
            cin>>corpo;

            cout<<"\nteor alcoolico: 0 - 10: ";
            int alcool;
            cin>>alcool;
            limpaTela();
            cout<<"\nZinfandel("<< round(((10-acides)+(corpo)+(alcool))*3.33) <<"%)";
            cout<<"\nMerlot("<< round(((acides)+(corpo)+(10-alcool))*3.3) <<"%)";
            cout<<"\nPinot Noir("<< round(((acides)+(10-corpo)+(10-alcool))*3.3) <<"%)";

        }else if(resp == "tinto"){
            cout<<"Syrah e Cabernet Sauvignon\nAmbos sao vinhos secos e encorpados, de cor escura, media acides e amargor";
            cout<<"preferencia de gostos e aromas.";
            
            cout<<"\n0 a 5 blueberry: ";
            int blueberry;
            cin>>blueberry;
            
            cout<<"\n0 a 5 tabacco: ";
            int tabacco;
            cin>>tabacco;

            cout<<"\n0 a 5 cereja preta: ";
            int cereja;
            cin>>cereja;

            cout<<"\n0 a 5 cedro: ";
            int cedro;
            cin>>cedro;
            limpaTela();
            cout<<"\nSyrah("<< (blueberry*10)+(tabacco*10) <<"%)";
            cout<<"\nCabernet Sauvignon("<< (cereja*10)+(cedro*10) <<"%)";
        }else if(resp  == "branco"){
            cout<<"\nSauvignon Blanc e Chardonnay\nSauvignon Blanc e um vinho mais acido que o Chardonnay, enquanto o Chardonnay e mais encorpado que o Sauvignon Blanc";
            cout<<"\nacides desejada: \n1 - alta\n2 - baixa\n";
            int acides;
            cin>>acides;
            
            cout<<"\nEles possuem sabores e aromas diferentes";

            cout<<"\n0 a 5 toranja: ";
            int toranja;
            cin>>toranja;
            
            cout<<"\n0 a 5 maracuja: ";
            int maracuja;
            cin>>maracuja;

            cout<<"\n0 a 5 abacaxi: ";
            int abacaxi;
            cin>>abacaxi;

            cout<<"\n0 a 5 baunilia: ";
            int baunilia;
            cin>>baunilia;
            limpaTela();
            if(acides==1){
                cout<<"\nSauvignon Blanc("<< (toranja*10)+(maracuja*10) -20 <<"%)"; //20 pois sao 5 parametros
                cout<<"\nChardonnay("<< (abacaxi*10)+(baunilia*10) <<"%)";
            }else if(acides == 2){
                cout<<"\nSauvignon Blanc("<< (toranja*10)+(maracuja*10) <<"%)";
                cout<<"\nChardonnay("<< (abacaxi*10)+(baunilia*10) -20 <<"%)"; //20 pois sao 5 parametros
            }

        }
    }
    return 0;
}
