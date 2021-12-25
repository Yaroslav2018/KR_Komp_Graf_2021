#include "NewGarphics.h"

int main()
{
	NewGarphics game;
	
	if (!game.ConstructConsole(360, 200, 2, 2, L"Painter"))
		game.Loop();

	return 0;
}