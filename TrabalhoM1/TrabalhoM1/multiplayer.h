#ifndef MULTIPLAYER_H
#define MULTIPLAYER_H
#define TAMANHO 3
//BIBLIOTECA RESPONSAVEL COM INTERAÇAO DO USUARIO.

#include<string>
#include<iostream>

using namespace std;
#define TAMANHO_MATRIZ 3
#include"operacional.h"




void desenha_matriz_jogo(char matriz_jogo[TAMANHO][TAMANHO]) {
	cout <<"  0   1   2";
	cout << endl << endl;
	cout <<"0"<< "  "<< matriz_jogo[0][0] << "|" << matriz_jogo[0][1] << " |" << matriz_jogo[0][2] << endl;
	cout << "  --------" << endl;
	cout <<"1"<< "  "<< matriz_jogo[1][0] << "|" << matriz_jogo[1][1] << " |" << matriz_jogo[1][2] << endl;
	cout << "  --------" << endl;
	cout <<"2"<< "  "<< matriz_jogo[2][0] << "|" << matriz_jogo[2][1] << " |" << matriz_jogo[2][2] << endl;
	
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
	
	system("cls");
	cout << endl << endl;
	cout << "\t\t\t\t||   Parabens o " <<ganhador<<"ganhou o jogo||";
	
	


}
void mensagem_menu_sair() {
	cout << endl << endl;
	
	cout << "\t\t\Deseja Sair?";
	cout << "\t\t\[1] Para sair";
	cout << "\t\t\[2] Jogar novamente";
	
}
void mensagem_sair() {

	cout << endl << endl;
	system("cls");
	cout << " BYE";


}
void tela_menu() {
	cout <<"\t\t\t\t\t=============================";
	cout << endl;
	cout <<"\t\t\t\t\t||Bem vindo ao jogo da Velha||";
	cout << endl;
	cout <<"\t\t\t\t\t||   Escolha uma opcao:     ||";
	cout << endl;
	cout << "\t\t\t\t\t||[1] Multiplayer;          ||";
	cout << endl;
	cout << "\t\t\t\t\t||[2] Jogar contra Maquina  ||";
	cout << endl;
	cout << "\t\t\t\t\t=============================";
	cout << endl;
	

}

void mensagem_velha() {
	cout << endl << endl;
	system("cls");
	cout << "\n\t\tDeu velha, sejam mais esperto na proxima :p";


}


void nome_jogadores(string &jogador1, string &jogador2) {
	cout << "\t\t\t\t\t=============================";
	cout << endl;
	cout << "\t\t\t\t\t||Digite o nome do jogadores||";
	cout << endl;
	cout << "\t\t\t\t\t=============================";
	cout << endl;

	
	cin >> jogador1;
	cout << endl;	
	cin >> jogador2;
	



}
void valida_jogada(int linha,int coluna) {

	do {
		cout << "Escolha linha e coluna:";
		cin >> linha >> coluna;
		if ((linha > 2 || linha < 0) || (coluna > 2 || coluna < 0)) {

			system("cls");
			cout << "Voce digitou uma posicao invalida";
			cout << "endl";

		}
	} while ((linha > 2 || linha < 0) || (coluna > 2 || coluna < 0));
		
	

}
bool altera_matriz(char matriz_jogo[TAMANHO][TAMANHO]) {
	int coluna, linha, controla_jogo = false, velha = 0;
	bool controla_vez = false, encerra = false, jogada = false;
	string jogador1,jogador2;//fazer um jeito de exibir o ganhador;
	nome_jogadores(jogador1, jogador2);
	
		do {
			if (jogada == false) {
				while (controla_vez == false) {
					system("cls");
					desenha_matriz_jogo(matriz_jogo);
					cout << endl << endl;
					valida_jogada(linha,coluna);
					
					if (matriz_jogo[linha][coluna] == ' ') {
						matriz_jogo[linha][coluna] = 'X';
						controla_vez = true;
						jogada = true;
						system("cls");
						desenha_matriz_jogo(matriz_jogo);
						if (verifica_jogo(matriz_jogo) == true) {

							mensagem_ganhador(jogador1);
							controla_jogo = true;
							return true;
						}

						else {
							velha++;
						}
					}

					else if (matriz_jogo[linha][coluna] != ' ') {
						cout << endl;
						cout << "Posicao ja preenchida";
						controla_jogo = false;
						
					}


				}

			}
			else  {

				while (controla_vez == true) {
					cout << endl;
					cout << "Escolha linha e coluna:";
					cin >> linha >> coluna;
					valida_jogada(linha, coluna);
					if (matriz_jogo[linha][coluna] == ' ') {
						matriz_jogo[linha][coluna] = 'O';
						controla_vez = false;
						jogada = false;
						system("cls");
						desenha_matriz_jogo(matriz_jogo);
						if (verifica_jogo(matriz_jogo) == true) {
							mensagem_ganhador(jogador2);
							controla_jogo = true;
							return true;


						}
						else {

							velha++;
						}
					}
					else {
						cout << endl;
						cout << "Posicao ja preenchida";
						controla_jogo = false;
					}
				}

			}
			if (velha == 9) {

				cout << " vish mano deu velha!";
				controla_jogo = true;
			}


		} while (controla_jogo==false);
		
		
	

		return false;


	



}

void opcao_jogar_novamente(char matriz_jogo[TAMANHO][TAMANHO]) {

	int opcao;


	altera_matriz(matriz_jogo);
	if (verifica_jogo(matriz_jogo) == true) {

		cout << "parabens";
	}
	
	


}

	




#endif

	