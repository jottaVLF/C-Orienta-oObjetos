#ifndef _ITENS_I_
#define _ITENS_I_

#include "Jogador.h"

class Itens {
private:
	string nome;
	string tipo;
public:
    Itens(string, string);

    void usar(Jogador* jogador) {
        if (tipo == "pocao magica" && jogador->getClasse() == "Guerreiro") {
            cout << jogador->getClasse() << " nao pode usar " << tipo << "!\n";
            cout << "---------------------------------------" << endl;
        }
        else {
            cout << jogador->getClasse() << " usou " << tipo << " com sucesso!\n";
            cout << "---------------------------------------" << endl;
        }
    }
};

#endif