#pragma once   

#include <windows.h>
#include <conio.h>

#include "Transform.h"

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

class Input
{
private:
	char key;

	Transform transform;

public:
	Input();

	Transform OnEnter();

	void Update();

};

