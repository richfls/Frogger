#include "frog.h"
#include "global.h"
#include<Windows.h>
#include <SFML/Graphics.hpp>

frog::frog() {
	xpos = 500;
	ypos = 954;
	lives = 5;
	xvel = 0;
	yvel = 0;
}

void frog::draw(sf::RenderWindow& window) {
	sf::RectangleShape frogpic(sf::Vector2f(20, 20));
	frogpic.setFillColor(sf::Color(50, 200, 50));
	frogpic.setPosition(xpos, ypos);
	window.draw(frogpic);
}

void frog::jump(bool *keys) {
	if (keys[UP] == true)
		yvel = -50;
	else if (keys[DOWN] == true)
		yvel = 50;
	else if (keys[LEFT] == true)
		xvel = -50;
	else if (keys[RIGHT] == true)
		xvel = 50;
	else {
		yvel = 0;
		xvel = 0;
	}
	ypos += yvel;
	xpos += xvel;
}

void frog::dead() {
	Beep(500, 500);
	lives--;
	xpos = 500;
	ypos = 954;
}
