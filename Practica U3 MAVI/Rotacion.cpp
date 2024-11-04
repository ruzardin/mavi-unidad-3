#include "Rotacion.h"

Rotacion::Rotacion() {
	//Cargamos la textura del archivo
	textura.loadFromFile("Unidad3_Assets\\cuad_yellow.png");

	//Cargamos el material del sprite
	sprite.setTexture(textura);


	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), " 4 PLATAFORMA ");

	//Calcula el origen al sacar la mitad del tamanio total del spite 
	sprite.setOrigin(sprite.getLocalBounds().width / 2, sprite.getLocalBounds().height / 2);

	sprite.setScale(0.5, 0.5);
	sprite.setPosition(400, 300);

	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();

		App.draw(sprite);
		sprite.rotate(0.5);

		// Mostramos la ventana
		App.display();
	}
}