#include <graphics.h>
#include <interpreter.h>

int foo() {
    return bar() + 1;
}

int mymin(int a, int b){
    return a > b ? b : a;
}
