#include <iostream>
#include "Enum.h"
#include "Constructor.h"


int main()
{
	Log log;
	log.SetLevel(Log::LevelError);
	log.Info("Hello!");
	log.Warning("Hello!");
	log.Error("Hello!");

	Entity e(10.0f, 5.0f);
	e.print();
	std::cin.get();
}