#pragma once
class Heading
{
public:
	Heading();
	~Heading();

	// The heading of the car 
	enum {
		north = 'N',
		east = 'E',
		west = 'W',
		south = 'S'
	};
};

