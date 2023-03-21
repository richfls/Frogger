#include "Car.h"
#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;

void Car::draw(sf::RenderWindow& window) {
	sf::RectangleShape vehicle(sf::Vector2f(100, 50));
	vehicle.setFillColor(sf::Color(250, green, blue));
	vehicle.setPosition(xpos, ypos);
	window.draw(vehicle);
}

void Car::move() {
	if (direction == LEFT) {
		if (xpos < -100)
			xpos = 1100;
		xpos -= .1;
	}
	if (direction == RIGHT) {
		if (xpos > 1100)
			xpos = -100;
		xpos += .1;
	}
}
bool Car::collide(int x, int y) {
	if (xpos + 100 >= x && xpos <= x && ypos + 50 >= y && ypos <= y) {
		cout << "DED" << endl;
		return true;
	}
	else
		return false;
}
