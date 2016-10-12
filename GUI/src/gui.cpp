#include <gui.h>
#include <easylogging++.h>

const char *str() {
    LOG(DEBUG) << __FUNCTION__;
    return "Hello world";
}
