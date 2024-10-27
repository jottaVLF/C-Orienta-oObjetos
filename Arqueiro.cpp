#include "Arqueiro.h"

Arqueiro::~Arqueiro()
{
}

Arqueiro::Arqueiro(string nome, int nivel, int forca, int precisao, string arco)
	: Jogador(nome, nivel, forca), precisao(precisao), arco(arco)
{
	this->nome = nome;
	this->nivel = nivel;
	this->forca = forca;
	this->precisao = precisao;
	this->arco = arco;
}

string Arqueiro::getClasse()
{
	return "Arqueiro";
}

void Arqueiro::exibirInfo()
{
	cout << "ARQUEIRO" << endl;
	Jogador::exibirInfo();
	cout << "Precisao: " << this->precisao << endl;
	cout << "Arco: " << this->arco << endl;
	cout << "---------------------------------------" << endl;
}
