#ifndef MULTIPLAYER_H
#define MULTIPLAYER_H
#define TAMANHO 3
//BIBLIOTECA RESPONSAVEL COM INTERAÇAO DO USUARIO.


#include<iostream>
#include<string>
using namespace std;
#define TAMANHO_MATRIZ 3
#include"operacional.h"

void exibir_matriz_vazia() {
	char matriz[TAMANHO][TAMANHO];
	int i, j;
		inicializar_matriz(matriz);

	for (int i = 0; i < TAMANHO; i++) {
		for (int j = 0; j < TAMANHO; j++) {

			cout << matriz[i][j];
			
		}
		

	}
}



void escolher_posicao() {

	char matriz[TAMANHO][TAMANHO], play1, play2;
	int jogada = 1;
	bool verifica = false;
	int i, j;
	inicializar_matriz(matriz);
	atribui_letra(play1, play2);

	for (int i = 0; i < TAMANHO; i++) {
		for (int j = 0; j < TAMANHO; j++) {
			cin >> i >> j;
			if (matriz[i][j] == 'q') {
				
				matriz[i][j] = play1;
				inicializar_matriz(matriz);

			}
			else {
				cout << "daaaaa";
			}

		}
		
	}

}

	




#endif

	