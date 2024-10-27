#ifndef _JOGADOR_J_
#define _JOGADOR_J_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Jogador {
protected:
	string nome;
	int nivel;
	int forca;
	vector<string> habilidades;
	string classe;

public:
	Jogador(string, int, int);
	virtual void exibirInfo();
	void adicionarHabilidade(string);
	void atualizarForca(int);
	void nivelUp();
	virtual string getClasse();
};

#endif