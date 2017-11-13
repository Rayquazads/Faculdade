#include "stdafx.h"
#include <iostream>
#include <string>
#include "Criacao dos pokemon.h"
#include "Criacao dos players.h"
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
#include <stdio.h>


using namespace std;

void batalha (string NomePlayer,string NomePokemon1, int VidaRestante1, string ataque1_1, string ataque1_2, string ataque1_3, string ataque1_4, 
	string tipoAtaque1_1, string TipoAtaque1_2, string TipoAtaque1_3, string TipoAtaque1_4,int DanoAtaque1_1,int DanoAtaque1_2,
	int DanoAtaque1_3,int DanoAtaque1_4,int ppAtaque1_1,int ppAtaque1_2,int ppAtaque1_3,int ppAtaque1_4,string TipoPokemon1,
	
	string NomePokemon2, int VidaRestante2, string ataque2_1, string ataque2_2, string ataque2_3, string ataque2_4,
	string tipoAtaque2_1, string TipoAtaque2_2, string TipoAtaque2_3, string TipoAtaque2_4,int DanoAtaque2_1,int DanoAtaque2_2,
	int DanoAtaque2_3,int DanoAtaque2_4,int ppAtaque2_1, int ppAtaque2_2, int ppAtaque2_3, int ppAtaque2_4,string TipoPokemon2) {
	int resposta;
	int respostaE;
	int contador = 2;
	int Mconador = 2;
	string pokemonBatalhando = NomePokemon1;
	int Vidarestante = VidaRestante1;
	string tipokemon = TipoPokemon1;
	string ataque1 = ataque1_1;
	string tipoataque1 = tipoAtaque1_1;
	int ppataque1 = ppAtaque1_1;
	int danoataque1 = DanoAtaque1_1;
	string ataque2 = ataque1_2;
	string tipoataque2 = TipoAtaque1_2;
	int ppataque2 = ppAtaque1_2;
	int danoataque2 = DanoAtaque1_2;
	string ataque3 = ataque1_3;
	string tipoataque3 = TipoAtaque1_3;
	int ppataque3 = ppAtaque1_3;
	int danoataque3 = DanoAtaque1_3;
	string ataque4 = ataque1_4;
	string tipoataque4 = TipoAtaque1_4;
	int ppataque4 = ppAtaque1_4;
	int danoataque4 = DanoAtaque1_4;

	string meupokemon = luxray.nome;
	int minhavida = luxray.vida_restante;
	string tipopokeom = luxray.tipo;
	string meuataque1 = luxray.ataque_1;
	string meutipo1 = luxray.tipo_do_ataque_1;
	int meupp1 = luxray.pp_ataque_1;
	int meudano1 = luxray.dano_ataque_1;
	string meuataque2 = luxray.ataque_2;
	string meutipo2 = luxray.tipo_do_ataque_2;
	int meupp2 = luxray.pp_ataque_2;
	int meudano2 = luxray.dano_ataque_2;
	string meuataque3 = luxray.ataque_3;
	string meutipo3 = luxray.tipo_do_ataque_3;
	int meupp3 = luxray.pp_ataque_3;
	int meudano3 = luxray.dano_ataque_3;
	string meuataque4 = luxray.ataque_4;
	string meutipo4 = luxray.tipo_do_ataque_4;
	int meupp4 = luxray.pp_ataque_4;
	int meudano4 = luxray.dano_ataque_4;



	do
	{

		system("cls");
		cout << endl << NomePlayer << endl << pokemonBatalhando << " " << Vidarestante << endl;
		cout << endl << endl << MarkosPaulo.nome << endl << meupokemon << " " << minhavida << endl;

		cout << endl << endl << "1- "<< meuataque1 << "(" << meupp1 << ")" << "\t" <<"2- "<< meuataque2 << "(" << meupp2 << ")" << endl <<
			"3- "<< meuataque3 << "(" << meupp3 << ")" << "\t" <<"4- "<< meuataque4 << "(" << meupp4 << ")" << endl << endl << "Escolha um ataque: ";
		cin >> resposta;

		do
		{
			if (resposta < 1 || resposta>4) {
				system("cls");
				cout << "Numero do ataque invalido escolha novamente: ";
				cout << endl << endl << "1- " << meuataque1 << "(" << meupp1 << ")" << "\t" << "2- " << meuataque2 << "(" << meupp2 << ")" << endl <<
					"3- " << meuataque3 << "(" << meupp3 << ")" << "\t" << "4- " << meuataque4 << "(" << meupp4 << ")";
				cin >> resposta;

			}
		} while (resposta>4 || resposta<1);
		

		switch (resposta)
		{
		case 1:
			if (meupokemon == luxray.nome && tipokemon == "agua") {
				Vidarestante = Vidarestante - (meudano1 * 2);
				meupp1--;
			}
			else if (meupokemon == staraptor.nome && tipokemon == "lutador") {
				Vidarestante = Vidarestante - (meudano1 * 2);
				meupp1--;
			}
			else
			{
				Vidarestante = Vidarestante - meudano1;
				meupp1--;
			}
			break;
		case 2:
			if (meupokemon == luxray.nome && tipokemon == "agua") {
				Vidarestante = Vidarestante - (meudano2 * 2);
				meupp2--;
			}
			else if (meupokemon == staraptor.nome && tipokemon == "lutador") {
				Vidarestante = Vidarestante - (meudano2 * 2);
				meupp2--;
			}
			else
			{
				Vidarestante = Vidarestante - meudano2;
				meupp2--;
			}
			break;
		case 3:
			if (meupokemon == luxray.nome && tipokemon == "agua") {
				Vidarestante = Vidarestante - (meudano3 * 2);
				meupp3--;
			}
			else if (meupokemon == staraptor.nome && tipokemon == "lutador") {
				Vidarestante = Vidarestante - (meudano3 * 2);
				meupp3--;
			}
			else
			{
				Vidarestante = Vidarestante - meudano3;
				meupp3--;
			}
			break;
		case 4:
			if (meupokemon == luxray.nome && tipokemon == "agua") {
				Vidarestante = Vidarestante - (meudano4 * 2);
				meupp4--;
			}
			else if (meupokemon == staraptor.nome && tipokemon == "lutador") {
				Vidarestante = Vidarestante - (meudano4 * 2);
				meupp4--;
			}
			else
			{
				Vidarestante = Vidarestante - meudano4;
				meupp4--;
			}
			break;
		}

		srand((unsigned)time(NULL));
		respostaE = 1 + (rand() % 4);

		switch (respostaE)
		{
		case 1:
			if (meupokemon == luxray.nome && tipoataque1 =="terra") {
				minhavida = minhavida - (danoataque1 * 2);
				ppataque1--;
			}
			else if (meupokemon == staraptor.nome && tipokemon == "eletrico") {
				minhavida = minhavida - (danoataque1 * 2);
				ppataque1--;
			}
			else
			{
				minhavida = minhavida - danoataque1;
				ppataque1--;
			}
			break;
		case 2:
			if (meupokemon == luxray.nome && tipoataque1 == "terra") {
				minhavida = minhavida - (danoataque2 * 2);
				ppataque2--;
			}
			else if (meupokemon == staraptor.nome && tipokemon == "eletrico") {
				minhavida = minhavida - (danoataque2 * 2);
				ppataque2--;
			}
			else
			{
				minhavida = minhavida - danoataque2;
				ppataque2--;
			}
			break;
		case 3:
			if (meupokemon == luxray.nome && tipoataque1 == "terra") {
				minhavida = minhavida - (danoataque3 * 2);
				ppataque3--;
			}
			else if (meupokemon == staraptor.nome && tipokemon == "eletrico") {
				minhavida = minhavida - (danoataque3 * 2);
				ppataque3--;
			}
			else
			{
				minhavida = minhavida - danoataque3;
				ppataque3--;
			}
			break;
		case 4:
			if (meupokemon == luxray.nome && tipoataque1 == "terra") {
				minhavida = minhavida - (danoataque4 * 2);
				ppataque4--;
			}
			else if (meupokemon == staraptor.nome && tipokemon == "eletrico") {
				minhavida = minhavida - (danoataque4 * 2);
				ppataque4--;
			}
			else
			{
				minhavida = minhavida - danoataque4;
				ppataque4--;
			}
			break;
		}

		if (Vidarestante <= 0) {
			 pokemonBatalhando = NomePokemon2;
			 Vidarestante = VidaRestante2;
			 tipokemon = TipoPokemon2;
			 ataque1 = ataque2_1;
			 tipoataque1 = tipoAtaque2_1;
			 ppataque1 = ppAtaque2_1;
			 danoataque1 = DanoAtaque2_1;
			 ataque2 = ataque2_2;
			 tipoataque2 = TipoAtaque2_2;
			 ppataque2 = ppAtaque2_2;
			 danoataque2 = DanoAtaque2_2;
			 ataque3 = ataque2_3;
			 tipoataque3 = TipoAtaque2_3;
			 ppataque3 = ppAtaque2_3;
			 danoataque3 = DanoAtaque2_3;
			 ataque4 = ataque2_4;
			 tipoataque4 = TipoAtaque2_4;
			 ppataque4 = ppAtaque2_4;
			 danoataque4 = DanoAtaque2_4;
			contador--;
		}
		if (minhavida <= 0) {
			 meupokemon = staraptor.nome;
			 minhavida = staraptor.vida_restante;
			 tipopokeom = staraptor.tipo;
			 meuataque1 = staraptor.ataque_1;
			 meutipo1 = staraptor.tipo_do_ataque_1;
			 meupp1 = staraptor.pp_ataque_1;
			 meudano1 = staraptor.dano_ataque_1;
			 meuataque2 = staraptor.ataque_2;
			 meutipo2 = staraptor.tipo_do_ataque_2;
			 meupp2 = staraptor.pp_ataque_2;
			 meudano2 = staraptor.dano_ataque_2;
			 meuataque3 = staraptor.ataque_3;
			 meutipo3 = staraptor.tipo_do_ataque_3;
			 meupp3 = staraptor.pp_ataque_3;
			 meudano3 = staraptor.dano_ataque_3;
			 meuataque4 = staraptor.ataque_4;
			 meutipo4 = staraptor.tipo_do_ataque_4;
			 meupp4 = staraptor.pp_ataque_4;
			 meudano4 = staraptor.dano_ataque_4;
			Mconador--;
		}

	} while (contador !=0 && Mconador != 0);
	if (contador == 0) {
		cout <<endl<<endl<< "Parabéns voce ganhou :)"<<"O proximo oponete é...";
		Sleep(2000);
	}
	else if (Mconador == 0) {
		cout << endl << endl << "Voce perdeu :(";
		Sleep(2000);
	}

}

#pragma once
