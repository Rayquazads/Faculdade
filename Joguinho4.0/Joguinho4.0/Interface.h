#pragma once
#pragma once

#include <iostream>
#include "IniciarJogo.h"


using namespace std;




void menu() {

	int resposta = 0;
	

	cout << "Ola jogador, escolhas as opcoes a baixo." << endl << "1-Iniciar jogo" << endl << "2-Instrucoes" << endl;
	cin >> resposta;

	if (resposta == 1) {
		system("cls");
		InicializarJogo();
	}
	else if (resposta == 2) {
		cout << "O objetivo do jogo e derrotar o Boss que se encontra na sala 13, voce comeca na sala 1." << endl
			<< "Para facilitar essa jornada, voce pode pegar um escudo e uma espada, que se encontram respectivamente nas salas 2 e 4." << endl
			<< "Existem monstros nas salas 3,5,7,11, quanto mais monstros voce derrotar sua exp aumenta." << endl
			<< "Para abrir a sala 13 e necessario passar pela sala 7, que se encontra a chave." << endl;
		system("pause");
		system("cls");
		menu();
	}
	else {
		system("cls");
		cout << "Opcao invalida, digite novamente!" << endl;

		menu();

	}
}

