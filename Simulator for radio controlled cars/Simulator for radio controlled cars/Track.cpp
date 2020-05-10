#include "stdafx.h"
#include "Track.h"

Track::Track()
{
	// Constructor
}

Track::~Track()
{
	// Destructor
}

// Below will I get and set the variables for the respective variables 
int Track::getHeight()
{
	return Height;
}

int Track::getWidth()
{
	return Width;
}

void Track::setHeight(int height)
{
	Height = height;
}

void Track::setWidth(int width)
{
	Width = width; 
}