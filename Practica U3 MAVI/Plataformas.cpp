#include "Plataformas.h"

Plataformas::Plataformas() {

//Cargamos la textura del archivo
texturaPlataforma.loadFromFile("Unidad3_Assets\\plataforma.jpg");

//Cargamos el material del sprite
platforma1.setTexture(texturaPlataforma);
platforma2.setTexture(texturaPlataforma);
platforma3.setTexture(texturaPlataforma);
platforma4.setTexture(texturaPlataforma);
platforma5.setTexture(texturaPlataforma);
platforma6.setTexture(texturaPlataforma);
platforma7.setTexture(texturaPlataforma);
platforma8.setTexture(texturaPlataforma);

//Creamos la ventana
sf::RenderWindow App(sf::VideoMode(800, 600, 32), " 4 PLATAFORMA ");

platforma1.setPosition(50, 550);
platforma1.setScale(0.2, 0.5);

platforma2.setPosition(120, 500);
platforma2.setScale(0.2, 1.0);

platforma3.setPosition(190, 450);
platforma3.setScale(0.2, 1.5);

platforma4.setPosition(260, 400);
platforma4.setScale(0.2, 2.0);

platforma5.setPosition(330, 350);
platforma5.setScale(0.2, 2.5);

platforma6.setPosition(400, 300);
platforma6.setScale(0.2, 3.0);

platforma7.setPosition(470, 250);
platforma7.setScale(0.2, 3.5);

platforma8.setPosition(550, 250);
platforma8.setScale(0.9, 0.2);

// Loop principal
while (App.isOpen())
{
	// Limpiamos la ventana
	App.clear();

	App.draw(platforma1);
	App.draw(platforma2);
	App.draw(platforma3);
	App.draw(platforma4);
	App.draw(platforma5);
	App.draw(platforma6);
	App.draw(platforma7);
	App.draw(platforma8);

	// Mostramos la ventana
	App.display();
}
}
