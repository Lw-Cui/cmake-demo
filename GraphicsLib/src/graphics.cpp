#include <internal.h>

int func() { return 0; }

int bar() { return 4 + func(); }
