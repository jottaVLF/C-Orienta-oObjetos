#ifndef _GUERREIRRO_G_
#define _GUERREIRRO_G_

#include "Jogador.h"

class Guerreiro : public Jogador
{
private:
	string arma;
public:
	Guerreiro(string nome, int nivel, int forca, string arma);
	~Guerreiro();
	string classe;
	string getClasse();
	void exibirInfo();
};

#endif