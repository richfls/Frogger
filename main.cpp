#include "global.h"
#include "frog.h"
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;

int main() {
	srand(time(NULL));
	bool keys[] = { false,false,false,false };
	int timer = 0;
	sf::RenderWindow screen(sf::VideoMode(1000, 1000), "frogger!");
	frog player;
	while (screen.isOpen()) {
		//input
		sf::Event event;
		while (screen.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				screen.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
				keys[UP] = true;
			}
			else
				keys[UP] = false;
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
				keys[DOWN] = true;
			}
			else
				keys[DOWN] = false;
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
				keys[LEFT] = true;
			}
			else
				keys[LEFT] = false;
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
				keys[RIGHT] = true;
			}
			else
				keys[RIGHT] = false;
		}
		//physics
		timer++;
		if (timer > 200) {
			player.jump(keys);
			timer = 0;
		}
		
		



		//render
		screen.clear();
		player.draw(screen);
		screen.display();
	}
	cout << "game over." << endl;
	return 0;
}
