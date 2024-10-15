#include <iostream>
using namespace std;

// #define NDEBUG  // 定义 NDEBUG 后，assert 不再进行检查

void print(const int ia[], size_t size) {
#ifndef NDEBUG
    cerr << __func__ << ": array size is " << size << endl;
#endif
    // 打印数组元素
    for (size_t i = 0; i < size; ++i)
        cout << ia[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    print(arr, 5);
    
    return 0;
}
