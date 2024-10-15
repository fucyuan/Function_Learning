
#define NDEBUG  // 定义 NDEBUG 后，assert 不再进行检查
#include <cassert>
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    assert(x == 10);  // 如果 x 不等于 10，则会抛出错误
    cout << "x is 10" << endl;

   
    assert(x == 0);  // 这行代码不会执行任何检查
    
    cout << "Program continues..." << endl;
    return 0;
}
