#ifndef FUNCIONAMENTO_H
#define FUNCIONAMENTO_H
#define TAMANHO 3
//BIBLIOTECA RESPONSAVEL PELO FUNCIONAMENTO DO JOGO

#include<string>
#include<iostream>

using namespace std;
#define TAMANHO_MATRIZ 3

#include<ctime>
#include<stdlib.h>





void desenha_matriz_jogo(char matriz_jogo[TAMANHO][TAMANHO]) {
	cout << "  0   1   2";
	cout << endl << endl;
	cout << "0" << "  " << matriz_jogo[0][0] << "|" << matriz_jogo[0][1] << " |" << matriz_jogo[0][2] << endl;
	cout << "  --------" << endl;
	cout << "1" << "  " << matriz_jogo[1][0] << "|" << matriz_jogo[1][1] << " |" << matriz_jogo[1][2] << endl;
	cout << "  --------" << endl;
	cout << "2" << "  " << matriz_jogo[2][0] << "|" << matriz_jogo[2][1] << " |" << matriz_jogo[2][2] << endl;

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

	if ((matriz_jogo[0][1] == matriz_jogo[1][1]) && (matriz_jogo[1][1] == matriz_jogo[2][1]) && (matriz_jogo[0][1] != ' ')) {

		return true;
	}
	if ((matriz_jogo[0][2] == matriz_jogo[1][2]) && (matriz_jogo[1][2] == matriz_jogo[2][2]) && (matriz_jogo[0][2] != ' ')) {

		return true;
	}
	else {
		return false;
	}

}
bool verifica_horizontais(char matriz_jogo[TAMANHO][TAMANHO]) {
	if ((matriz_jogo[0][0] == matriz_jogo[0][1]) && (matriz_jogo[0][1] == matriz_jogo[0][2]) && (matriz_jogo[0][0] != ' ')) {

		return true;
	}

	if ((matriz_jogo[1][0] == matriz_jogo[1][1]) && (matriz_jogo[1][1] == matriz_jogo[1][2]) && (matriz_jogo[1][0] != ' ')) {

		return true;
	}
	if ((matriz_jogo[2][0] == matriz_jogo[2][1]) && (matriz_jogo[2][1] == matriz_jogo[2][2]) && (matriz_jogo[2][0] != ' ')) {

		return true;
	}
	else {
		return false;
	}

}

bool verifica_jogo(char matriz_jogo[TAMANHO][TAMANHO]) {// responsavel por fazer todas as verificacoes de possivel ganhador


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
	cout << "\t\t\t\t\t=============================";
	cout << endl;
	cout << "\t\t\t\t\t  Parabens " << ganhador;
	cout << endl;
	cout << "\t\t\t\t\t  Voce Venceu";
	cout << endl;
	cout << "\t\t\t\t\t=============================";
	cout << endl;



}
void mensagem_menu_sair() {
	cout << endl << endl;

	cout << "\t\tDeseja Sair";
	cout << "\t\t\[1] Para sair";
	cout << "\t\t\[2] Jogar novamente";

}
void mensagem_sair() {

	cout << endl << endl;
	system("cls");
	cout << " BYE";


}
void tela_menu() {
	cout << "\t\t\t\t\t=============================";
	cout << endl;
	cout << "\t\t\t\t\t||Bem vindo ao jogo da Velha||";
	cout << endl;
	cout << "\t\t\t\t\t||   Escolha uma opcao:     ||";
	cout << endl;
	cout << "\t\t\t\t\t||[1] Multiplayer;          ||";
	cout << endl;
	cout << "\t\t\t\t\t||[2] Jogar contra Maquina  ||";
	cout << endl;
	cout << "\t\t\t\t\t=============================";
	cout << endl;


}

void mensagem_velha() {//interface

	cout << endl;
	cout << "\t\t\t\t\t||xxxxxxxxxxxxxxxxxxxxxxxxxxxx||";
	cout << endl;
	cout << "\t\t\t\t\t||            Deu             ||";
	cout << endl;
	cout << "\t\t\t\t\t||           Velha            ||";
	cout << endl;
	cout << "\t\t\t\t\t||xxxxxxxxxxxxxxxxxxxxxxxxxxxx||";
	cout << endl;

	cout << endl;


}


void nome_jogadores(string &jogador1, string &jogador2) {//le nome dos jogadores no modo Multiplayer
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
void nome_jogador(string &jogador, string &maquina) {//le nome dos jogador no modo user vc maquina
	cout << "\t\t\t\t\t=============================";
	cout << endl;
	cout << "\t\t\t\t\t||Digite o nome do jogador  ||";
	cout << endl;
	cout << "\t\t\t\t\t=============================";
	cout << endl;

	cout << endl;
	cin >> jogador;
	cout << endl;
	maquina = "MAQUINA";

	system("cls");
	cout << "\t\t\t\t\t=============================";
	cout << endl;
	cout << "\t\t\t\t\t" << jogador << "  VS  " << maquina;
	cout << endl;
	cout << "\t\t\t\t\t=============================";
	cout << endl;




}

void tela_fim_jogo() {//interface
	cout << "\t\t\t\t\t=============================";
	cout << endl;
	cout << "\t\t\t\t\t||	   FIM DE JOGO     ||";
	cout << endl;
	cout << "\t\t\t\t\t||   Escolha uma opcao:    ||";
	cout << endl;
	cout << "\t\t\t\t\t||  [1] Jogar novamente    ||";
	cout << endl;
	cout << "\t\t\t\t\t||  [2] Sair do jogo       ||";
	cout << endl;
	cout << "\t\t\t\t\t=============================";
	cout << endl;






}
int main();
void opcao_jogar_novamente(char matriz_jogo[TAMANHO][TAMANHO]) {//interface

	int opcao;





	system("pause");
	system("cls");
	tela_fim_jogo();
	cin >> opcao;

	switch (opcao)
	{
	case 1:
		system("cls");

		for (int i = 0; i < TAMANHO; i++) {//limpar a matriz para o proximo jogo
			for (int j = 0; j < TAMANHO; j++) {
				matriz_jogo[i][j] = ' ';
			}
		}
		main();// jogar novamente
		break;
	case 2:
		system("exit");
		break;
	default:
		cout << endl;
		cout << "Escolha [1] ou [2]";
		break;


	}




}
void valida_jogada(int &linha, int &coluna) {//responsavel por nao deixar o usuario digitar uma posicao invalida
	linha = 0, coluna = 0;
	do {
		cout << "Escolha linha e coluna:";
		cin >> linha >> coluna;
		if ((linha > 2 || linha < 0) || (coluna > 2 || coluna < 0)) {

			cout << endl << endl;
			cout << "Voce digitou uma posicao invalida";
			cout << endl;

		}
	} while ((linha > 2 || linha < 0) || (coluna > 2 || coluna < 0));



}

void jogar_multiplayer(char matriz_jogo[TAMANHO][TAMANHO]) {
	int coluna, linha, controla_jogo = false, velha = 0;
	bool controla_vez = false, encerra = false, jogada = false;
	string jogador1, jogador2;//fazer um jeito de exibir o ganhador;
	nome_jogadores(jogador1, jogador2);

	do {
		if (jogada == false) {
			while (controla_vez == false) {
				system("cls");
				desenha_matriz_jogo(matriz_jogo);
				cout << endl << endl;
				valida_jogada(linha, coluna);

				if (matriz_jogo[linha][coluna] == ' ') {
					matriz_jogo[linha][coluna] = 'X';
					controla_vez = true;
					jogada = true;
					system("cls");
					desenha_matriz_jogo(matriz_jogo);
					if (verifica_jogo(matriz_jogo) == true) {

						mensagem_ganhador(jogador1);
						opcao_jogar_novamente(matriz_jogo);
						controla_jogo = true;
						//return true;
					}

					else {
						velha++;
					}
				}

				else if (matriz_jogo[linha][coluna] != ' ') {
					cout << endl;
					cout << "Posicao ja preenchida" << endl;
					system("pause");
					cout << endl;
					controla_vez = false;
					controla_jogo = false;

				}


			}

		}
		else {

			while (controla_vez == true) {
				cout << endl;

				valida_jogada(linha, coluna);


				if (matriz_jogo[linha][coluna] == ' ') {
					matriz_jogo[linha][coluna] = 'O';
					controla_vez = false;
					jogada = false;
					system("cls");
					desenha_matriz_jogo(matriz_jogo);
					if (verifica_jogo(matriz_jogo) == true) {
						mensagem_ganhador(jogador2);
						opcao_jogar_novamente(matriz_jogo);
						controla_jogo = true;
						//return true;


					}
					else {

						velha++;
					}
				}
				else if (matriz_jogo[linha][coluna] != ' ') {
					cout << endl;
					cout << "Posicao ja preenchida";
					cout << endl;

					controla_vez = true;
					controla_jogo = false;
				}
			}

		}
		if (velha == 9) {

			mensagem_velha();

			opcao_jogar_novamente(matriz_jogo);
			controla_jogo = true;
			//return true;
		}


	} while (controla_jogo == false);











}


void jogar_contra_maquina(char matriz_jogo[TAMANHO][TAMANHO]) {//funcao responsavel por jogar contra maquina
	int coluna, linha, controla_jogo = false, velha = 0;
	bool controla_vez = false, encerra = false, jogada = false, rodada = false;
	string jogador1, maquina;
	nome_jogador(jogador1, maquina);
	srand(time(NULL));
	do {
		if (jogada == false) {//decidi quem joga
			cout << endl << "Vez da maquina" << endl;
			system("pause");
			while (controla_vez == false) {//computador comeca jogando com X
				rodada = false;
				while (rodada == false) {

					linha = rand() % TAMANHO;
					coluna = rand() % TAMANHO;

					if (matriz_jogo[linha][coluna] == ' ') {

						matriz_jogo[linha][coluna] = 'X';
						controla_vez = true;
						jogada = true;
						system("cls");
						desenha_matriz_jogo(matriz_jogo);
						rodada = true;
						if (verifica_jogo(matriz_jogo) == true) {

							mensagem_ganhador(maquina);
							opcao_jogar_novamente(matriz_jogo);
							controla_jogo = true;

						}

						else {
							velha++;
						}
					}
					else {
						rodada = false;
						controla_vez = false;
						jogada = false;
					}


				}


			}

		}
		else {

			while (controla_vez == true) {
				cout << endl;

				valida_jogada(linha, coluna);


				if (matriz_jogo[linha][coluna] == ' ') {
					matriz_jogo[linha][coluna] = 'O';
					controla_vez = false;
					jogada = false;
					system("cls");
					desenha_matriz_jogo(matriz_jogo);
					if (verifica_jogo(matriz_jogo) == true) {
						mensagem_ganhador(jogador1);
						opcao_jogar_novamente(matriz_jogo);
						controla_jogo = true;


					}
					else {

						velha++;
					}
				}
				else if (matriz_jogo[linha][coluna] != ' ') {
					cout << endl;
					cout << "Posicao ja preenchida";
					cout << endl;

					controla_vez = true;
					controla_jogo = false;
				}
			}

		}
		if (velha == 9) {//verifica se deu velha

			mensagem_velha();

			opcao_jogar_novamente(matriz_jogo);
			controla_jogo = true;

		}


	} while (controla_jogo == false);











}
#endif