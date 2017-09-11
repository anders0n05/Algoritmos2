// TrabalhoM1.cpp : Defines the entry point for the console application.
//
#include "interface_usuario.h"
#include "stdafx.h"
#include"funcionamento.h" 
#include <iostream>
using namespace std;

char matriz_jogo[TAMANHO][TAMANHO] = { ' ',' ',' ', ' ',' ', ' ',' ',' ', ' ' };

int main()
{   
	
	int menu = 0,opcao;
	tela_menu();
	cin >> menu;
	switch (menu) {
	case 1:
		//arrumar esse menu
		
		
		jogar_multiplayer(matriz_jogo);
		
		
		
		
        
	case 2:

		jogar_contra_maquina(matriz_jogo);

		
		break;
	default:
		cout << endl;
		cout << "Opcao invalida voce deve escolher uma opcao entre 1 e 2";
		cout << endl;
		system("pause");
		system("cls");
		 main();
	}
}

