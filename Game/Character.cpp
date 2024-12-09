#include "Character.h"

Character::Character()
{
	shape = "¡Ú";
}

void Character::Update()
{
	input.OnEnter();
	input.Update();
}

void Character::Render()
{
	std::cout << shape;
}
