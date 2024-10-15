#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& vec, size_t index) {
    // 输出当前递归调用的调试信息
#ifndef NDEBUG
    cerr << "Recursion level: " << index << ", Vector size: " << vec.size() << endl;
#endif

    if (index < vec.size()) {
        cout << vec[index] << " ";
        printVector(vec, index + 1);
    }
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    printVector(vec, 0);
    return 0;
}
