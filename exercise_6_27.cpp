#include <iostream>
#include <initializer_list>
using namespace std;

// 计算 initializer_list<int> 中所有元素的和
int sum(initializer_list<int> il) {
    int total = 0;
    for (auto elem : il) {
        total += elem;
    }
    return total;
}

int main() {
    // 测试 sum 函数
    cout << "Sum: " << sum({1, 2, 3, 4, 5}) << endl;  // 输出 15
    cout << "Sum: " << sum({10, 20, 30}) << endl;    // 输出 60
    return 0;
}
