#include "Transparencias.h"

Transparencias::Transparencias() {
	//Cargamos la textura del archivo
	texturaAzul.loadFromFile("Unidad3_Assets\\CIRCULO AZUL.png");


	//Cargamos el material del sprite
	spriteAzul.setTexture(texturaAzul);

	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 800, 32), " 6 COLORES ");

	spriteAzul.setScale(400 / (float)texturaAzul.getSize().x, 400 / (float)texturaAzul.getSize().y);

	spriteAzul.setOrigin(spriteAzul.getLocalBounds().width / 2, spriteAzul.getLocalBounds().height / 2);

	spriteAzul.setPosition(400, 400);


	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();

		App.draw(spriteAzul);


		// Mostramos la ventana
		App.display();
	}

}