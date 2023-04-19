#include "ConsoleApp.h"

#include <iostream>

namespace Console {

	void Initialize() {

		std::cout << "Initialized the Console App Template!" << std::endl;

	}

	void Log(const std::string& message) { std::cout << message << std::endl; }
	void Log(const char* message) { std::cout << message << std::endl; }

}