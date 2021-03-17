#pragma once
#include "jornal.h";

class Jogo
{
public:
	Jogo();
	~Jogo();

	jornal jornal1;
	Sprite s;
	void inicializar();
	void finalizar();
	void executar();
};

