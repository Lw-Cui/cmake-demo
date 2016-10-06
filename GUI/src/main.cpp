#include <iostream>
#include <interpreter.h>
#include <gui.h>
#include <easylogging++.h>

INITIALIZE_EASYLOGGINGPP

int main(int argc, char *argv[]) {
    START_EASYLOGGINGPP(argc, argv);

    int i = foo();
    std::cout << str() << std::endl << i << std::endl;
    LOG(INFO) << "Finish.";
    return 0;
}