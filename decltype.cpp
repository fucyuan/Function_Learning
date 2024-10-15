#include <iostream>
using namespace std;

int odd[] = {1, 3, 5, 7, 9};  // 奇数数组
int even[] = {0, 2, 4, 6, 8}; // 偶数数组
using SI=int[5];
// 返回指向数组的指针，返回 odd 或 even 数组的指针
decltype(odd) *arrPtr(int i) {
    return (i % 2) ? &odd : &even;  // 如果 i 是奇数，返回 odd 数组；否则返回 even 数组
}
SI *arrPtrs(int i) {
    return (i % 2) ? &odd : &even;  // 如果 i 是奇数，返回 odd 数组；否则返回 even 数组
}
int main() {
    int i = 3;
    int (*arr)[5] = arrPtr(i);  // 获取数组指针
    for (int j = 0; j < 5; ++j) {
        cout << (*arr)[j] << " ";  // 打印数组元素
    }
    cout << endl;

    return 0;
}
