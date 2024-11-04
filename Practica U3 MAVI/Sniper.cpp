#include "Sniper.h"

Sniper::Sniper() {

    sf::RenderWindow App(sf::VideoMode(800, 600, 32), " SNIPER ");

    // Cargamos la textura desde el archivo
    texture.loadFromFile("Unidad3_Assets/circle.png");

    // Asignamos la textura a los sprites
    sprite1.setTexture(texture);
    sprite2.setTexture(texture);
    sprite3.setTexture(texture);
    sprite4.setTexture(texture);

    // Colocamos los sprites en las esquinas
    sprite2.setPosition(670, 0);
    sprite3.setPosition(0, 470);
    sprite4.setPosition(670, 470);

    while (App.isOpen())
    {
        // Limpiamos la ventana
        App.clear();

        //Dibujamos la escena 
        App.draw(sprite1);
        App.draw(sprite2);
        App.draw(sprite3);
        App.draw(sprite4);

        // Mostramos la ventana
        App.display();
    }

}
