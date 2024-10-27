#ifndef _ARQUEIRO_A_
#define _ARQUEIRO_A_

#include "Jogador.h"

class Arqueiro : public Jogador
{
private:
	int precisao;
	string arco;
public:
	~Arqueiro();
	Arqueiro(string nome, int nivel, int forca, int precisao, string arco);
	string classe;
	string getClasse();
	void exibirInfo();
};

#endif