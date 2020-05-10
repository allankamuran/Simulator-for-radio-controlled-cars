#pragma once
class Direction
{
public:
	Direction();
	~Direction();
	
	// Variables for the movment of the car
	enum {
		forward = 'F',
		back = 'B',
		right = 'R',
		left = 'L'
	};
};

