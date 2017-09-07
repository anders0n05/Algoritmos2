//BIBLIOTECA RESPONSAVEL COM INTERAÇAO DO USUARIO.

#ifndef INTERFACE_USUARIO_H
#define INTERFACE_USUARIO_H
#include<iostream>
using namespace std;
#define TAMANHO_MATRIZ 3;

void imprimeMatriz(char matriz[][]) {

	int i, j;

	for (i = 0; i < TAMANHO_MATRIZ; i++) {
		for (j = 0; j < TAMANHO_MATRIZ; j++) {

			matriz[i][j] = " ";
		}


	}

	for (i = 0; i < TAMANHO_MATRIZ; i++) {
		for (j = 0; j < TAMANHO_MATRIZ; j++) {

			cout << " | " << matriz[i][j]<<endl;
		}


	}


}








#endif
