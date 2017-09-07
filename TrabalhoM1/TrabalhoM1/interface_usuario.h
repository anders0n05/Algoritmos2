/*

#ifndef INTERFACE_USUARIO_H
#define INTERFACE_USUARIO_H
#include<iostream>
#include<string>
using namespace std;
#define TAMANHO_MATRIZ 3

void letra_escolhida(char play1, char play2) {RESPONSAVEL POR ATRIBUIR LETRA AO JOGADORES
	string nome1, nome2;
	cout <<"Digite o nome dos jogadores" << endl;
	getline(cin,nome1);
	getline(cin, nome2);
	cout << "Escolha uma letra 'x' ou 'o' " << endl;
	cin.getline (play1);
	cin.getline(play2);


	if (play1 == 'x' || 'X') {

		play1 =	'X';
		play2 = 'O';

	}
	else if (play2 == 'o' || play2 == 'O') {

		play1 = 'X';
		play2 = 'O';
	}
	else {
		cout<<"Letra invalida, Somente 'X' ou 'O'";
	}
	cout << "Play 1 escolheu :  " << play1<< endl;
	cout << "Play 2 escolheu : " << endl;
}








#endif
*/