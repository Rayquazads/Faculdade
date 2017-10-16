
#include <iostream>

using namespace std;


void insertionSort(int Vetor[], int n)
{
	
	if (n <= 1)
		return;

	insertionSort(Vetor, n - 1);

	int Trocado = Vetor[n - 1];
	int j = n - 2;

	while (j >= 0 && Vetor[j] > Trocado)
	{
		Vetor[j + 1] = Vetor[j];
		j--;
	}
	Vetor[j + 1] = Trocado;
}


void MostrarVetor(int Vetor[], int n)
{
	for (int i = 0; i < n; i++)
		cout << Vetor[i] << " ";
}
#pragma once
