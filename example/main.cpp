#include <iostream>

#include <EntryPoint.h>
#include <ConsoleApp.h>
#include <Logger.h>

int PreInit() {

    Console::Log("Console App Pre Init Example!\n");
    return 0;

}
int PostInit() {

    Console::Log("Console App Post Init Example!");
    return 0;

}