#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    // 输出命令行参数
    cout << "Number of arguments: " << argc << endl;
    for (int i = 0; i < argc; ++i) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }
    return 0;
}
