//顶层 const 的使用


#include <iostream>

void fcn(const int i) {
    // 虽然 i 是 const，但我们仍然可以将非常量对象传递给它
    std::cout << "Inside fcn, i = " << i << std::endl;
    // i = 100; // 这行代码会报错，因为 i 是 const，不能修改
}

int main() {
    int x = 42;
    const int y = 100;

    // fcn 可以接受常量和非常量
    fcn(x); // 正常，x 是非常量
    fcn(y); // 正常，y 是常量

    return 0;
}
