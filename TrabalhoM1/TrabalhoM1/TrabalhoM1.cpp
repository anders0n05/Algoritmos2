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
		//arrumar esse menu
		altera_matriz(matriz_jogo);
		opcao_jogar_novamente(matriz_jogo);
		if (!opcao_jogar_novamente(matriz_jogo)) {

			 main();
		}

		
        
	case 2:

		
		break;
	default:
		cout << "Opção invalida";
	}
}

