#include <iostream>
#include <vector>
using namespace std;

// 递归输出 vector 对象的内容
void printVector(const vector<int>& vec, size_t index) {
    if (index == vec.size()) // 递归终止条件
        return;
    
    cout << vec[index] << " "; // 输出当前元素
    printVector(vec, index + 1); // 递归调用，处理下一个元素
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    printVector(vec, 0);  // 从索引 0 开始递归输出
    cout << endl;
    return 0;
}
