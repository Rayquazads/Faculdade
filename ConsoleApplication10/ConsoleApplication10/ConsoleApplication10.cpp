// ConsoleApplication10.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include "InsertionSort.h"
#include "QuickSort.h"


using namespace std;


int main()
{
	int Vetor[] = { 13, 15, 25, 10, 32, 7, 2};
	int n = 7;
	QuickSort(vetor);
	insertionSort(Vetor, n);
	MostrarVetor(Vetor, n);

	return 0;
}
