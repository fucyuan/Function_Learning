#include <iostream>

// 交换函数，使用指针形参交换两个整数的值
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    std::cout << "Before swap:" << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // 调用 swap 函数
    swap(&num1, &num2);

    std::cout << "After swap:" << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
