#ifndef MULTIPLAYER_H
#define MULTIPLAYER_H

//BIBLIOTECA RESPONSAVEL COM INTERAÇAO DO USUARIO.


#include<iostream>
#include<string>
using namespace std;
#define TAMANHO_MATRIZ 3
#include"operacional.h"
void letra_escolhida(char play1, char play2) {//RESPONSAVEL POR ATRIBUIR LETRA AO JOGADORES
											  /*string nome1, nome2;
											  cout <<"Digite o nome dos jogadores" << endl;
											  getline(cin,nome1);
											  getline(cin, nome2);*/
	cout << "Escolha uma letra 'x' ou 'o' " << endl;
	cin >> play1;
	cin >> play2;
	bool letra = false;


	do {
		switch (play1) {
		case 'X':
			play1 = 'X';
			play2 = 'O';
			letra = true;
			break;
		case 'O':
			play1 = 'O';
			play2 = 'X';
			letra = true;
			break;
		default:
			cout << "letra invalida" << endl;
			letra = false;
			break;
			system("cls");
		} while (letra == false);
		cout << "Play 1 escolheu :  " << play1 << endl;
		cout << "Play 2 escolheu : " << endl;

	}
}
void desenhar_matriz(char matriz[3][3]) {
	char matriz[TAMANHO][TAMANHO];
	inicializar_matriz(matriz);
	cout << "\n" << "     \t  |   |  ";
	for (int i = 0; i < (TAMANHO - 1); i++) {
		cout << "\n  " << "\t--|---|--\n";


		for (int j = 0; j < (TAMANHO - 1); j++) {

			if (j % 2 == 0)
				cout << "    " <<  "\t  | " << matriz[i][j];
			else
				cout << matriz[i][j] << "| ";

		}
	}


}

void jogador_contra_jogador() {


}

	








#endif