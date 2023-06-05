#include <iostream>
#include "hero.h"
#include <windows.h>
#include <conio.h>

using namespace std;

int main ()
{
	//instansiansi
	hero hero;
	
	hero.locate(400, 400);
	
	while(true)
	{
		hero.draw();
		char key = getch();
		if (key == 'w') hero.move_fow();
		if (key == 'a') hero.move_left();
		if (key == 's') hero.move_back();
		if (key == 'd') hero.move_right();
	}

	
	return 0;
}
