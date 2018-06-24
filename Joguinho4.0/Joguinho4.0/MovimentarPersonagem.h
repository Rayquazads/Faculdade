
#pragma once

#include <iostream>
#include <time.h>

using namespace std;


struct Boss {
	int ataque = 70;
	int defesa = 15;
	int vida = 200;
};

struct Personagem {
	int Exp = 0;
	int Kills = 0;
	int Run = 0;
	int Room = 1;
	int Life = 1;
	bool Sword = false;
	bool Shield = false;
	bool Key = false;

	int x = 0;
	int y = 0;
	int VidaRestante = 200;
	int ataque = 70;
	int magia = 50;
	int defesa = 30;

	void batalha() {

		int Probabilidade, resposta, Probalidade2;

		srand(time(NULL));

		Probabilidade = rand() % 10 + 1;
		Probalidade2 = rand() % 4 + 1;
		system("cls");
		cout << "Nessa sala tem um monstro, deseja enfrentar ou fugir?" << endl << "Enfrentar = 1" << endl << "Fugir = 2" << endl;
		cin >> resposta;

		switch (resposta)
		{
		case 1:
			if (Shield != true && Sword != true) {
				if (Probalidade2 == 1) {
					Kills += 1;
					Exp += Room;
					cout << "Voce ganhou essa luta" << endl;
					system("pause");
					system("cls");
					
				}
				else
				{
					Life -= 1;
				}
				
				//Finalizacao(meuPersonagem);
				
			}
			else if (Shield == true && Sword == true) {
				if (Probabilidade >= 1 || Probabilidade <= 7) {
					Kills += 1;
					Exp += Room;
					cout << "Voce ganhou essa luta" << endl;
					system("pause");
					system("cls");
				
				}
				else
				{
					Life -= 1;
				}
				//Finalizacao(meuPersonagem);
				
			}
			else if (Shield == true && Sword != true) {
				cout << "Nao pode atacar so com o escudo!" << endl;
				system("pause");
				batalha();
			}
			else if (Sword == true && Shield != true) {
				if (Probabilidade >= 1 || Probabilidade <= 6) {
					Kills += 1;
					Exp += Room;
					cout << "Voce ganhou essa luta" << endl;
					system("pause");
					system("cls");
					
				}
				else
				{
					Life -= 1;
				}
				//Finalizacao(meuPersonagem);
				

			}
			break;
		case 2:
			if (Shield != true && Sword != true) {
				if (Probalidade2 == 1) {
					Run += 1;
					Exp += Room;
					cout << "Voce fugiu dessa luta" << endl;
					system("pause");
					system("cls");
					
				}
				else
				{
					Life -= 1;
				}
				//Finalizacao(meuPersonagem);
				
			}
			else if (Shield == true && Sword == true) {
				if (Probabilidade >= 1 || Probabilidade <= 7) {
					Run += 1;
					Exp += Room;
					cout << "Voce fugiu dessa luta" << endl;
				
				}
				else
				{
					Life -= 1;
				}
				//Finalizacao(meuPersonagem);
				
			}
			else if (Shield == true && Sword != true) {

				if (Probabilidade >= 1 || Probabilidade <= 4) {
					Run += 1;
					Exp += Room;
					cout << "Voce fugiu dessa luta" << endl;
				
				}
				else
				{
					Life -= 1;
				}
				//Finalizacao(meuPersonagem);
				
			}
			else if (Sword == true && Shield != true) {
				cout << "Nao pode fugir so com a espada!" << endl;
				system("pause");
				batalha();
			}
		}
	}
};

void Finalizacao(Personagem meuPersonagem) {
	if (meuPersonagem.Life == 0) {
		cout << "Voce perdeu ; ;" << endl;
	}
	else if (meuPersonagem.VidaRestante <= 0) {
		cout << "Voce perdeu ; ;" << endl;
	}
	else
	{
		cout << "Parabens vc ganhou o jogo!!" << endl;
	}
	cout << "Voce conseguiu " << meuPersonagem.Exp << " de exp" << endl;
	cout << "Voce matou " << meuPersonagem.Kills << " monstros" << endl;
	if (meuPersonagem.Sword == true) {
		cout << "Voce pegou a espada" << endl;
	}
	else {
		cout << "Voce nao pegou a espada" << endl;
	}
	if (meuPersonagem.Shield == true) {
		cout << "Voce pegou o escudo" << endl;
	}
	else {
		cout << "Voce nao pegou o escudo" << endl;
	}
	cout << "Voce fugiu " << meuPersonagem.Run << " vezes" << endl;
	system("pause");
	exit(0);
}

void mostra(int matriz2[5][5], Personagem meuPersonagem, int aux) {
	matriz2[meuPersonagem.x][meuPersonagem.y] = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matriz2[i][j] << "\t";
		}
		cout << endl;
	}
}

void Batalha(Personagem meuPersonagem, Boss chefe) {
	int resposta;

	if (chefe.vida <= 0) {
		cout << "voce derrotou o chefe." << endl;
		Finalizacao(meuPersonagem);
	}
	else if (meuPersonagem.VidaRestante <= 0) {
		cout << "Voce morreu para o Chefe, mais sorte na proxima" << endl;
		Finalizacao(meuPersonagem);
		system("pause");
		exit(0);
	}
	cout << "Vida do Chefe: " << chefe.vida << endl << "Sua vida: " << meuPersonagem.VidaRestante << endl;
	cout << "Escolha um ataque: " << endl << "1-Espada" << endl << "2-magia" << endl;
	cin >> resposta;

	if (resposta == 1) {
		chefe.vida = chefe.vida - (meuPersonagem.ataque - chefe.defesa);
		system("cls");
		meuPersonagem.VidaRestante = meuPersonagem.VidaRestante - (chefe.ataque - meuPersonagem.defesa);
		Batalha(meuPersonagem, chefe);
	}
	else if (resposta == 2) {
		chefe.vida = chefe.vida - (meuPersonagem.magia - chefe.defesa);
		system("cls");
		meuPersonagem.VidaRestante = meuPersonagem.VidaRestante - (chefe.ataque - meuPersonagem.defesa);
		Batalha(meuPersonagem, chefe);
	}
	else
	{
		cout << "Voce não escolheu uma das opcoes, por isso voce perdeu sua vez!!!" << endl;
		system("cls");

	}
	meuPersonagem.VidaRestante = meuPersonagem.VidaRestante - (chefe.ataque - meuPersonagem.defesa);

	Batalha(meuPersonagem, chefe);
}

int movimento(int matriz2[5][5], Personagem meuPersonagem, int aux, Boss chefe) {
	int escolha;

	cout << "Voce foi transportado para uma dimensao paralela, e tera um labirinto a percorrer"<<endl<<"se chegar no final ou derrotar o chefe sera salvo" << endl << "No mapa o 3 e o Chefe e o 4 e 5 sao paredes,e o 2 e a saida, boa sorte aventureiro" << endl;

	do
	{
		mostra(matriz2, meuPersonagem, aux);
		cout << "Quais direcao voce desejar ir: " << endl;
		cout << "1-para cima, 2-para esquerda, 3-para baixo, 4-para direita" << endl;
		cin >> escolha;
		switch (escolha)
		{
		case 1:

			if (matriz2[meuPersonagem.x - 1][meuPersonagem.y] == 4 || matriz2[meuPersonagem.x - 1][meuPersonagem.y] == 5) {
				cout << "Essa casa tem uma parede" << endl;
				movimento(matriz2, meuPersonagem, aux, chefe);
			}
			if (meuPersonagem.x <= 0) {
				cout << "Voce não pode sair do mapa!!" << endl;
				movimento(matriz2, meuPersonagem, aux, chefe);
			}
			if (matriz2[meuPersonagem.x - 1][meuPersonagem.y] == 3) {
				Batalha(meuPersonagem, chefe);
			}
			aux = meuPersonagem.x;
			matriz2[aux][meuPersonagem.y] = 0;
			meuPersonagem.x -= 1;
			break;
		case 2:
			if (matriz2[meuPersonagem.x][meuPersonagem.y - 1] == 4 || matriz2[meuPersonagem.x][meuPersonagem.y - 1] == 5) {
				cout << "Essa casa tem uma parede" << endl;
				movimento(matriz2, meuPersonagem, aux, chefe);
			}
			if (meuPersonagem.y <= 0) {
				cout << "Voce não pode sair do mapa!!" << endl;
				movimento(matriz2, meuPersonagem, aux, chefe);
			}
			if (matriz2[meuPersonagem.x][meuPersonagem.y - 1] == 3) {
				Batalha(meuPersonagem, chefe);
			}
			aux = meuPersonagem.y;
			matriz2[meuPersonagem.x][aux] = 0;
			meuPersonagem.y -= 1;
			break;
		case 3:
			if (matriz2[meuPersonagem.x + 1][meuPersonagem.y] == 4 || matriz2[meuPersonagem.x + 1][meuPersonagem.y] == 5) {
				cout << "Essa casa tem uma parede" << endl;
				movimento(matriz2, meuPersonagem, aux, chefe);
			}
			if (meuPersonagem.x >= 4) {
				cout << "Voce não pode sair do mapa!!" << endl;
				movimento(matriz2, meuPersonagem, aux, chefe);
			}
			if (matriz2[meuPersonagem.x + 1][meuPersonagem.y] == 3) {
				Batalha(meuPersonagem, chefe);
			}
			aux = meuPersonagem.x;
			matriz2[aux][meuPersonagem.y] = 0;
			meuPersonagem.x += 1;
			break;
		case 4:
			if (matriz2[meuPersonagem.x][meuPersonagem.y + 1] == 4 || matriz2[meuPersonagem.x][meuPersonagem.y + 1] == 5) {
				cout << "Essa casa tem uma parede" << endl;
				movimento(matriz2, meuPersonagem, aux, chefe);
			}
			if (meuPersonagem.y >= 4) {
				cout << "Voce não pode sair do mapa!!" << endl;
				movimento(matriz2, meuPersonagem, aux, chefe);
			}
			if (matriz2[meuPersonagem.x][meuPersonagem.y + 1] == 3) {
				Batalha(meuPersonagem, chefe);
			}
			aux = meuPersonagem.y;
			matriz2[meuPersonagem.x][aux] = 0;
			meuPersonagem.y += 1;
			break;
		}
	} while (meuPersonagem.x != 4 || meuPersonagem.y != 4);
	return 0;
}

void labirinto(Personagem meuPersonagem, Boss chefe) {

	int contador = 3;
	int aux = 0;
	int seila, seila2;

	srand(time(NULL));



	int matriz2[5][5] = {
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0,
		0,0,0,0,0,//3=Boss/4 e 5 parede//
		0,0,0,0,2
	};
	matriz2[meuPersonagem.x][meuPersonagem.y] = 1;

	do
	{
		seila = rand() % 5 + 1;
		seila2 = rand() % 5 + 1;
		if (matriz2[seila][seila2] == 0) {
			matriz2[seila][seila2] = contador;
			contador++;
		}

	} while (contador <= 5);


	movimento(matriz2, meuPersonagem, aux, chefe);
}

Personagem Matriz(bool verificacao, int sala, int SalasPosiveis[2], Personagem meuPersonagem) {
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

	if (matriz[sala - 1][2] == 30) {
		meuPersonagem.batalha();
		if (meuPersonagem.Life < 1) {
			Finalizacao(meuPersonagem);
		}
		
	}

	if (matriz[sala - 1][3] == 40 && meuPersonagem.Shield != true) {
		system("cls");
		cout << "Voce quer pegar o escudo?" << endl << "1 - Pegar" << endl << "2 - Nao Pegar" << endl;
		cin >> resposta;
		if (resposta == 1) {
			meuPersonagem.Shield = true;

		}
		while (resposta != 1 && resposta != 2)
		{
			cout << "Voce quer pegar o escudo?" << endl << "1 - Pegar" << endl << "2 - Nao Pegar" << endl;
			cin >> resposta;

		}
	}
	else if (matriz[sala - 1][4] == 20 && meuPersonagem.Sword != true) {
		system("cls");
		cout << "Voce quer pegar a espada?" << endl << "1 - Pegar" << endl << "2 - Nao Pegar" << endl;
		cin >> resposta;

		while (resposta != 1 && resposta != 2)
		{
			cout << "Voce quer pegar a espada?" << endl << "1 - Pegar" << endl << "2 - Nao Pegar" << endl;
			cin >> resposta;
		}

		if (resposta == 1) {
			meuPersonagem.Sword = true;
			
		}
	}
	if (matriz[sala - 1][3] == 50 && meuPersonagem.Key != true) {
		cout << "Voce quer pegar a chave?" << endl << "1 - Pegar" << endl << "2 - Nao Pegar" << endl;
		cin >> resposta;

		while (resposta != 1 && resposta != 2)
		{
			cout << "Voce quer pegar a chave?" << endl << "1 - Pegar" << endl << "2 - Nao Pegar" << endl;
			cin >> resposta;
		}
		if (resposta == 1) {
			meuPersonagem.Key = true;
		}
	}
	if (verificacao == true) {
		for (int i = sala; i <= sala; i++) {
			for (int j = 0; j < 2; j++) {
				SalasPosiveis[j] = matriz[i - 1][j];
			}
		}
		
	}

	return meuPersonagem;
	
}

void Movimento(Personagem meuPersonagem, Boss chefe) {

	int *SalasPossiveis;
	int resposta;
	SalasPossiveis = new int[2];
	SalasPossiveis[2] = { 0 };
	
	

	cout << "Voce esta na sala " << meuPersonagem.Room << endl;
	meuPersonagem= Matriz(true, meuPersonagem.Room, SalasPossiveis, meuPersonagem);
	cout << "Essas sao as salas possiveis para ir: " << endl;
	for (int i = 0; i < 2; i++) {
		cout << SalasPossiveis[i] << endl;
	}

	do {
		cout << "Digite a sala que deseja ir: " << endl;
		cin >> meuPersonagem.Room;
		cout << meuPersonagem.Room;

	} while (meuPersonagem.Room != SalasPossiveis[0] && meuPersonagem.Room != SalasPossiveis[1]);

	if (meuPersonagem.Room >= 13 && meuPersonagem.Key == true) {
		meuPersonagem.batalha();
		labirinto(meuPersonagem,chefe);
		Finalizacao(meuPersonagem);
	}
	else if (meuPersonagem.Room >= 13 && meuPersonagem.Key != true) {
		system("cls");
		if (meuPersonagem.Sword != true) {
			cout << "Voce nao pode enfrentar um monstro sem a espada, volte para pega-la." << endl;
		}
		cout << "Voce nao tem a chave, volte quando tiver ela." << endl;
		meuPersonagem.Room -= 1;
		Movimento(meuPersonagem, chefe);
	}


	Movimento(meuPersonagem, chefe);
}


