
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct Status
{
	string nome;
	string tipo;
	string ataque_1;
	string tipo_do_ataque_1;
	int pp_ataque_1;
	int dano_ataque_1;
	string ataque_2;
	string tipo_do_ataque_2;
	int pp_ataque_2;
	int dano_ataque_2;
	string ataque_3;
	string tipo_do_ataque_3;
	int pp_ataque_3;
	int dano_ataque_3;
	string ataque_4;
	string tipo_do_ataque_4;
	int pp_ataque_4;
	int dano_ataque_4;
	int vida;
	int vida_restante;
	int exp;
};
Status venusaur;
Status charlizard;
Status blastoise;
Status raichu;
Status ninetales;
Status arcanine;
Status alakazan;
Status machamp;
Status luxray;
Status staraptor;

void Pokemon() {
	venusaur.nome = "Venusaur";
	venusaur.tipo = "planta";
	venusaur.ataque_1 = "Double-Edge";
	venusaur.tipo_do_ataque_1 = "normal";
	venusaur.dano_ataque_1 = 12;
	venusaur.pp_ataque_1 = 15;
	venusaur.ataque_2 = "Petal Dance";
	venusaur.tipo_do_ataque_2 = "planta";
	venusaur.dano_ataque_2 = 14;
	venusaur.pp_ataque_2 = 10;
	venusaur.ataque_3 = "Razor Leaf";
	venusaur.tipo_do_ataque_3 = "planta";
	venusaur.dano_ataque_3 = 5;
	venusaur.pp_ataque_3 = 25;
	venusaur.ataque_4 = "Giga Drain";//metade do dano é convertido em vida
	venusaur.tipo_do_ataque_4 = "planta";
	venusaur.dano_ataque_4 = 8;
	venusaur.pp_ataque_4 = 10;
	venusaur.vida = 100;
	venusaur.vida_restante = 100;
	venusaur.exp = 0;


	charlizard.nome = "Charlizard";
	charlizard.tipo = "fogo";
	charlizard.ataque_1 = "Flamethrower";
	charlizard.tipo_do_ataque_1 = "fogo";
	charlizard.dano_ataque_1 = 9;
	charlizard.pp_ataque_1 = 15;
	charlizard.ataque_2 = "Fire Spin";
	charlizard.tipo_do_ataque_2 = "fogo";
	charlizard.dano_ataque_2 = 4;
	charlizard.pp_ataque_2 = 15;
	charlizard.ataque_3 = "Dragon Claw";
	charlizard.tipo_do_ataque_3 = "dragão";
	charlizard.dano_ataque_1 = 8;
	charlizard.pp_ataque_3 = 15;
	charlizard.ataque_4 = "Fly";//não pode ser atingido no turno
	charlizard.tipo_do_ataque_4 = "voador";
	charlizard.dano_ataque_4 = 9;
	charlizard.pp_ataque_4 = 15;
	charlizard.vida = 100;
	charlizard.vida_restante = 100;
	charlizard.exp = 0;


	blastoise.nome = "Blastoise";
	blastoise.tipo = "agua";
	blastoise.ataque_1 = "Water Pulse";
	blastoise.tipo_do_ataque_1 = "agua";
	blastoise.dano_ataque_1 = 6;
	blastoise.pp_ataque_1 = 15;
	blastoise.ataque_2 = "Hydro Pump";
	blastoise.tipo_do_ataque_2 = "agua";
	blastoise.dano_ataque_2 = 15;
	blastoise.pp_ataque_2 = 5;
	blastoise.ataque_3 = "Water gun";
	blastoise.tipo_do_ataque_3 = "agua";
	blastoise.dano_ataque_3 = 4;
	blastoise.pp_ataque_3 = 25;
	blastoise.ataque_4 = "Aqua Tail";
	blastoise.tipo_do_ataque_4 = "agua";
	blastoise.dano_ataque_4 = 9;
	blastoise.pp_ataque_4 = 10;
	blastoise.vida = 100;
	blastoise.vida_restante = 100;
	blastoise.exp = 0;


	raichu.nome = "Raichu";
	raichu.tipo = "eletrico";
	raichu.ataque_1 = "Thunder Bolt";
	raichu.tipo_do_ataque_1 = "eletrico";
	raichu.dano_ataque_1 = 9;
	raichu.pp_ataque_1 = 15;
	raichu.ataque_2 = "Thunder";
	raichu.tipo_do_ataque_2 = "eletrico";
	raichu.dano_ataque_2 = 12;
	raichu.pp_ataque_2 = 10;
	raichu.ataque_3 = "Thunder Shock";
	raichu.tipo_do_ataque_3 = "eletrico";
	raichu.dano_ataque_3 = 4;
	raichu.pp_ataque_3 = 30;
	raichu.ataque_4 = "Thunder Punch";
	raichu.tipo_do_ataque_4 = "eletrico";
	raichu.dano_ataque_4 = 7;
	raichu.pp_ataque_4 = 15;
	raichu.vida = 100;
	raichu.vida_restante = 100;
	raichu.exp = 0;


	ninetales.nome = "Ninetales";
	ninetales.tipo = "fogo";
	ninetales.ataque_1 = "Flame Thrower";
	ninetales.tipo_do_ataque_1 = "fogo";
	ninetales.dano_ataque_1 = 9;
	ninetales.pp_ataque_1 = 15;
	ninetales.ataque_2 = "Fire Blast";
	ninetales.tipo_do_ataque_2 = "fogo";
	ninetales.dano_ataque_2 = 15;
	ninetales.pp_ataque_2 = 5;
	ninetales.ataque_3 = "Ember";
	ninetales.tipo_do_ataque_3 = "fogo";
	ninetales.dano_ataque_3 = 4;
	ninetales.pp_ataque_3 = 25;
	ninetales.ataque_4 = "Overheat";
	ninetales.tipo_do_ataque_4 = "fogo";
	ninetales.dano_ataque_4 = 15;
	ninetales.pp_ataque_4 = 5;
	ninetales.vida = 100;
	ninetales.vida_restante = 100;
	ninetales.exp = 0;


	arcanine.nome = "Arcanine";
	arcanine.tipo = "fogo";
	arcanine.ataque_1 = "Flame Thrower";
	arcanine.tipo_do_ataque_1 = "fogo";
	arcanine.dano_ataque_1 = 9;
	arcanine.pp_ataque_1 = 15;
	arcanine.ataque_2 = "Fire Blast";
	arcanine.tipo_do_ataque_2 = "fogo";
	arcanine.dano_ataque_2 = 15;
	arcanine.pp_ataque_2 = 5;
	arcanine.ataque_3 = "Ember";
	arcanine.tipo_do_ataque_3 = "fogo";
	arcanine.dano_ataque_3 = 4;
	arcanine.pp_ataque_3 = 25;
	arcanine.ataque_4 = "Overheat";
	arcanine.tipo_do_ataque_4 = "fogo";
	arcanine.dano_ataque_4 = 15;
	arcanine.pp_ataque_4 = 5;
	arcanine.vida = 100;
	arcanine.vida_restante = 100;
	arcanine.exp = 0;


	alakazan.nome = "Alakazan";
	alakazan.tipo = "psiquico";
	alakazan.ataque_1 = "Psyshock";
	alakazan.tipo_do_ataque_1 = "psiquico";
	alakazan.dano_ataque_1 = 8;
	alakazan.pp_ataque_1 = 10;
	alakazan.ataque_2 = "Psychic";
	alakazan.tipo_do_ataque_2 = "psiquico";
	alakazan.dano_ataque_2 = 9;
	alakazan.pp_ataque_2 = 10;
	alakazan.ataque_3 = "Hyper Beam";
	alakazan.tipo_do_ataque_3 = "psiquico";
	alakazan.dano_ataque_3 = 15;
	alakazan.pp_ataque_3 = 5;
	alakazan.ataque_4 = "Shadow Ball";
	alakazan.tipo_do_ataque_4 = "psiquico";
	alakazan.dano_ataque_4 = 8;
	alakazan.pp_ataque_4 = 15;
	alakazan.vida = 100;
	alakazan.vida_restante = 100;
	alakazan.exp = 0;


	machamp.nome = "Machamp";
	machamp.tipo = "lutador";
	machamp.ataque_1 = "Cross Chop";
	machamp.tipo_do_ataque_1 = "lutador";
	machamp.dano_ataque_1 = 15;
	machamp.pp_ataque_1 = 5;
	machamp.ataque_2 = "DynamicPunch";
	machamp.tipo_do_ataque_2 = "lutador";
	machamp.dano_ataque_2 = 10;
	machamp.pp_ataque_2 = 5;
	machamp.ataque_3 = "Karate Chop";
	machamp.tipo_do_ataque_3 = "lutador";
	machamp.dano_ataque_3 = 5;
	machamp.pp_ataque_3 = 25;
	machamp.ataque_4 = "Low Sweep";
	machamp.tipo_do_ataque_4 = "lutador";
	machamp.dano_ataque_4 = 6;
	machamp.pp_ataque_4 = 20;
	machamp.vida = 100;
	machamp.vida_restante = 100;
	machamp.exp = 0;


	luxray.nome = "Luxray";
	luxray.tipo = "eletrico";
	luxray.ataque_1 = "Thunder Fang";
	luxray.tipo_do_ataque_1 = "eletrico";
	luxray.dano_ataque_1 = 10;
	luxray.pp_ataque_1 = 15;
	luxray.ataque_2 = "Thunder";
	luxray.tipo_do_ataque_2 = "eletrico";
	luxray.dano_ataque_2 = 12;
	luxray.pp_ataque_2 = 10;
	luxray.ataque_3 = "Wild Charge";
	luxray.tipo_do_ataque_3 = "eletrico";
	luxray.dano_ataque_3 = 9;
	luxray.pp_ataque_3 = 15;
	luxray.ataque_4 = "Spark";
	luxray.tipo_do_ataque_4 = "eletrico";
	luxray.dano_ataque_4 = 6;
	luxray.pp_ataque_4 = 20;
	luxray.vida = 100;
	luxray.vida_restante = 100;
	luxray.exp = 0;


	staraptor.nome = "Staraptor";
	staraptor.tipo = "Voador";
	staraptor.ataque_1 = "Wing Attack";
	staraptor.tipo_do_ataque_1 = "voador";
	staraptor.dano_ataque_1 = 6;
	staraptor.pp_ataque_1 = 35;
	staraptor.ataque_2 = "Brave Bird";
	staraptor.tipo_do_ataque_2 = "voador";
	staraptor.dano_ataque_2 = 12;
	staraptor.pp_ataque_2 = 15;
	staraptor.ataque_3 = "Close Combat";
	staraptor.tipo_do_ataque_3 = "lutador";
	staraptor.dano_ataque_3 = 12;
	staraptor.pp_ataque_3 = 5;
	staraptor.ataque_4 = "fly";
	staraptor.tipo_do_ataque_4 = "voador";
	staraptor.dano_ataque_4 = 9;
	staraptor.pp_ataque_4 = 15;
	staraptor.vida = 100;
	staraptor.vida_restante = 100;
	staraptor.exp = 0;
}

#pragma once
