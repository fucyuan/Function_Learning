#include <iostream>
#include <initializer_list>
using namespace std;

// 使用 initializer_list 输出错误信息
void error_msg(initializer_list<string> il) {
    for (auto beg = il.begin(); beg != il.end(); ++beg) {
        cout << *beg << " ";
    }
    cout << endl;
}

int main() {
    // 调用 error_msg，传递多个字符串
    error_msg({"Error:", "File not found.", "Check the file path."});
    error_msg({"Warning:", "Low disk space."});
    return 0;
}
