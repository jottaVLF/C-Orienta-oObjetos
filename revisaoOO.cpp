#include <iostream>
#include "Arqueiro.h"
#include "Guerreiro.h"
#include "Mago.h"
#include "Itens.h"
#include "Gerenciador.h"

int main()
{
	Gerenciador gerenciador;

	Jogador* j1 = new Guerreiro("Thorin", 44, 100, "Espada Celestial");
	Jogador* j2 = new Mago("Gandalf", 32, 80, 300);
	Jogador* j3 = new Arqueiro("Legolas", 41, 22, 80, "Arco Flamejante");

	gerenciador.push(j1);
	gerenciador.push(j2);
	gerenciador.push(j3);

	gerenciador.exibirJogadores();

	j2->nivelUp();
	j2->adicionarHabilidade("Escudo Magico");

	cout << "Tentando equipar Thorin com uma pocao magica:" << endl;
	Itens pocao("Poção de Mana", "pocao magica");
	Jogador* thorin = gerenciador.buscarJogadores("Guerreiro");
	if (thorin) {
		pocao.usar(thorin);
	}

	gerenciador.erase("Arqueiro");
	gerenciador.exibirJogadores();

	return 0;
}