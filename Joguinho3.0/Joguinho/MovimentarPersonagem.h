#pragma once

#include <iostream>
#include "Interface.h"
#include "Batalha.h"


using namespace std;

int Matriz(bool verificacao, int sala, int SalasPosiveis[2],int personagem[7]) {
	int resposta;

	int matriz[13][5] = {
		2,3,0,0,0,//1
		4,5,0,40,0,//2			//20=espada
		5,6,30,0,0,//3			//30=Monstro
		5,6,0,0,20,//4			//40=escudo
		6,7,30,0,0,//5			//50=chave
		7,8,0,0,0,//6
		9,10,30,50,0,//7
		10,11,0,0,0,//8
		10,11,0,0,0,//9
		11,12,0,0,0,//10
		12,13,30,0,0,//11
		13,4,0,0,0,//12
		4,4,30,0,0//13
	};

	if (matriz[sala-1][2] == 30) {
		batalha(personagem);

	}

	if (matriz[sala - 1][3] == 40 && personagem[3] != 40) {
		system("cls");
		cout<<"Voce quer pegar o escudo?" << endl<<"1-pegar"<<endl<<"2-nao pegar"<<endl;
		cin >> resposta;
		if (resposta == 1) {
			personagem[3] = 40;

		}
		while (resposta != 1 && resposta != 2)
		{
			cout << "voce quer pegar o escudo?" << endl << "1-pegar" << endl << "2-nao pegar" << endl;
			cin >> resposta;
			
		}
		
		

	}
	else if (matriz[sala - 1][4] == 20 && personagem[2] != 20) {
		system("cls");
		cout << "Voce quer pegar o espada?" << endl << "1-pegar"<<endl << "2-nao pegar" << endl;
		cin >> resposta;
		if (resposta == 1) {
			personagem[2] = 20;
		}
		
			while (resposta != 1 && resposta != 2)
			{
				cout << "Voce quer pegar o espada?" << endl << "1-pegar" << endl << "2-nao pegar" << endl;
				cin >> resposta;
			}
		
	}
	if (matriz[sala - 1][3] == 50&& personagem[7] != 50) {
		cout << "Voce quer pegar o chave?" << endl << "1-pegar" << endl << "2-nao pegar" << endl;
		cin >> resposta;

		while (resposta != 1 && resposta != 2)
		{
			cout << "Voce quer pegar o chave?" << endl << "1-pegar" << endl << "2-nao pegar" << endl;
			cin >> resposta;
		}
		if (resposta == 1) {
			personagem[7] = 50;
		}
	}
	if (verificacao == true) {
		for (int i = sala; i <= sala; i++) {
			for (int j = 0; j < 2; j++) {
				SalasPosiveis[j] = matriz[i-1][j];
			}
		}
		return *SalasPosiveis;
	}
	
	
	return *personagem;
}


void Movimento(int persongem[6]) {
	
	
	
	int *SalasPossiveis;
	int resposta;
	SalasPossiveis = new int[2];
	SalasPossiveis[2] = { 0 };
	
	cout << "Voce esta na sala " << persongem[5]<<endl;
	Matriz(true, persongem[5], SalasPossiveis,persongem);
	cout << "Essa são as salas possiveis para ir: " << endl;
	for (int i = 0; i < 2; i++) {
		cout << SalasPossiveis[i] << endl;
	}
	
	do{
		cout << "Digite a sala que deseja ir: " << endl;
		cin >> persongem[5];
		cout << persongem[5];

	} while (persongem[5] != SalasPossiveis[0] && persongem[5] != SalasPossiveis[1]);

	if (persongem[5] >= 13 && persongem[7] == 50) {
		batalha(persongem);
		Finalizacao(persongem);
		exit(0);
	}
	else if (persongem[5] >= 13 && persongem[7] != 50) {
		system("cls");
		if (persongem[2] != 20) {
			cout << "Vc nao pode enfrentar um monstro sem a espada, volte para pega-la." << endl;
		}
		cout << "Vc não tem a chave, volte quando tiver ela." << endl;
		persongem[5] -= 1;
		Movimento(persongem);
	}
	
		
	Movimento(persongem);
}

