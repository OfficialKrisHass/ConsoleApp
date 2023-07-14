#include <iostream>

#include <EntryPoint.h>
#include <ConsoleApp.h>

int PreInit() {

    std::cout << "Console App Pre Init Example!\n\n";
    return 0;

}
int PostInit() {

    std::cout << "Console App Post Init Example!\n";
    return 1;

}