#pragma once

#include <iostream> 

using namespace std;

class Pilha
{
public:
	int Topo;
	int Capacidade[10] = {0};

	Pilha(int umTopo) {
		this->Topo = umTopo;
	}
		
	Pilha Push(Pilha umaPilha, int umDado) {
		umaPilha.Topo++;
		umaPilha.Capacidade[umaPilha.Topo] = umDado;
		return umaPilha;
	}

	void MostrarPilha(Pilha umaPilha) {
		for (int i = 0; i <= umaPilha.Topo; i++){
			cout << umaPilha.Capacidade[i]<<endl;
		}
	}

	bool PilhaVazia(Pilha pilha) {
		if (pilha.Topo == -1)
			return true;
		return false;
	}

private:

};

