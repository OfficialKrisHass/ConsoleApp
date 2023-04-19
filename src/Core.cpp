#include "ConsoleApp.h"

#include <iostream>

namespace Console {

	void DisplayLicense();

	void Initialize() {

		DisplayLicense();

	}

	void Log(const std::string& message) { std::cout << message << std::endl; }
	void Log(const char* message) { std::cout << message << std::endl; }

	void DisplayLicense() {

		std::cout << "----------------------------------------------------------------------------------------" << std::endl;
		std::cout << "-----This App has been made using the Console App Tempalte developed by Chris Husky-----" << std::endl;
		std::cout << "-------------------------https://github.com/OfficialChrisHusky--------------------------" << std::endl;
		std::cout << "----------------------------------------------------------------------------------------" << std::endl;
		std::cout << std::endl;

	}

}