#include "stdafx.h"
#include <iostream>
#include "Simulation.h"


Simulation::~Simulation()
{
	// Destructor
}

Simulation::Simulation(int width, int height, int posX, int posY, char heading, string moveInput)
{
	// This if is for the program to check if you have put the car on the track 
	if (posX < height && posY < width)
	{
		newTrack.setWidth(width);
		newTrack.setHeight(height);
		newCar.setPosX(posX);
		newCar.setPosY(posY);
		newCar.setHeading(heading);
		MoveInput = moveInput;
	}
	else
	{
		cout << "Error, you have to put the car inside the track" << endl;
	}

}

void Simulation::runSimulation()
{
	// If the input is lowercase will this transform function turn it to a uppercase letter 
	for (int i = 0; i < MoveInput.length(); i++) 
	{
		transform(MoveInput.begin(), MoveInput.end(), MoveInput.begin(), ::toupper);
	}

	// Iterate through the commands and check if car hit a wall
	for (int i = 0; i < MoveInput.length(); i++) 
	{
		newCar.setNextMove(MoveInput[i]);
		newCar.moveCar();
		
		if (newCar.getPosX() < 0 ||
			newCar.getPosX() > newTrack.getWidth() - 1 ||
			newCar.getPosY() < 0 ||
			newCar.getPosY() > newTrack.getHeight() - 1) 
		{
			checkCar = 1;
			cout << "Error, the simulation was unsuccessful and the car has hit a wall" << endl << endl;
			break;
		}
	}
	if (!checkCar)
	{
		cout << "The simulation was successful! " << endl 
			<< "The cars is now at the position [" << newCar.getPosX() << " " << newCar.getPosY() 
			<< "]on the track" << "The heading of the car is [" << newCar.getHeading() << "]" << endl << endl;
	}
}
