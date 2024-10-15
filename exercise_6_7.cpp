#include <iostream>

// 定义一个函数，第一次调用返回0，以后每次调用返回值加1
int increment() {
    // 使用静态变量，初始值为0
    static int counter = 0;
    
    // 每次调用返回当前值，并递增
    return counter++;
}

int main() {
    // 测试函数的多次调用
    std::cout << "First call: " << increment() << std::endl;
    std::cout << "Second call: " << increment() << std::endl;
    std::cout << "Third call: " << increment() << std::endl;
    std::cout << "Fourth call: " << increment() << std::endl;

    return 0;
}
