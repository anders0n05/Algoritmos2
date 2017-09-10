#ifndef MULTIPLAYER_H
#define MULTIPLAYER_H
#define TAMANHO 3
//BIBLIOTECA RESPONSAVEL COM INTERAÇAO DO USUARIO.

#include<string>
#include<iostream>
#include<string.h>
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
void mensagem_ganhador(string &ganhador) {
	cout << endl << endl;
	
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||===========================================||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||                                           ||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||   Parabens o " << ganhador<<"ganhou o jogo||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||                                           ||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||===========================================||";
	


}
void mensagem_menu() {
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||===========================================||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||              Deseja Sair?                 ||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||  [1] Para sair                            ||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||  [2] Jogar novamente                      ||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||===========================================||";
}
void mensagem_sair() {

	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||===========================================||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||               Ate Mais;                   ||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||           Desenvolvido por:               ||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||	       Anderson Willian                ||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||===========================================||";



}

void mensagem_velha() {
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||===========================================||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||               x        x                  ||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||                    x                      ||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||	              Deu Velha!               ||";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\||===========================================||";


}

bool altera_matriz(char matriz_jogo[TAMANHO][TAMANHO]) {
	int coluna, linha, jogada = 1, controla_jogo=false;
	bool controla_vez = false, encerra = false;
	string ganhador;//fazer um jeito de exibir o ganhador;
	do {
		if (jogada == 1) {
			while (controla_vez == false) {

				cout << "Escolha linha e coluna:";
				cin >> linha >> coluna;
				if (matriz_jogo[linha][coluna] == ' ') {
					matriz_jogo[linha][coluna] = 'X';
					controla_vez = true;
					jogada = 2;
					desenha_matriz_jogo(matriz_jogo);
					if (verifica_jogo(matriz_jogo) == true) {

						mensagem_ganhador(ganhador);
						controla_jogo = true;
						return true;
					}

					else {
						//fazer um jeito para verificar quando deu velha,algo como um contador ate nove
					}
				}

				else if (matriz_jogo[linha][coluna] != ' ') {
					cout << endl;
					cout << "Posicao ja preenchida";
					controla_jogo = false;
				}


			}

		}
			else if (jogada == 2) {

				while (controla_vez == true) {
					cout << endl;
					cout << "Escolha linha e coluna:";
					cin >> linha >> coluna;
						if (matriz_jogo[linha][coluna] == ' ') {
						matriz_jogo[linha][coluna] = 'O';
						controla_vez = false;
						jogada = 1;
						desenha_matriz_jogo(matriz_jogo);
								if (verifica_jogo(matriz_jogo) == true) {
									mensagem_ganhador(ganhador);
									controla_jogo = true;
									return true;


								}
								else {
									
								//fazer um jeito para verificar quando deu velha,algo como um contador ate nove
								}
						}
						else {
							cout << endl;
							cout << "Posicao ja preenchida";
							controla_jogo = false;
						}
				}
			
			}


		






	} while (controla_jogo==false);



}

bool opcao_jogar_novamente(char matriz_jogo[TAMANHO][TAMANHO]) {

	int opcao;
	
	if (altera_matriz(matriz_jogo) == true || !altera_matriz(matriz_jogo)) {
		mensagem_menu();
		cout << endl;
		cin >> opcao;
		switch (opcao) {
		case 1:
		system("cls");
		mensagem_sair();
		system("exit");
		return true;
		break;
		case 2:
		return false;
		break;
		default:
			cout << "Opcao invalida";
			opcao_jogar_novamente(matriz_jogo);
			break;

		}
		
	}



}

	




#endif

	