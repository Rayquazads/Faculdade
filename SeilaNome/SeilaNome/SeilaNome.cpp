// SeilaNome.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include "PIlha.h"
#include <iostream>

using namespace std;

int main()
{
	Pilha MinhaPilha(-1);
	int Dado = 0;

	if (MinhaPilha.PilhaVazia(MinhaPilha) == true) {
		cout << "pilha Vazia" << endl;
	}
	else
	{
		cout << "pilha com valor" << endl;
	}
	
	cin >> Dado;
	MinhaPilha = MinhaPilha.Push(MinhaPilha, Dado);
	cin >> Dado;
	MinhaPilha = MinhaPilha.Push(MinhaPilha, Dado);

	MinhaPilha.MostrarPilha(MinhaPilha);
	

    return 0;
}

