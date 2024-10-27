#ifndef _GERENCIADOR_G_
#define _GERENCIADOR_G_

#include "Jogador.h"
#include "Guerreiro.h"
#include "Mago.h"
#include "Arqueiro.h"

#include <iostream>
#include <vector>

class Gerenciador {
private:
    vector<Jogador*> jogadores;

public:
    Gerenciador() {}

    Jogador* buscarJogadores(string nome) {
        for (Jogador* j : jogadores) {
            if (j->getClasse() == nome) {
                return j;
            }
        }
    }

    void exibirJogadores() {
        for (Jogador* j : jogadores) {
            j->exibirInfo();
        }
    }

    void push(Jogador* e) {
        jogadores.push_back(e);
    }

    void erase(string nome) {
        int pos = 0;
        for (Jogador* j : this->jogadores)
        {
            if (j->getClasse() != nome)
                pos++;
            else {
                delete j;
                this->jogadores.erase(this->jogadores.begin() + pos);
            }
        }
    }
};

#endif