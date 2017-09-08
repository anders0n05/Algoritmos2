// TrabalhoM1.cpp : Defines the entry point for the console application.
//
#include "interface_usuario.h"
#include "stdafx.h"
#include"multiplayer.h" 
#include <iostream>
using namespace std;
int main()
{   
	
	int menu=0;
	char matriz[TAMANHO][TAMANHO],play1,play2;
	cin >> menu;
	switch (menu) {
	case 1:
		
		exibir_matriz_vazia();
		
		escolher_posicao();
		
	case 2:

		
		break;
	default:
		cout << "Opção invalida";
	}
}

