#include "Guerreiro.h"

Guerreiro::Guerreiro(string nome, int nivel, int forca, string arma)
	: Jogador(nome, nivel, forca), arma(arma)
{
	this->nome = nome;
	this->nivel = nivel;
	this->forca = forca;
	this->arma = arma;
}

Guerreiro::~Guerreiro()
{
}

string Guerreiro::getClasse()
{
	return "Guerreiro";
}

void Guerreiro::exibirInfo()
{
	cout << "GUERREIRO" << endl;
	Jogador::exibirInfo();
	cout << "Arma: " << this->arma << endl;
	cout << "---------------------------------------" << endl;
}
