#include <iostream>
using namespace std;

constexpr int new_sz() {
    return 42;
}

constexpr size_t scale(size_t cnt) {
    return new_sz() * cnt;
}

int main() {
    constexpr int foo = new_sz();  // foo 是编译时常量

    int arr[scale(2)];  // 正确，因为 scale(2) 是常量表达式
    cout << "Array size: " << sizeof(arr) / sizeof(arr[0]) << endl; // 输出数组大小

    return 0;
}
