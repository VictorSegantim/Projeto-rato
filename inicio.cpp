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
