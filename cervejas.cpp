#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

void limpaTela(){
    system("CLS");
}

int main(){
    int valor;
    cout<<"(1) sera consumida com refeicao\n";
    cout<<"(2) sera degustada\n";
    cin>>valor;
    if(valor == 1){
        int refeicao;
        cout<<"qual a refeicao a ser consumida: \n"<<"1 - carne\n"<<"2 - Massas\n"<<"3 - Frutos do mar\n";
        cin>>refeicao;
        switch (refeicao){
            case 1:
                limpaTela();
                int carne;
                cout<<"qual carne seria a escolhida: \n"<<"1 - boi\n"<<"2 - frango\n"<<"3 - porco\n";
                cin>>carne;
                switch (carne){

                    case 1:
                        cout<<"\ncarne de boi";
                        int aux, aux2;
                        cout<<"\nCerveja Amarga? \n1 - sim \n2 - nao";
                        cin>>aux;
                        cout<<"\nAlcool facilmente perceptivel?: \n1 - sim \n2 - nao";
                        cin>>aux2;
                        limpaTela();
                        if(aux == 1 && aux2 == 1){
                            cout<<"\nHarmonisacao: \nHebling Irish Red Ale (0%) \nPorter (100%) \nDry Stout (50%)";
                        }else if(aux == 2 && aux2 == 1){
                            cout<<"\nHarmonisacao: \nHebling Irish Red Ale (50%) \nPorter (50%) \nDry Stout (50%)";
                        }else if(aux == 1 && aux2 == 2){
                            cout<<"\nHarmonisacao: \nHebling Irish Red Ale (50%) \nPorter (50%) \nDry Stout (100%)";
                        }else if(aux == 2 && aux2 == 2){
                            cout<<"\nHarmonisacao: \nHebling Irish Red Ale (100%) \nPorter (0%) \nDry Stout (50%)";
                        }
                        break;

                    case 2:
                        cout<<"carne de frango";
                        int aux3;
                        cout<<"\nPresenca de alcool \n1 - media\n2 - imperseptivel";
                        cin>>aux3;
                        if(aux3 == 1){
                            cout<<"\nHarmonisacao: \nBock(100%) \nKolsh(50%)";
                        }else{
                            cout<<"\nHarmonisacao: \nBock(50%) \nKolsh(100%)";
                        }
                        break;

                    case 3:
                        cout<<"carne de porco";
                        cout<<"\nHarmonisacao: belgian double";
                        break;
                }
                break;
            
            case 2:
                limpaTela();
                int massa;
                cout<<"qual o molho da massa: \n"<<"1 - branco\n"<<"2 - vermelho\n"<<"3 - funggi\n";
                cin>>massa;
                switch(massa){
                    case 1:
                        cout<<"molho branco";
                        cout<<"\nHarmonisacao: Strong pale ale";
                        break;
                    case 2:
                        cout<<"molho vermelho";
                        cout<<"\nHarmonisacao: Light Lager";
                        break;
                    case 3:
                        cout<<"molho funggi";
                        cout<<"\nHarmonisacao: Robust Porter";
                        break;
                }
                break;
            
            case 3:
                limpaTela();
                int fruto;
                cout<<"qual fruto do mar \n"<<"1 - crustaceos\n"<<"2 - peixe\n";
                cin>>fruto;
                switch(fruto){
                    case 1:
                        int camarao;
                        cout<<"crustaceos escolhido\n"<<"1 - camarao\n2 - lagostas\n3 - ostras\n";
                        cin>>camarao;
                        switch (camarao){
                            case 1:
                                cout<<"\ncamarao alho e olho";
                                int aux4;
                                cout<<"\nPresenca de alcool \n1 - media\n2 - imperseptivel";
                                cin >> aux4;
                                if(aux4 == 1){
                                    cout<<"\nHarmonisacao: \nAmerican Lager(100%) \nKolsh(50%)";
                                }else{
                                    cout<<"\nHarmonisacao: \nAmerican Lager(50%) \nKolsh(100%)";
                                }
                                cout<<"\nHarmonisacao: American Lager ou Kolsh";
                                break;

                            case 2:
                                cout<<"lagosta\n";
                                int aux5, aux26;
                                cout<<"\nCerveja Amarga? \n1 - sim \n2 - nao";
                                cin>>aux5;
                                cout<<"\nAlcool facilmente perceptivel?: \n1 - sim \n2 - nao";
                                cin>>aux26;
                                limpaTela();
                                if(aux5 == 1 && aux26 == 1){
                                    cout<<"\nHarmonisacao: \nWeizen/Weissbier (0%) \nKolsh (0%) \nEnglish IPA (50%)";
                                }else if(aux5 == 2 && aux26 == 1){
                                    cout<<"\nHarmonisacao: \nWeizen/Weissbier (50%) \nKolsh (50%) \nEnglish IPA (0%)";
                                }else if(aux5 == 1 && aux26 == 2){
                                    cout<<"\nHarmonisacao: \nWeizen/Weissbier (50%) \nKolsh (50%) \nEnglish IPA (100%)";
                                }else if(aux5 == 2 && aux26 == 2){
                                    cout<<"\nHarmonisacao: \nWeizen/Weissbier (100%) \nKolsh (100%) \nEnglish IPA (50%)";
                                }
                                break;
                            case 3:
                                cout<<"Ostras\n";
                                int aux6;
                                cout<<"\nAmargor \n1 - Forte\n2 - Baixo";
                                cin>>aux6;
                                if(aux6 == 1){
                                    cout<<"\nHarmonisacao: \nDry Stout(100%) \nKolsh(50%)";
                                }else{
                                    cout<<"\nHarmonisacao: \nDry Stout(50%) \nKolsh(100%)";
                                }
                                break;
                        }
                        break;
                        
                    case 2:
                        int peixe;
                        cout<<"peixe escolhido\n"<<"1 - peixe com alcaparas\n"<<"2 - salmao grelhado\n"<<"3 - moqueca capixaba\n";
                        cin>>peixe;
                        switch(peixe){
                            case 1:
                                cout<<"peixe com alcaparras\n";
                                int aux7;
                                cout<<"\nPresença de alcool no paladar \n1 - Media\n2 - Baixa";
                                cin>>aux7;
                                if(aux7 == 2){
                                    cout<<"\nHarmonisacao: \nWeizen/Weissbier(100%) \nLight Lager(50%)";
                                }else{
                                    cout<<"\nHarmonisacao: \nWeizen/Weissbier(50%) \nLight Lager(100%)";
                                }
                                break;
                            case 2:
                                cout<<"salmao grelhado\n";
                                cout<<"\nHarmonisacao: English IPA";
                                break;
                            case 3:
                                cout<<"moqueca capixaba\n";
                                cout<<"\nHarmonisacao: Dry Stout";
                                break;
                        }
                        break;
                }
                break;
        }

    }else{
        cout<<"deseja uma cerveja frutada:\n"<<"1 - sim \n2 - nao\n";
        int resp;
        cin>>resp;
        if(resp==1){
            cout<<"nossa selecao de cervejas com sabores frutados inclui:\n \nBelgian-Style Quadrupel \nAmerican Iperial Porter \nAmerican IPA \n";
            int IBU;
            cout<<"Qual o amargor desejado:\n1 - medio\n2 - alto\n";
            cin>>IBU;
            limpaTela();
            if(IBU == 1){
                cout<<"Recomendamos a AMERICAN IMPERIAL PORTER. \nEla possui um forte teor alcoolico \nDeve se esperar uma adocicada mistura de cacao, caramelo e malte.";
            }else{
                int resp;
                cout<<"Voce espera consumir um aperitivo com forte sabor \n(1)Sim ou (2)Nao\n \n ";
                cin>>resp;
                if(resp == 1){
                    cout<<"recomendamos a American Barley Wine, uma cerveja ambar, com forte presenca do alcool, aroma e gosto mais forte de lupulo, ela envolve toda a boca em uma sesacao densa\nharmonisa muito bem com aperitivos fortes";
                }else{
                    cout<<"recomendamos a American IPA, com cor dourada acobreada, esta cerveja possui tanto o aroma como o sabor floral-citrico, lembrando pinho, a sensacao ao ser consumida eh densa mas leve\npodendo ser consumida facilmente sozinha ou acompanhada de aperitivos nao muito fortes";
                }
            }
        return 0;
        }else{
            cout<<" - degustacao - ";
        }
        int amargor;
        cout<<"\nQual o amargor desejado, em uma escala de 1 - 100: ";
        cin>>amargor;
        if(amargor<31){
            cout<<"\ncerveja suaves";
            /*Light Lager (American Lager)(10-15)
            kolsh(20-30)
            Bock(20-30)
            American Amber Lager(15-25)
            Weizen/Weissbier (Belgian Style Witbier)(9-16)
            Hebling Irish Red Ale(15)
            Belgian Double (20-35)*/
            int ABV;
            cout<<"\nQuao forte voce espera sua cerveja (perceptividade de alcool no paladar): \n(1) Forte \n(2) Media \n(3)Fraca\n";
            cin>>ABV;
            if(ABV == 1){
                /*
                kolsh (4.8-5.3) nondetectable
                Hebling Irish Red (4.0-4.8) nondetectable to mild
                Belgian Style Witbier (4.8-5.6) nondetectable to mild*/
                cout<<"\nCarbonacao (menosres intensidades de carbonacao levam a uma erveja mais cremosa)\n(1) alta\n(2) media\n(3) baixa\n";
                int carb;
                cin>>carb;
                if(carb == 1){
                    cout<<"A cerveja escolhida eh: Blegian Style Witbier, palida, possui quase nenhum sabor ou aroma decorrente do malte, mas o que pode ser notado é um cheiro citrico";
                }else if(carb == 2){
                    cout<<"A cerveja escolhida eh: Hebling Irish Red, esta cerveja leva este nome por sua cor avermelhada, com moderado impacto no paladar pode conter um sutil gosto de lupulo torrado";
                }else{
                    cout<<"A cerveja escolhida eh: Kolsh, dourada e brilhante, com quase nenhuma presensa do gosto de alcool, possui media intensidade do sabor do malte e sabor frutado que varia com o malte usado";
                }

            }else if(ABV == 2){
                cout<<"A cerveja escolhida eh: American Lager, com cor de palha, possui uma sensacao mais seca ao consumida em conjunto com sua media sensacao de alcool";
            }else{
                /*
                American Amber Lager (4.8-5.4) mild to noticeable
                Bock (6.3-7.5) mild to noticeable
                Belgian Double (6.3-7.3) mild to noticeable*/
                cout<<"\nCarbonacao (menosres intensidades de carbonacao levam a uma erveja mais cremosa)\n(1) alta\n(2) media\n(3) baixa\n";
                int carb;
                cin>>carb;
                if(carb == 1){
                    cout<<"A cerveja escolhida eh: Belgian Double, escura, com maltes achocolatados, caramelado e tostados, possui um peculiar gosto frutado de banana";
                }else if(carb == 2){
                    cout<<"A cerveja escolhida eh: American Amber Lager, de cor cuprica, possui aroma e sabores leves, normalmente voltados para o de malte tostado";
                }else{
                    cout<<"A cerveja escolhida eh: Bock, cerveja semi-translucida de cor marrom escura com aroma de noses torradas e sensacao gentil no palato";
                }
            }
        }else if(amargor>=31 && amargor<61){
            cout<<"cerveja encorpadas";
            /*Robust Porter (25-50)
            English IPA (40-60)
            Dry Stout(30-40)
            American IPA(50-70)
            American Imperial Porter(35-50)
            Strong Pale Ale (43)*/

            int ABV;
            cout<<"\nQuao forte voce espera sua cerveja (perceptividade de alcool no paladar): \n(1) Forte \n(2) Media \n(3)Fraca";
            cin>>ABV;
            if(ABV == 1){
                /*English IPA (5-7) nondetectable
                Dry Stout (3.8-5) nondetectable*/

                cout<<"\nCarbonacao (menores intensidades de carbonacao levam a uma erveja mais cremosa)\n(1) alta\n(2) media\n";
                int carb;
                cin>>carb;
                if (carb == 1){
                    cout<<"A cerveja selecionada eh: English IPA douradaa cobreada, esta cerveja eh moderada em sua intensidade de sensacoes, com um gosto grosseiro, rustico e herbaceo";
                }else{
                    cout<<"A cerveja selecionada eh: Dry Stout, cerveja preta e semi-opaca, com gosto de alcool imperseptivel e sabor de malte torrado, com enfase no gosto de cafe que deixa um aftertaste amargo";
                }

            }else if(ABV == 2){
                /*Robust Porter (5.1-6.6) Mild
                American IPA (6.3-7.5) Mild to Noticeable
                Strong Pale Ale (7-11) Mild*/

                cout<<"\nCarbonacao (menores intensidades de carbonacao levam a uma erveja mais cremosa)\n(1) alta\n(2) media\n(3) baixa\n";
                int carb;
                cin>>carb;
                if(carb == 1){
                    cout<<"A cerveja selecionada eh: American IPA, com cor dourada acobreada, esta cerveja possui tanto o aroma como o sabor floral-citrico, lembrando pinho, a sensacao ao ser consumida eh densa mas leve";
                }else if(carb == 2){
                    cout<<"A cerveja selecionada eh: Storng Pale Ale, cobre pálida esta cerveja tem uma sensacao seca com notas picantes, o que causa na boca uma sensacao agradevel";
                }else{
                    cout<<"A cerveja selecionada eh: Robust Porter, cerveja bem escura que harmonisa o caramelo do malte com o amargor do malte preto sem o gosto de carvao, aromas frutados bem evidentes";
                }

            }else{
                cout<<"A cerveja selecionada eh: American Imperial Porter, cerveja negra e opaca, envolve a boca inteira com sabores de malte caramelado e sensacao doce tal como de chocolate";
            }

        }else{  
            cout<<"cerveja amarga";
            /*Imperial IPA(60-120)
            Imperial Russian Stout(60-90) para sobremesas
            American Barleywine(65-120)*/

            int ABV;
            cout<<"\nQuao forte voce espera sua cerveja (perceptividade de alcool no paladar): \n(1) Forte\n";
            cin>>ABV;
            if(ABV == 1){
                /*Imperial IPA (7.6-10.6) Noticeable
                American Barleywine (8.5-12.2) Noticeable to hot
                Imperial Russian Stout (8-12) Noticeable to hot*/

                cout<<"\nCarbonacao (menores intensidades de carbonacao levam a uma erveja mais cremosa)\n(1) alta\n(2) media\n(3) baixa\n";
                int carb;
                cin>>carb;
                if(carb == 1){
                    cout<<"A cerveja ideal para suas escolhas eh: Imperial IPA, cerveja dourada que cobre toda a boca com sabor vivido e fresco, com certo nivel de amargor mas não intragavel, possui um aroma frutado e sabor impactante";
                }else if(carb == 2){
                    cout<<"A cerveja ideal para suas escolhas eh: American Barleywine, uma cerveja ambar, com forte presenca do alcool, aroma e gosto mais forte de lupulo, ela envolve toda a boca em uma sesacao densa";
                }else{
                    cout<<"A cerveja ideal para suas escolhas eh: Imperial Russian Stout, ela eh uma cerveja escura, aromatica que deixa uma sensacao cremosa e aveludada na boca, levemente quente";
                }
            }
        }
    }
    return 0;
}
