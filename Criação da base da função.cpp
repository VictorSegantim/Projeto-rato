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
