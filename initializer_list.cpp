#include <iostream>
#include <initializer_list>
using namespace std;

// 使用 initializer_list 来处理可变数量的参数
void print(initializer_list<int> values) {
    for (auto val : values) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    print({1, 2, 3, 4});   // 传递任意数量的整数
    print({10, 20});       // 传递两个整数
    print({});             // 空列表
    return 0;
}
