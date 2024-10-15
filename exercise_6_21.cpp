#include <iostream>
using namespace std;

int compare(int a, const int* b) {
    // 比较 a 和指针 b 所指向的值，返回较大的值
    return (a > *b) ? a : *b;
}

int main() {
    int x = 10;
    int y = 15;
    cout << "Larger value: " << compare(x, &y) << endl;
    return 0;
}
