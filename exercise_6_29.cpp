#include <iostream>
#include <initializer_list>
using namespace std;

void print(initializer_list<string> il) {
    // 使用 const 引用避免拷贝大类型对象
    for (const auto &elem : il) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    print({"Hello", "World", "C++", "is", "awesome"});
    return 0;
}
