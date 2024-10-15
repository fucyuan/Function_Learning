// factMain.cc
#include <iostream>
#include "Chapter6.h"

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // 调用 fact 函数并输出结果
    std::cout << "Factorial of " << number << " is " << fact(number) << std::endl;

    return 0;
}
