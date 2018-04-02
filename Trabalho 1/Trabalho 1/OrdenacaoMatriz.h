#pragma once
#define TAMANHO_MATRIZ 5

int maiorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ]) {
	int MaiorValor = matriz[0][0];
	for (int i = 0; i < TAMANHO_MATRIZ; i++) {
		for (int j = 0; j < TAMANHO_MATRIZ; j++) {
			if (MaiorValor < matriz[i][j]) {
				MaiorValor = matriz[i][j];
			}
		}
	}
	return MaiorValor;
}
int menorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ]) {
	int MenorValor = matriz[0][0];
	for (int i = 0; i < TAMANHO_MATRIZ; i++) {
		for (int j = 0; j < TAMANHO_MATRIZ; j++) {
			if (MenorValor > matriz[i][j]) {
				MenorValor = matriz[i][j];
			}
		}
	}
	return MenorValor;
}