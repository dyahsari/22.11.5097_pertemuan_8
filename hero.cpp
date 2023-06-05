#include "hero.h"
#include <iostream>


//constructor
hero::hero()
{
	posX = 0;
	posY = 0;
	std::cout << "creating a hero at " << posX << ", " << posY << "\n";
}

//destructor
hero::~hero()
{
	std::cout << "deleting a hero\n";
}

//menempatkan hero pada lokasi x, y
void hero::locate(int x, int y)
{
	posX = x;
	posY = y;
}

//menggambar hero pada lokasi x, y
void hero::draw()
{
	std::cout << "drawing hero at " << posX << ", " << posY << "\n";
}

//gerak ke depan
void hero::move_fow()
{
	--posY;
}

//gerak ke belakang
void hero::move_back()
{
	++posY;
}

//gerak ke kiri
void hero::move_left()
{
	--posX;
}

//gerak ke kanan
void hero::move_right()
{
	++posX;
}
