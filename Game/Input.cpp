#include "Input.h"

Input::Input()
{
	key = 0;
}

void Input::Update()
{
	transform.Position(transform.X(), transform.Y());
}

Transform Input::OnEnter()
{
	if (_kbhit())
	{
		key = _getch();

		if (key == -32)
		{
			key = _getch();
		}

		switch (key)
		{
		case UP		: transform.SetY(transform.Y() - 1);
			break;
		case LEFT	: transform.SetX(transform.X() - 2);
			break;
		case RIGHT	: transform.SetX(transform.X() + 2);
			break;
		case DOWN	: transform.SetY(transform.Y() + 1);
			break;
		}

		return transform; 

		/*
			case UP: if (maze[character.y - 1][character.x / 2] != '1') character.y--;
				break;
			case LEFT: if (maze[character.y][character.x / 2 - 1] != '1') character.x -= 2;
				break;
			case RIGHT: if (maze[character.y][character.x / 2 + 1] != '1') character.x += 2;
				break;
			case DOWN: if (maze[character.y + 1][character.x / 2] != '1') character.y++;
		*/
	}
}
