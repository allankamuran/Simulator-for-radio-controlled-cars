#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class Car
{
public:
	Car();
	~Car();

	void moveCar();
	void setNextMove(char nextMove);

	int getPosX();
	int getPosY();
	void setPosX(int posX);
	void setPosY(int posY);
	char getHeading();
	void setHeading(char heading);

private:
	int PosX, PosY;
	int carWidth, carHeight;
	char Heading;
	double meter;
	char NextMove;

	// The respective move functions did I put in private because only this class should have access to these functions 
	void moveForward();
	void moveBack();
	void moveRight();
	void moveLeft();

};

