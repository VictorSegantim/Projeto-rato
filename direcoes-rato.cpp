else{

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








