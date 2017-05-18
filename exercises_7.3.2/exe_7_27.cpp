#include <iostream>
#include "exe_7_27.h"

int main()
{
	Screen screen(5, 5, 'x');
	screen.move(4, 0).set('#').display();
	screen.display();
	return 0;
}
