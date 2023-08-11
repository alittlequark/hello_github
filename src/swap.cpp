#include "_swap.h"
void _swap::run()
{
    int temp;
    temp = _a;
    _a=_b;
    _b = temp;
}
void _swap::printInfo()
{
    std::cout<<"_a ="<<_a<<std::endl;
    std::cout<<"_b ="<<_b<<std::endl;
}