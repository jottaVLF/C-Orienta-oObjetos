#include "Mago.h"

Mago::~Mago()
{
}

Mago::Mago(string nome, int nivel, int forca, int mana)
	: Jogador(nome, nivel, forca), mana(mana)
{
	this->nome = nome;
	this->nivel = nivel;
	this->forca = forca;
	this->mana = mana;
	adicionarHabilidade("Bola de Fogo");
}

string Mago::getClasse()
{
	return "Mago";
}

void Mago::exibirInfo()
{
	cout << "MAGO" << endl;
	Jogador::exibirInfo();
	cout << "Mana: " << this->mana << endl;
	cout << "---------------------------------------" << endl;
}
