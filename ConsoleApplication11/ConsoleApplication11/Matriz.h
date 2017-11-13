#include "stdafx.h"
#include "Criacao dos players.h"





void Matriz() {
	string mat[5][5] = { "--","--","--","--","--","--","--","--","--","--","--","--","--","--","--","--","--","--","--","--","--","--","--","--","--" };


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == Thomas.linha && j == Thomas.coluna) {
				mat[i][j] = "Th";
			}
			if (i == Gina.linha && j == Gina.coluna) {
				mat[i][j] = "Gn";
			}
			if (i == Jorgin.linha && j == Jorgin.coluna) {
				mat[i][j] = "Jl";
			}
			if (i == Karlin.linha && j == Karlin.coluna) {
				mat[i][j] = "Kr";
			}
			if (i == MarkosPaulo.linha && j == MarkosPaulo.coluna) {
				mat[i][j] = "Mp";
			}
			cout << "|" << mat[i][j];
		}
		cout << endl;
	}

}





#pragma once

