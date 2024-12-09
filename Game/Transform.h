#pragma once
#include <windows.h>
#include <conio.h>

class Transform
{
private:
	int x;
	int y;

public:
	Transform(int x = 0, int y = 0);
	
	int X() const;
	int Y() const;

	void SetX(int x);
    void SetY(int y);

	void Position(int x, int y);
};

