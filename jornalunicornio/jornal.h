#pragma once
#include "libunicornio.h";





class jornal
{

	Sprite jornal;
	Texto nome, data, site, titulo, texto;
public:
	void inicializarsprite();
	void inicializardados();
	void desenharjornal();
	void desenharmateria();



};


