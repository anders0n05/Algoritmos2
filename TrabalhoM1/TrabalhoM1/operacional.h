//Biblioteca responsavel pelo operacional do jogo sem contato com usuario
#ifndef OPERACIONAL_H
#define OPERACIONAL_H
#include"multiplayer.h"
#define TAMANHO 3
#include <iostream>
using namespace std;
void inicializar_matriz(char matriz[TAMANHO][TAMANHO]) {

	for (int  i = 0; i < TAMANHO; i++) {
		for (int  j= 0; j < TAMANHO; j++) {

			matriz[i][j] = 'q';

		}


	}
	
	for (int i = 0; i < TAMANHO; i++) {
		for (int j = 0; j < TAMANHO; j++) {

			cout << matriz[i][j];

		}


	}

}
void atribui_letra(char &play1, char &play2) {
	play1 = 'X';
	play2 = 'O';

}



//bool iniciar_jogo(int linha, int coluna) {
	
	

				






			
	
//}
#endif