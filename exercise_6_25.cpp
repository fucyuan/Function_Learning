#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 3) { // 检查是否提供了两个命令行参数
        cout << "Usage: " << argv[0] << " <arg1> <arg2>" << endl;
        return 1;
    }

    // 将两个命令行参数连接成一个 string 对象
    string result = string(argv[1]) + " " + string(argv[2]);

    // 输出连接后的结果
    cout << "Concatenated string: " << result << endl;

    return 0;
}
