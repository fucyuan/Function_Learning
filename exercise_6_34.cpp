#include <iostream>
using namespace std;

// 返回指向包含 10 个整数的数组的指针
int (*func(int x))[10] {
    static int arr[10];  // 静态数组，确保返回的指针指向有效的数组
    for (int i = 0; i < 10; ++i) {
        arr[i] = x + i;  // 用 x 的值初始化数组
    }
    return &arr;  // 返回数组的地址
}

int main() {
    int (*p)[10] = func(5);  // 获取返回的数组指针
    for (int i = 0; i < 10; ++i) {
        cout << (*p)[i] << " ";  // 通过指针访问数组元素
    }
    cout << endl;
    return 0;
}
