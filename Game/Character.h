#pragma once
#include <iostream>

#include "Input.h"
#include "Transform.h"


class Character
{
private:
	Input input;
	const char * shape;

public:
	Character();

	void Update();

	void Render();


};

