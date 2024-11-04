#include "Fondo.h"

Fondo::Fondo() {


texturaFondo.loadFromFile("Unidad3_Assets\\fondo.jpg");

//Cargamos el material del sprite
spriteFondo.setTexture(texturaFondo);

//Creamos la ventana
sf::RenderWindow App(sf::VideoMode(800, 600, 32), " FONDO 3 ");

//Obtener tamanio textura
height_text = (float)texturaFondo.getSize().y;
widght_text = (float)texturaFondo.getSize().x;

//Calculo de escala con ventana
escY = 600 / height_text;
escX = 800 / widght_text;

// Loop principal
while (App.isOpen())
{
	// Limpiamos la ventana
	App.clear();

	spriteFondo.setScale(escX, escY);

	App.draw(spriteFondo);

	// Mostramos la ventana
	App.display();
}
}
