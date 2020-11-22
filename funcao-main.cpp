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
