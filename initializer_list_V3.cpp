#include <iostream>
#include <initializer_list>
#include <string>
using namespace std;

// 模拟错误码
enum class ErrCode { Warning, Error };

// error_msg 函数，接受 ErrCode 和 initializer_list<string>
void error_msg(ErrCode e, initializer_list<string> il) {
    cout << "Error Code: " << (e == ErrCode::Error ? "Error" : "Warning") << endl;
    for (const auto &elem : il) {
        cout << elem << "   ";
    }
    cout << endl;
}

int main() {
    string expected = "output";
    string actual = "out";

    // 如果 expected 不等于 actual，打印详细信息
    if (expected != actual)
        error_msg(ErrCode::Error, {"functionX", expected, actual});
    else
        error_msg(ErrCode::Warning, {"functionX", "okay"});

    return 0;
}
