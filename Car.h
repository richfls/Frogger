#pragma once
#include<iostream>
#include <SFML/Graphics.hpp>
#include"global.h"
using namespace std;
class Car{
private:
	float xpos;
	float ypos;
	int green = rand() % 100 + 200;
	int blue = rand() % 100 + 200;
	int direction = RIGHT;

public:
	Car(int xpos,int ypos,int direction);
	void draw(sf::RenderWindow& window);
	void move();
	bool collide(int x, int y);
	void printinfo() { cout << "I am a car and position is" << xpos << "," << ypos << endl; }
};
