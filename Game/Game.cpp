#include <stdio.h>
#include "Character.h"

int main()
{
	Character character;

	while (1)
	{
		character.Update();
		character.Render();

		system("cls");
	}


	return 0;
}