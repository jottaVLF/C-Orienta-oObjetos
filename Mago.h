#ifndef _MAGO_M_
#define _MAGO_M_

#include "Jogador.h"

class Mago : public Jogador
{
private:
	int mana;
public:
	~Mago();
	Mago(string nome, int nivel, int forca, int mana);
	string classe;
	string getClasse();
	void exibirInfo();
};

#endif