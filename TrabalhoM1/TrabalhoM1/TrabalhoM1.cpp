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


	switch (menu) {
	case 1:

		play1_vs_play2();

	case 2:

		play1_vs_CPU();

	default:
		cout << "Opção invalida";
	}
}

