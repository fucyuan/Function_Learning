
//常量指针和指针常量
#include <iostream>

int main() {
    int a = 10;
    int b = 20;

    // 常量指针：指针指向的值不可改变，但指针本身可以指向不同的对象
    const int* p1 = &a;
    // *p1 = 30; // 错误，不能通过常量指针修改值
    p1 = &b; // 可以更改指针本身

    // 指针常量：指针本身不可改变，但可以修改指针指向的值
    int* const p2 = &a;
    *p2 = 30; // 可以通过指针常量修改值
    // p2 = &b; // 错误，不能修改指针本身

    std::cout << "a = " << a << std::endl;
    std::cout << "*p1 = " << *p1 << std::endl;
    std::cout << "*p2 = " << *p2 << std::endl;

    return 0;
}
