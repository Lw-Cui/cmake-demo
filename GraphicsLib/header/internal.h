#ifndef TEST2_INTERNAL_H
#define TEST2_INTERNAL_H
int func();

class Tmp {
public:
    virtual ~Tmp()  {}
    Tmp() {}
    virtual void foo(int) = 0;
};

#endif //TEST2_INTERNAL_H
