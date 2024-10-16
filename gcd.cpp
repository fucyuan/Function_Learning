//最大公约数求解
#include <iostream>
using namespace std;

// 函数：计算两个数的最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // 输入两个整数
    cout << "请输入两个整数：";
    cin >> num1 >> num2;

    // 计算并输出最大公约数
    cout << "最大公约数是: " << gcd(num1, num2) << endl;

    return 0;
}
