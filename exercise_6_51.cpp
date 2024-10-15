#include <iostream>
using namespace std;

// 版本 1：f(double, int)
void f(double d, int i) {
    cout << "f(double, int) called with values: " << d << ", " << i << endl;
}

// 版本 2：f(int)
void f(int i) {
    cout << "f(int) called with value: " << i << endl;
}

// 版本 3：f(int, int)
void f(int i1, int i2) {
    cout << "f(int, int) called with values: " << i1 << ", " << i2 << endl;
}

// 版本 4：f(double, double)
void f(double d1, double d2) {
    cout << "f(double, double) called with values: " << d1 << ", " << d2 << endl;
}

int main() {
    f(2.56, 42);      // 匹配 f(double, int)
    f(42);            // 匹配 f(int)
    f(42, 0);         // 匹配 f(int, int)
    f(2.56, 3.14);    // 匹配 f(double, double)
    return 0;
}
