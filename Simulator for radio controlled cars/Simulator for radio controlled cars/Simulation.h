#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Car.h"
#include "Track.h"
#include <algorithm>

using namespace std;

class Simulation
{
public:
	Simulation(int width, int height, int posX, int posY, char heading, string moveInput);
	~Simulation();
	void runSimulation();
private:

	Car newCar;
	Track newTrack;
	string MoveInput;
	int checkCar = 0;
};

