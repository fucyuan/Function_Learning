#include <iostream>

// 定义函数，演示形参、局部变量和局部静态变量的使用
void exampleFunction(int param) {
    // 形参 param 是通过调用传递给函数的
    std::cout << "Parameter (param): " << param << std::endl;
    
    // 局部变量，每次函数调用时都会初始化为0
    int localVar = 0;
    localVar++;
    std::cout << "Local variable (localVar): " << localVar << std::endl;
    
    // 局部静态变量，函数每次调用不会重新初始化
    static int staticVar = 0;
    staticVar++;
    std::cout << "Static variable (staticVar): " << staticVar << std::endl;
}

int main() {
    // 多次调用函数，观察变量变化
    std::cout << "First call:" << std::endl;
    exampleFunction(10);
    
    std::cout << "\nSecond call:" << std::endl;
    exampleFunction(20);
    
    std::cout << "\nThird call:" << std::endl;
    exampleFunction(30);
    
    return 0;
}
