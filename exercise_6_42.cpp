#include <iostream>
#include <string>
using namespace std;

// 返回单数或复数形式的单词
string make_plural(size_t ctr, const string &word, const string &ending = "s") {
    return (ctr == 1) ? word : word + ending;
}

int main() {
    cout << make_plural(1, "success", "es") << endl;  // 单数：success
    cout << make_plural(2, "success", "es") << endl;  // 复数：successes

    cout << make_plural(1, "failure") << endl;        // 单数：failure
    cout << make_plural(2, "failure") << endl;        // 复数：failures

    return 0;
}
