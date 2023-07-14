#pragma once

extern int PreInit();
extern int PostInit();

namespace Console { extern void Initialize(); }

int main() {

    int tmp;

    tmp = PreInit(); if (tmp != 0) return tmp;
    Console::Initialize();
    tmp = PostInit(); if (tmp != 0) return tmp;

}