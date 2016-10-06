#include <internal.h>
#include <easylogging++.h>

int func() {
    LOG(DEBUG) << __FUNCTION__;
    return 0;
}

int bar() { return 4 + func(); }
