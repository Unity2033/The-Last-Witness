#include "Transform.h"

Transform::Transform(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Transform::X() const
{
	return x;
}

int Transform::Y() const
{
	return y;
}

void Transform::SetX(int x)
{
	this->x = x;
}

void Transform::SetY(int y)
{
	this->y = y;
}

void Transform::Position(int x, int y)
{
	// X와 Y축을 설정하는 구조체입니다.
	COORD position = { x, y };

	// 콘솔 커서의 좌표를 설정하는 함수입니다.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}
