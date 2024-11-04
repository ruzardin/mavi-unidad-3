#include "Cuadrados.h"

Cuadrados::Cuadrados() {
	//Cargamos la textura del archivo
	texturaRojo.loadFromFile("Unidad3_Assets\\cuad_red.png");
	texturaAmarilla.loadFromFile("Unidad3_Assets\\cuad_yellow.png");
	texturaAzul.loadFromFile("Unidad3_Assets\\cuad_blue.png");
	texturaNegro.loadFromFile("Unidad3_Assets\\chessb.png");

	//Cargamos el material del sprite
	spriteRojo.setTexture(texturaRojo);
	spriteAmarillo.setTexture(texturaAmarilla);
	spriteAzul.setTexture(texturaAzul);
	spriteNegro.setTexture(texturaNegro);


	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 800, 32), " 6 COLORES ");

	spriteRojo.setScale(400 / (float)texturaRojo.getSize().x, 400 / (float)texturaRojo.getSize().y);
	spriteAmarillo.setScale(400 / (float)texturaAmarilla.getSize().x, 400 / (float)texturaAmarilla.getSize().y);
	spriteAzul.setScale(400 / (float)texturaAzul.getSize().x, 400 / (float)texturaAzul.getSize().y);
	spriteNegro.setScale(400 / (float)texturaNegro.getSize().x, 400 / (float)texturaNegro.getSize().y);

	spriteRojo.setPosition(0, 0);
	spriteAmarillo.setPosition(400, 0);
	spriteAzul.setPosition(0, 400);
	spriteNegro.setPosition(400, 400);

	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();

		App.draw(spriteRojo);
		App.draw(spriteAmarillo);
		App.draw(spriteAzul);
		App.draw(spriteNegro);

		// Mostramos la ventana
		App.display();
	}
}