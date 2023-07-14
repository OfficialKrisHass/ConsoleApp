#include "ConsoleApp.h"

#include <iostream>

namespace Console {

    void DisplayLicense();

    void Initialize() {

        DisplayLicense();

    }

    void DisplayLicense() {

        std::cout << "----------------------------------------------------------------------------------------\n";
		std::cout << "-----This App has been made using the Console App Template developed by Chris Husky-----\n";
		std::cout << "-------------------------https://github.com/OfficialChrisHusky--------------------------\n";
		std::cout << "----------------------------------------------------------------------------------------\n\n";

    }

}