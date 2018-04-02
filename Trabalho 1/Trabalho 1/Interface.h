#pragma once

#include "OrdenarVetor.h"
#include "OrdenacaoMatriz.h";
#include <iostream>

using namespace std;

void OpcaoVetor() {
	int vetor[5]{ 6, 4, 3, 5, 1 };
	int resposta;
	bool ordem;
	
	cout << "Para ordenar crescente 1 para decrescente 2." << endl;
	cin >> resposta;

	if (resposta == 1) {
		bubbleSort(vetor, 5, ordem=true);
		cout << "Maior valor eh: " << maiorValorEmVetor(vetor,5) << endl;			
		cout << "Menor valor eh: " << menorValorEmVetor(vetor,5) << endl;
	}
	else if (resposta == 2) {
		bubbleSort(vetor, 5, ordem=false);
		cout << "Maior valor eh: " << maiorValorEmVetor(vetor,5) << endl;
		cout << "Menor valor eh: " << menorValorEmVetor(vetor,5) << endl;
	}
	else
	{
		cout << "Valor invalido!" << endl;
	}
	
}

void OpcaoMatriz() {
	int resposta;
	int Matriz[5][5]{ 4,2,5,6,1,3,7,9,8,10,12,11,13,15,14,16,18,17,19,21,20,22,23,25,24 };

	cout << "Para o maior valor digite 1, para o menor digite 2: " << endl;
	cin >> resposta;

	if (resposta==1) {
		cout << "Maior valor eh: " << maiorValorEmMatriz(Matriz) << endl;
	}
	else if (resposta == 2) {
		cout << "Menor Valor eh: " << menorValorEmMatriz(Matriz) << endl;
	}
	else
	{
		cout << "Valor invalido!" << endl;
	}

}

void Menu() {
	int resposta,contador=0;
	cout << "Digite uma das opcoes: " << endl << "1-Ordenar vetor, maior valor do vetor e menor." << endl << "2-Menor e maior valor da matriz." << endl;
	cin >> resposta;
	
	if (resposta == 1) {
		OpcaoVetor();
	}
	else if (resposta == 2) {
		OpcaoMatriz();
	}
	else
	{
		cout << "Opcao invalida!" << endl;
	}
	
}