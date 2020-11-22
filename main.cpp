#include <bits/stdc++.h>

using namespace std;

const char caminho = '.';
const char parede = 'P';
const char queijo = 'Q';
const char entrada = 'E';
const char rato = 'R';
const char voltar = 'V';

const int DIREITA = 0;
const int BAIXO = 1;
const int ESQUERDA = 2;
const int CIMA = 3;
const int INICIO = 4;

const char LARGURA = 5;
const char ALTURA = 5;


    void exibirMapa(char lab[LARGURA][ALTURA]){
        for (int i=0; i<LARGURA; i++){
            for (int j=0; j<ALTURA; j++){
                cout << lab[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }






bool procurarQ(char lab[LARGURA][ALTURA],int posXRato,int posYRato, int deOndeVeio, bool &temQueijo){

    if(posXRato < 0 || posYRato < 0 || posXRato >= LARGURA || posYRato >= ALTURA){
        return false;

    }else if(lab[posXRato][posYRato]==queijo){

        lab[posXRato][posYRato]='X';
            exibirMapa(lab);
        cout << "O Rato achou o queijo!" << endl;
        cout << endl;
        return true;

    }else if(lab[posXRato][posYRato]==parede || lab[posXRato][posYRato] == rato){
        return false;

    }else{

        lab[posXRato][posYRato]=rato;
            exibirMapa(lab);
                system("pause");
            cout << endl;


        if(deOndeVeio != DIREITA and procurarQ(lab,posXRato,posYRato+1, ESQUERDA, temQueijo)){

            lab[posXRato][posYRato]=voltar;
                exibirMapa(lab);
                    system("pause");
                cout << endl;
                return true;

        }else if(deOndeVeio != BAIXO and procurarQ(lab,posXRato+1,posYRato, CIMA, temQueijo)){

            lab[posXRato][posYRato]=voltar;
                exibirMapa(lab);
                    system("pause");
                cout << endl;
                return true;

        }else if(deOndeVeio != ESQUERDA and procurarQ(lab,posXRato,posYRato-1, DIREITA, temQueijo)){

            lab[posXRato][posYRato]=voltar;
                exibirMapa(lab);
                    system("pause");
                cout << endl;

                return true;

        }else if(deOndeVeio != CIMA and procurarQ(lab,posXRato-1,posYRato, BAIXO, temQueijo)){
            lab[posXRato][posYRato]=voltar;
                exibirMapa(lab);
                    system("pause");
            cout << endl;
            return true;

        }
        exibirMapa(lab);
    }

    return false;
    system("pause");
}






int main(){

    cout << endl;
    cout << "Bem vindo ao labirinto do rato! Se o rato se comportar errado ou ficar preso, reinicie o programa!" << endl;
    cout << endl;



        srand(time(NULL));


char lab[LARGURA][ALTURA];
        for(int i=0; i<LARGURA; i++){
            for (int j=0; j<ALTURA; j++){
                lab[i][j] = caminho;

            }
        }


    int posXEntrada = rand()%5;
    int posYEntrada = rand()%5;

        lab[0][2]=parede;
        lab[1][0]=parede;
        lab[1][1]=parede;
        lab[3][2]=parede;
        lab[1][3]=queijo;
        lab[posXEntrada][posYEntrada]=entrada;

            exibirMapa(lab);
            system("pause");

                    cout << endl;

bool temQueijo;
    procurarQ(lab,posXEntrada,posYEntrada,INICIO,temQueijo);

        cout << endl;
        cout << "Fim do programa! O rato voltou!" << endl;
}
