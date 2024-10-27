#include "Jogador.h"

Jogador::Jogador(string nome, int nivel, int forca)
{
	this->nome = nome;
	this->nivel = nivel;
	this->forca = forca;
}

void Jogador::exibirInfo()
{
	cout << "Informacoes jogador: " << endl;
	cout << "Nome: " << nome << "\nNivel: " << nivel << "\nForca: " << forca << "\nHabilidades: ";
	for (const auto& hab : habilidades) {
		std::cout << hab << ", ";
	}
	std::cout << "\n";
}

void Jogador::adicionarHabilidade(string habilidade)
{
	habilidades.push_back(habilidade);
}

void Jogador::atualizarForca(int)
{
	cout << "Forca do jogador foi atualizada!" << endl;
	this->forca += 10;
}

void Jogador::nivelUp()
{
	cout << "NIVEL DO JOGADOR " << nome << " AUMENTADO +1" << endl;
	nivel++;
	cout << "---------------------------------------" << endl;
}

string Jogador::getClasse()
{
	return string();
}
