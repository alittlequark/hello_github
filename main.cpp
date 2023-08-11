#include "_swap.h"
using namespace std;
int main(int argc, char **argv)
{
    _swap myswap(10,20);
    // 测试push
    cout<<"before"<<endl;
    cout<<"test"<<endl;
    cout<<"test0999"<<endl;
    myswap.printInfo();
    myswap.run();
    cout<<"after"<<endl;
    myswap.printInfo();
    return 0;
}
