#include "Ajedrez.h"

Ajedrez::Ajedrez() {

	//Cargamos la textura del archivo
	texturaBlanca.loadFromFile("Unidad3_Assets\\chessw.png");
	texturaNegra.loadFromFile("Unidad3_Assets\\chessb.png");

	//Cargamos el material del sprite
	spriteBlanco.setTexture(texturaBlanca);
	spriteNegro.setTexture(texturaNegra);

	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 800, 32), " AJEDREZ ");

	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();

		//Hacer tablero
		for (int fila = 0; fila < 8; fila++) {
			for (int columna = 0; columna < 8; columna++) {
				float x = columna * 100;
				;				float y = fila * 100;

				if ((fila + columna) % 2 == 0) {
					spriteBlanco.setPosition(x, y);
					App.draw(spriteBlanco);
				}
				else {
					spriteNegro.setPosition(x, y);
					App.draw(spriteNegro);
				}
			}
		}


	}
}