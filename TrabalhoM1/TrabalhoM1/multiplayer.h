#ifndef MULTIPLAYER_H
#define MULTIPLAYER_H
#define TAMANHO 3
//BIBLIOTECA RESPONSAVEL COM INTERAÇAO DO USUARIO.


#include<iostream>
#include<string>
using namespace std;
#define TAMANHO_MATRIZ 3
#include"operacional.h"




void desenha_matriz_jogo(char matriz_jogo[TAMANHO][TAMANHO]) {
	cout << matriz_jogo[0][0] << " |" << matriz_jogo[0][1] << " |" << matriz_jogo[0][2] << endl;
	cout << "--------" << endl;
	cout << matriz_jogo[1][0] << " |" << matriz_jogo[1][1] << " |" << matriz_jogo[1][2] << endl;
	cout << "--------" << endl;
	cout << matriz_jogo[2][0] << " |" << matriz_jogo[2][1] << " |" << matriz_jogo[2][2] << endl;
	
}
bool verifica_diagonal_principal(char matriz_jogo[TAMANHO][TAMANHO]) {

	if ((matriz_jogo[0][0] == matriz_jogo[1][1]) && (matriz_jogo[1][1] == matriz_jogo[2][2]) && (matriz_jogo[0][0] != ' ')) {

		return true;
	}
	else {
		return false;
	}

}
bool verifica_diagonal_secundaria(char matriz_jogo[TAMANHO][TAMANHO]) {
	if ((matriz_jogo[0][2] == matriz_jogo[1][1]) && (matriz_jogo[1][1] == matriz_jogo[2][0]) && (matriz_jogo[0][2] != ' ')) {

		return true;
	}
	else {
		return false;
	}


}
bool verifica_verticais(char matriz_jogo[TAMANHO][TAMANHO]) {
	if ((matriz_jogo[0][0] == matriz_jogo[1][0]) && (matriz_jogo[1][0] == matriz_jogo[2][0]) && (matriz_jogo[0][0] != ' ')) {

		return true;
	}
	
	if  ((matriz_jogo[0][1] == matriz_jogo[1][1]) && (matriz_jogo[1][1] == matriz_jogo[2][1]) && (matriz_jogo[0][1] != ' ')) {

		return true;
	}
	if  ((matriz_jogo[0][2] == matriz_jogo[1][2]) && (matriz_jogo[1][2] == matriz_jogo[2][2]) && (matriz_jogo[0][2] != ' ')) {

		return true;
	}
	else {
		return false;
	}

}
bool verifica_horizontais(char matriz_jogo[TAMANHO][TAMANHO]) {
	if ((matriz_jogo[0][0] == matriz_jogo[0][1]) && (matriz_jogo[0][1] == matriz_jogo[0][2])&&(matriz_jogo[0][0]!=' ')) {

		return true;
	}

	if ((matriz_jogo[1][0] == matriz_jogo[1][1]) && (matriz_jogo[1][1] == matriz_jogo[1][2])&&(matriz_jogo[1][0]!=' ') ){

		return true;
	}
	if  ((matriz_jogo[2][0] == matriz_jogo[2][1]) && (matriz_jogo[2][1] == matriz_jogo[2][2])&&(matriz_jogo[2][0]!=' ')) {

		return true;
	}
	else {
		return false;
	}

}
	
bool verifica_jogo(char matriz_jogo[TAMANHO][TAMANHO]) {
	
		
	if (verifica_diagonal_principal(matriz_jogo) == true) {

		return true;
	}
	if (verifica_diagonal_secundaria(matriz_jogo) == true) {

		return true;
	}
	if (verifica_verticais(matriz_jogo) == true) {

		return true;
	}
	if (verifica_horizontais(matriz_jogo) == true) {

		return true;
	}

	else {
		return false;
	}



}
void mensagem() {
	system("cls");
	cout << "Ganhouuuuuuuu";
}

int altera_matriz(char matriz_jogo[TAMANHO][TAMANHO]) {
	int coluna, linha, jogada = 1, conta_jogo;
	bool controla_jogo = false, encerra = false;

	do {
		if (jogada == 1) {
			while (controla_jogo == false) {

				cout << "Escolha linha e coluna:";
				cin >> linha >> coluna;
				if (matriz_jogo[linha][coluna] == ' ') {
					matriz_jogo[linha][coluna] = 'X';
					controla_jogo = true;
					jogada = 2;
					desenha_matriz_jogo(matriz_jogo);
					if (verifica_jogo(matriz_jogo) == true) {
						mensagem();
						conta_jogo = 9;
						return conta_jogo;
						
						
					}
					else {
						cout << "Posicao ja preenchida";
					}
					conta_jogo++;

				}
			}
		}
		else if (jogada == 2) {

			while (controla_jogo == true) {
				cout << "Escolha linha e coluna:";
				cin >> linha >> coluna;
				if (matriz_jogo[linha][coluna] == ' ') {
					matriz_jogo[linha][coluna] = '0';
					controla_jogo = false;
					jogada = 1;
					desenha_matriz_jogo(matriz_jogo);
					if (verifica_jogo(matriz_jogo) == true) {
						mensagem();
						conta_jogo = 9;
						return conta_jogo;


					}
				}
				else {
					cout << "Posicao ja preenchida";
				}
			}
			conta_jogo++;
		}


		






	} while (conta_jogo < 9 && conta_jogo!=9);



}

void mensagem_final() {

	




}

	




#endif

	