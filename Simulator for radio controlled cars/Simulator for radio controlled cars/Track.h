#pragma once

class Track
{
public:
	Track();
	~Track();
	int getHeight();
	int getWidth();
	void setHeight(int height);
	void setWidth(int width);

private:
	int Height, Width;
};

