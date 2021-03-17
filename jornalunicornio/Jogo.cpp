#include "Jogo.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);

	if (!gRecursos.carregouFonte("fonte"))
	{
		gRecursos.carregarFonte("fonte", "../assets/assets/pixelplay");
	}
	if (!gRecursos.carregouSpriteSheet("jogo"))
	{
		gRecursos.carregarSpriteSheet("jogo", "../assets/assets/JornalTemplate.png");
	}
	jornal1.inicializarsprite();
	jornal1.inicializardados();
}

void Jogo::finalizar()
{
	

	uniFinalizar();
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();
		jornal1.desenharjornal();
		jornal1.desenharmateria();

		uniTerminarFrame();
	}
}