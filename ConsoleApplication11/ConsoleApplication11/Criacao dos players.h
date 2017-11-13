#include "stdafx.h"
#include <iostream>
#include <string>
#include"Criacao dos pokemon.h"

using namespace std;

struct Player
{
	string nome;
	int linha;
	int coluna;
	string pokemon1;
	string pokemon2;
};

Player Thomas;
Player Gina;
Player Jorgin;
Player Karlin;
Player MarkosPaulo;

void criacaoPlayer() {
	Thomas.nome = "Thomas";
	Thomas.coluna = 0;
	Thomas.linha = 0;
	Thomas.pokemon1 = "raichu";
	Thomas.pokemon2 = "alakazan";

	Gina.nome = "Gina";
	Gina.linha = 0;
	Gina.coluna = 4;
	Gina.pokemon1 = "venusaur";
	Gina.pokemon2 = "machamp";

	Jorgin.nome = "Jorgin_O_Lolzero";
	Jorgin.linha = 2;
	Jorgin.coluna = 4;
	Jorgin.pokemon1 = "charlizard";
	Jorgin.pokemon2 = "ninetales";

	Karlin.nome = "Karlin";
	Karlin.linha = 4;
	Karlin.coluna = 0;
	Karlin.pokemon1 = "arcanine";
	Karlin.pokemon2 = "blastoise";

	MarkosPaulo.nome = "MarksPaulo";
	MarkosPaulo.linha = 2;
	MarkosPaulo.coluna = 2;
	MarkosPaulo.pokemon1 = "Luxray";
	MarkosPaulo.pokemon2 = "Staraptor";
}


#pragma once
