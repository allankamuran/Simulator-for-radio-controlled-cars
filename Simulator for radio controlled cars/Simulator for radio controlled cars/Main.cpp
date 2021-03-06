// Simulator for radio controlled cars - HiQ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Simulation.h"
#include "windows.h"

using namespace std;

int main()
{
	// These are the variables I will be using 
	int width, height, posX, posY;
	char heading;
	string moveInput;

	// Begins here 
	cout << "Simulator for radio controlled cars - HiQ" << endl << endl;

	// Input for the size of the track
	cout << endl << "Enter track size (e.g. 8 6): ";
	cin >> width >> height;

	// Input for where the car will start on the track 
	cout << endl << "Enter location and direction (e.g. 2 3 N): ";
	cin >> posX >> posY >> heading;

	// Input for the segement of the actions for the car 
	cout << endl << "Enter a row of actions (e.g. FFFRFFLBB ): ";
	cin >> moveInput;

	// Create the simulation
	Simulation simulation(width, height, posX, posY, heading, moveInput); 

	// Run the simulation and check if the car crashed and prints out the result 
	simulation.runSimulation();

	system("PAUSE");

    return 0;
}

