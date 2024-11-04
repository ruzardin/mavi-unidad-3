#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

class Fondo {
private:
	Texture texturaFondo;
	Sprite spriteFondo;

	float escX, escY;
	float height_text;
	float widght_text;

public:
	Fondo();
};
