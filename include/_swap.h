#pragma once
#include <iostream>

class _swap
{
private:
    /* data */
    int _a;
    int _b;

public:
    _swap(int a, int b)
    {
        this->_a = a;
        this->_b = b;
    };
    void run();
    void printInfo();
};
