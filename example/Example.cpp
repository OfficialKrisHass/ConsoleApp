#include "ConsoleApp.h"

#include <iostream>

int main() {

	Console::Initialize();

	Console::Log("This is an example of how to use the Console App template library");

	std::cin.get();
	return 0;

}