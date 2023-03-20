#pragma once
#include<iostream>
#include <SFML/Graphics.hpp>
using namespace std;

class frog{
private:
	float xpos;
	float ypos;
	int lives;
	float xvel;
	float yvel;

public:
	frog();
	void draw(sf::RenderWindow& window);
	void jump(bool *keys);
	float returnX() { return xpos; }
	float returnY() { return ypos; }
	void dead();
	int returnlives() { return lives; }
	void printinfo() { cout << "I am a frog and my position is " << xpos << "," << ypos << endl; }

};

