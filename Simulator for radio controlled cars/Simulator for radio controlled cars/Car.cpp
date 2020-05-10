#include "stdafx.h"
#include "Car.h"
#include "Direction.h"
#include "Heading.h"


Car::Car()
{
	meter = 1;
	carWidth = 1;
	carHeight = 1;
}

Car::~Car()
{
	// Destructor
}

// Here will the movment of the car happens and with help of the Direction and Heading classes
void Car::moveCar()
{
	switch (NextMove)
	{
	case Direction::forward:
		moveForward();
		break;
	case Direction::back:
		moveBack();
		break;
	case Direction::left:
		moveLeft();
		break;
	case Direction::right:
		moveRight();
		break;
	default:
		cout << "Error, wrong inputs" << endl;
		break;
	}
}

// Below will I get and set the variables for the respective variables 
void Car::setNextMove(char nextMove)
{
	NextMove = nextMove;
}

int Car::getPosX()
{
	return PosX;
}

int Car::getPosY()
{
	return PosY;
}

void Car::setPosX(int posX)
{
	PosX = posX;
}

void Car::setPosY(int posY)
{
	PosY = posY;
}

char Car::getHeading()
{
	return Heading;
}

void Car::setHeading(char heading)
{
	Heading = heading;
}

void Car::moveForward()
{
	switch (Heading)
	{
	case Heading::north:
		PosY++;
		break;
	case Heading::east:
		PosX++;
		break;
	case Heading::south:
		PosY--;
		break;
	case Heading::west:
		PosX--;
		break;
	default:
		break;
	}
}

void Car::moveBack()
{
	switch (Heading)
	{
	case Heading::north:
		PosY--;
		break;
	case Heading::east:
		PosX--;
		break;
	case Heading::south:
		PosY++;
		break;
	case Heading::west:
		PosX++;
		break;
	default:
		break;
	}
}

void Car::moveRight()
{
	switch (Heading)
	{
	case Heading::north:
		Heading = Heading::east;
		break;
	case Heading::east:
		Heading = Heading::south;
		break;
	case Heading::south:
		Heading = Heading::west;
		break;
	case Heading::west:
		Heading = Heading::north;
		break;
	default:
		break;
	}
}

void Car::moveLeft()
{
	switch (Heading)
	{
	case Heading::north:
		Heading = Heading::west;
		break;
	case Heading::west:
		Heading = Heading::south;
		break;
	case Heading::south:
		Heading = Heading::east;
		break;
	case Heading::east:
		Heading = Heading::north;
		break;
	default:
		break;
	}
}