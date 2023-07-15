#pragma once

#include <iostream>

namespace Console {

    template<typename T> void Log(const T& msg) {

        std::cout << msg << std::endl;

    }

}