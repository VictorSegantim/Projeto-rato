#include <bits/stdc++.h>

using namespace std;

const char caminho = '.';
const char parede = 'P';
const char QUEIJO = 'Q';
const char ENTRADA = 'E';
const char RATO = 'R';
const char VOLTANDO = 'V';

const int DIREITA = 0;
const int BAIXO = 1;
const int ESQUERDA = 2;
const int CIMA = 3;
const int INICIO = 4;

const char LARGURA = 5;
const char ALTURA = 5;


    void exibirMapa(char mapa[LARGURA][ALTURA]){
        for (int i=0; i<LARGURA; i++){
            for (int j=0; j<ALTURA; j++){
                cout << mapa[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }






bool procurarQ(char mapa[LARGURA][ALTURA],int posXRato,int posYRato, int deOndeVeio, bool &temQueijo){

    if(posXRato < 0 || posYRato < 0 || posXRato >= LARGURA || posYRato >= ALTURA){
        return false;

    }else if(mapa[posXRato][posYRato]==QUEIJO){

        mapa[posXRato][posYRato]='X';
            exibirMapa(mapa);
        cout << "Achei o queijo" << endl;
        cout << endl;
        return true;

    }else if(mapa[posXRato][posYRato]==parede || mapa[posXRato][posYRato] == RATO){
        return false;

    }else{

        mapa[posXRato][posYRato]=RATO;
            exibirMapa(mapa);
                system("pause");
            cout << endl;


        if(deOndeVeio != DIREITA and procurarQ(mapa,posXRato,posYRato+1, ESQUERDA, temQueijo)){

            mapa[posXRato][posYRato]=VOLTANDO;
                exibirMapa(mapa);
                    system("pause");
                cout << endl;
                return true;

        }else if(deOndeVeio != BAIXO and procurarQ(mapa,posXRato+1,posYRato, CIMA, temQueijo)){

            mapa[posXRato][posYRato]=VOLTANDO;
                exibirMapa(mapa);
                    system("pause");
                cout << endl;
                return true;

        }else if(deOndeVeio != ESQUERDA and procurarQ(mapa,posXRato,posYRato-1, DIREITA, temQueijo)){

            mapa[posXRato][posYRato]=VOLTANDO;
                exibirMapa(mapa);
                    system("pause");
                cout << endl;

                return true;

        }else if(deOndeVeio != CIMA and procurarQ(mapa,posXRato-1,posYRato, BAIXO, temQueijo)){
            mapa[posXRato][posYRato]=VOLTANDO;
                exibirMapa(mapa);
                    system("pause");
            cout << endl;
            return true;

        }
        exibirMapa(mapa);
    }

    return false;
    system("pause");
}






int main(){

    cout << endl;
    cout << "Bem vindo ao labirinto do rato! Se o rato se comportar errado ou ficar preso, reinicie o programa!" << endl;
    cout << endl;



        srand(time(NULL));


char mapa[LARGURA][ALTURA];
        for(int i=0; i<LARGURA; i++){
            for (int j=0; j<ALTURA; j++){
                mapa[i][j] = caminho;

            }
        }


    int posXEntrada = rand()%5;
    int posYEntrada = rand()%5;

        mapa[0][2]=parede;
        mapa[1][0]=parede;
        mapa[1][1]=parede;
        mapa[3][2]=parede;
        mapa[1][3]=QUEIJO;
        mapa[posXEntrada][posYEntrada]=ENTRADA;

            exibirMapa(mapa);
            system("pause");

                    cout << endl;

bool temQueijo;
    procurarQ(mapa,posXEntrada,posYEntrada,INICIO,temQueijo);

        cout << endl;
        cout << "Fim do programa! O rato voltou!" << endl;
}
