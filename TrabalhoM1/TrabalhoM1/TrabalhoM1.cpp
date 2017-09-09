// TrabalhoM1.cpp : Defines the entry point for the console application.
//
#include "interface_usuario.h"
#include "stdafx.h"
#include"multiplayer.h" 
#include <iostream>
using namespace std;

char matriz_jogo[TAMANHO][TAMANHO] = { ' ',' ',' ', ' ',' ', ' ',' ',' ', ' ' };

int main()
{   
	
	int menu = 0;
	cout << "Digite '1' para jogar multiplayer e '2' para jogar contra CPU: " << endl;
	cin >> menu;
	switch (menu) {
	case 1:
		
		
         //desenha_matriz_jogo(matriz_jogo);
		altera_matriz(matriz_jogo);
		if (altera_matriz(matriz_jogo) == 9) {

			char opcao;
			cout << "Voce deseja jogar novamente:[S]/[N] ";
			cin >> opcao;

			switch (opcao)
			{
			case 's' || 'S':
				system("cls");
				main();
				break;
			case'n':
				system("cls");
				system("exit");
				break;
			default:



				break;
			}
		 }

		//verifica_jogo(matriz_jogo);
		//inicializar_matriz(matriz);
		//escolher_posicao(matriz);
		system("pause");
		
	case 2:

		
		break;
	default:
		cout << "Opção invalida";
	}
}

