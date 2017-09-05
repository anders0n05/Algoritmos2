//BIBLIOTECA RESPONSAVEL COM INTERAÇAO DO USUARIO.

#ifndef INTERFACE_USUARIO_H
#define INTERFACE_USUARIO_H
#include<iostream>
using namespace std;
#define TAMANHO_MATRIZ 3;

void imprimeMatriz(char matriz[][]) {

	int i, j;

	for (i = 0; i < TAMANHO_MATRIZ; i++) {
		for (i = 0; i < TAMANHO_MATRIZ; i++) {

			matriz[i][j] = " ";
		}


	}

	for (i = 0; i < TAMANHO_MATRIZ; i++) {
		for (i = 0; i < TAMANHO_MATRIZ; i++) {

			cout << " | " << matriz[i][j]endl;
		}


	}


}








#endif
