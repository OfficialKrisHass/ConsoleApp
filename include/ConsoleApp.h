#pragma once

#include <string>

namespace Console {

	void Initialize();

	void Log(const std::string& message);
	void Log(const char* message);

}