#include "stdafx.h"
#include <string>
#include "Criacao dos pokemon.h"
#include "Criacao dos players.h"
#include "Combate.h"
#include <stdlib.h>

int c1 = 0;
int c2 = 0;
int c3 = 0;
int c4 = 0;

void movimento() {


	if (Thomas.linha == 2 && Thomas.coluna == 2 && c1 < 1) {
		c1++;
		batalha(Thomas.nome,Thomas.pokemon1, raichu.vida_restante, raichu.ataque_1, raichu.ataque_2, raichu.ataque_3, raichu.ataque_4,
			raichu.tipo_do_ataque_1, raichu.tipo_do_ataque_2, raichu.tipo_do_ataque_3, raichu.tipo_do_ataque_4,
			raichu.dano_ataque_1, raichu.dano_ataque_2, raichu.dano_ataque_3, raichu.dano_ataque_4,
			raichu.pp_ataque_1, raichu.pp_ataque_2, raichu.pp_ataque_3, raichu.pp_ataque_4, raichu.tipo,
			Thomas.pokemon2, alakazan.vida_restante, alakazan.ataque_1, alakazan.ataque_2, alakazan.ataque_3, alakazan.ataque_4,
			alakazan.tipo_do_ataque_1, alakazan.tipo_do_ataque_2, alakazan.tipo_do_ataque_3, alakazan.tipo_do_ataque_4,
			alakazan.dano_ataque_1, alakazan.dano_ataque_2, alakazan.dano_ataque_3, alakazan.dano_ataque_4,
			alakazan.pp_ataque_1, alakazan.pp_ataque_2, alakazan.pp_ataque_3, alakazan.pp_ataque_4, alakazan.tipo);
	}
	if (Gina.linha == 2 && Gina.coluna == 2 && c2 < 1) {
		c2++;
		 batalha(Gina.nome,Gina.pokemon1, venusaur.vida_restante, venusaur.ataque_1, venusaur.ataque_2, venusaur.ataque_3, venusaur.ataque_4,
			 venusaur.tipo_do_ataque_1, venusaur.tipo_do_ataque_2, venusaur.tipo_do_ataque_3, venusaur.tipo_do_ataque_4,
			 venusaur.dano_ataque_1, venusaur.dano_ataque_2, venusaur.dano_ataque_3, venusaur.dano_ataque_4,
			 venusaur.pp_ataque_1, venusaur.pp_ataque_2, venusaur.pp_ataque_3, venusaur.pp_ataque_4, venusaur.tipo,
			 Gina.pokemon2, machamp.vida_restante, machamp.ataque_1, machamp.ataque_2, machamp.ataque_3, machamp.ataque_4,
			 machamp.tipo_do_ataque_1, machamp.tipo_do_ataque_2, machamp.tipo_do_ataque_3, machamp.tipo_do_ataque_4,
			 machamp.dano_ataque_1, machamp.dano_ataque_2, machamp.dano_ataque_3, machamp.dano_ataque_4,
			 machamp.pp_ataque_1, machamp.pp_ataque_2, machamp.pp_ataque_3, machamp.pp_ataque_4, machamp.tipo);
	}
	if (Jorgin.linha == 2 && Jorgin.coluna == 2 && c3 < 1) {
		c3++;
		 batalha(Jorgin.nome,Jorgin.pokemon1, charlizard.vida_restante, charlizard.ataque_1, charlizard.ataque_2, charlizard.ataque_3, charlizard.ataque_4,
			 charlizard.tipo_do_ataque_1, charlizard.tipo_do_ataque_2, charlizard.tipo_do_ataque_3, charlizard.tipo_do_ataque_4,
			 charlizard.dano_ataque_1, charlizard.dano_ataque_2, charlizard.dano_ataque_3, charlizard.dano_ataque_4,
			 charlizard.pp_ataque_1, charlizard.pp_ataque_2, charlizard.pp_ataque_3, charlizard.pp_ataque_4, charlizard.tipo,
			 Jorgin.pokemon2, ninetales.vida_restante, ninetales.ataque_1, ninetales.ataque_2, ninetales.ataque_3, ninetales.ataque_4,
			 ninetales.tipo_do_ataque_1, ninetales.tipo_do_ataque_2, ninetales.tipo_do_ataque_3, ninetales.tipo_do_ataque_4,
			 ninetales.dano_ataque_1, ninetales.dano_ataque_2, ninetales.dano_ataque_3, ninetales.dano_ataque_4,
			 ninetales.pp_ataque_1, ninetales.pp_ataque_2, ninetales.pp_ataque_3, ninetales.pp_ataque_4, ninetales.tipo);

	}
	if (Karlin.linha == 2 && Karlin.coluna == 2 && c4 < 1) {
		c4++;
		 batalha(Karlin.nome,Karlin.pokemon1, arcanine.vida_restante, arcanine.ataque_1, arcanine.ataque_2, arcanine.ataque_3, arcanine.ataque_4,
			 arcanine.tipo_do_ataque_1, arcanine.tipo_do_ataque_2, arcanine.tipo_do_ataque_3, arcanine.tipo_do_ataque_4,
			 arcanine.dano_ataque_1, arcanine.dano_ataque_2, arcanine.dano_ataque_3, arcanine.dano_ataque_4,
			 arcanine.pp_ataque_1, arcanine.pp_ataque_2, arcanine.pp_ataque_3, arcanine.pp_ataque_4, arcanine.tipo,
			 Karlin.pokemon2, blastoise.vida_restante, blastoise.ataque_1, blastoise.ataque_2, blastoise.ataque_3, blastoise.ataque_4,
			 blastoise.tipo_do_ataque_1, blastoise.tipo_do_ataque_2, blastoise.tipo_do_ataque_3, blastoise.tipo_do_ataque_4,
			 blastoise.dano_ataque_1, blastoise.dano_ataque_2, blastoise.dano_ataque_3, blastoise.dano_ataque_4,
			 blastoise.pp_ataque_1, blastoise.pp_ataque_2, blastoise.pp_ataque_3, blastoise.pp_ataque_4, blastoise.tipo);

	}
	if (c1 == 1 && c2 == 1 && c3 == 1 && c4 == 1) {
		cout <<endl<<endl<< "Parabens vc derrotou todos os inimigos \O/";
		exit(0);
	}
	//___________________________verificação do Thomas___________________________________________________________//
	if (Thomas.linha < 2) {
		Thomas.linha++;
	}
	else if (Thomas.linha > 2) {
		Thomas.linha--;
	}
	if (Thomas.coluna < 2) {
		Thomas.coluna++;
	}
	else if (Thomas.coluna > 2) {
		Thomas.coluna--;
	}

	//_________________________verificação da Gina______________________________________________________________//
	if (Gina.linha < 2) {
		Gina.linha++;
	}
	else if (Gina.linha > 2) {
		Gina.linha--;
	}
	if (Gina.coluna < 2) {
		Gina.coluna++;
	}
	else if (Gina.coluna > 2) {
		Gina.coluna--;
	}

	//__________________________verificação do Jorgin________________________________________________________//
	if (Jorgin.linha < 2) {
		Jorgin.linha++;
	}
	else if (Jorgin.linha > 2) {
		Jorgin.linha--;
	}
	if (Jorgin.coluna < 2) {
		Jorgin.coluna++;
	}
	else if (Jorgin.coluna > 2) {
		Jorgin.coluna--;
	}

	//__________________________verificação do Karlin_________________________________________________________//
	if (Karlin.linha < 2) {
		Karlin.linha++;
	}
	else if (Karlin.linha > 2) {
		Karlin.linha--;
	}
	if (Karlin.coluna < 2) {
		Karlin.coluna++;
	}
	else if (Karlin.coluna > 2) {
		Karlin.coluna--;
	}
	movimento();
}



#pragma once
