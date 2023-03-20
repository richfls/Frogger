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
	int green = rand() % 100 + 200;
	int dircetion = RIGHT;
public:
	car(int xpos,int ypos,int direction);
};

