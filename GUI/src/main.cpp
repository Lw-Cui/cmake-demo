#include <iostream>
#include <interpreter.h>
#include <gui.h>

int main() {
    int i = foo();
    std::cout << str() << std::endl << i << std::endl;
    return 0;
}